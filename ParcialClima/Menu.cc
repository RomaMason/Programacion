#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include "MainClass.h"
#include "TiempoClima.h"
#include "Menu.h"

using namespace std;

void GuardadoDeDatosClimaticos(MainClass& mainAux){
    
}

void IngresoDeDatosClimaticos(const int elec,const Time& tiempoActual){
    if (elec==1){
        string name;
        ifstream arch01;

        cout << "Ingrese el nombre del archivo con su extencion: "<<endl;
        cin >> name;
        arch01.open(name,ios::in);

        char c1;
        int i;

        if(!arch01.is_open()){
            cout << "Error al abrir el archivo"<<endl;
            return;
        }

        MainClass mainAux;
        while(!arch01.eof()){
            arch01 >> mainAux;
        }
        mainAux.SetTime(tiempoActual);
        arch01.close();
        GuardadoDeDatosClimaticos(mainAux);
    }
    if(elec==2){

    }
}
void MenuIngreso(){
    int elec;
    Time tiempoActual;
    
    tiempoActual.operatorTime();
    
    cout << "==============Menu de Ingreso de Datos =============="<<endl;

    tiempoActual.GetFecha();
    cout << "1. Ingresar datos por archivo"<<endl;
    cout << "2. Ingresar datos por tecaldo"<<endl;
    cout << "3. Regresar al menu principal"<<endl;
    cin >>  elec;

    switch (elec){
        case 1: IngresoDeDatosClimaticos(elec,tiempoActual);
            break;
        case 2: IngresoDeDatosClimaticos(elec,tiempoActual);
            break;
        case 3: MenuPrincipal();
            break;
    }
}

void Menu(){
}

void MenuPrincipal(){
    int elec;
    
    cout << "1. Ingresar Datos"<<endl;
    cout << "2. Ordenar Dator del archivo" <<endl;
    cout << "3. Salir"<<endl;
    cin >>  elec;

    switch (elec){
        case 1: MenuIngreso();
            break;
        case 2: OrdenarDatosDeArchivo();
            break;
        case 3: 
            break;
    }
}