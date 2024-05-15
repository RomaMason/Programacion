#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include "TiempoClima.h"
#include "MainClass.h"

using namespace std;

void MenuPrincipal();
void MenuIngreso();
void IngresoDeDatosClimaticos(const int,const Time& );
void GuardadoDeDatosClimaticos(MainClass&);
void OrdenarDatosDeArchivo();

#endif // MENU_H