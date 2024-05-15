#include <iostream>
#include <stdexcept> // Para std::invalid_argument
#include <limits> // Para std::numeric_limits

// Función para solicitar un entero al usuario
int getIntFromUser() {
    int num;
    while (true) {
        try {
            std::cout << "Ingrese un número entero: ";
            std::cin >> num;

            // Verificar si la entrada fue exitosa
            if (std::cin.fail()) {
                std::cin.clear(); // Limpiar el estado de error
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
                throw std::invalid_argument("Entrada inválida. Por favor, ingrese un número entero.");
            }

            // La entrada fue exitosa, salir del bucle
            break;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    return num;
}

int main() {
    int num = getIntFromUser();
    std::cout << "El número ingresado es: " << num << std::endl;
    return 0;
}
