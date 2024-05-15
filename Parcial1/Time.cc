#include <iostream>
#include <ctime> // Para std::time_t, std::tm, std::localtime, std::strftime
#include <string> // Para std::string

// Función para obtener la fecha y hora actual
std::string getCurrentDateTime() {
    // Obtener el tiempo actual en segundos desde el epoch
    std::time_t currentTime = std::time(nullptr);
    
    // Convertir el tiempo actual en una estructura tm (tiempo local)
    std::tm* localTime = std::localtime(&currentTime);
    
    // Formatear la fecha y hora
    char buffer[80];
    std::strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", localTime);
    
    // Devolver la fecha y hora formateada como una cadena
    return std::string(buffer);
}


int main() {
    // Obtener y mostrar la fecha y hora actual
    std::string dateTime = getCurrentDateTime();
    std::cout << "La fecha y hora actual es: " << dateTime << std::endl;
    
    return 0;
}


ifstream& operator>> (ifstream& dls,MainClass& main){
    string aux;
    float v,t,h,ll;
    Time tiempo;
	char d1,d2,d3,d4,d5,d6,d7,d8,d9;
    
    try{
        dls>>aux;
        v=stoi(aux);
        dls>>t;
        dls>>h;
        dls>>ll;
    } catch(const invalid_argument&){
        tiempo.Enlace(aux);
        dls>>v>>d6;	    
        dls>>t>>d7;
	    dls>>h>>d8;
	    dls>>ll>>d9;
        main.SetTime(tiempo);
    }
     main.SetClima(v,t,h,ll);
	return dls;
}
