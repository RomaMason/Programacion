#include <iostream>

class Accumulator {
public:
    static int accumulatedValue;

    friend std::istream& operator>>(std::istream& is, Accumulator& accumulator) {
        int value;
        if (is >> value) {
            accumulator.accumulatedValue += value;
        }
        return is;
    }
};

int Accumulator::accumulatedValue = 0; // Inicialización de la variable estática

int main() {
    Accumulator acc;

    std::cout << "Enter an integer: ";
    std::cin >> acc;
    std::cout << "Accumulated value: " << Accumulator::accumulatedValue << std::endl;

    std::cout << "Enter another integer: ";
    std::cin >> acc;
    std::cout << "Accumulated value: " << Accumulator::accumulatedValue << std::endl;

    return 0;
}
