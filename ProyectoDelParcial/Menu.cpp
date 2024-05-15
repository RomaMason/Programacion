/*
 * Menu.cpp
 *
 *      Author: Camila Rivera, Joaquin, Eric Oro
 */
#include <iostream>
#include "Menu.h"
#include "Complejo.h"
#include "Poligono.h"
using namespace std;
//
//Guardado de datos de Instanciamiento
//
void exportacionDeInstancias(const Complejo* pto,const int& n,const string& name,const double& area,const double& perimetro){
    std::ofstream archivo(name);

    if (archivo.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            archivo << pto[i];
            if(i<n-1){
            	archivo << ",";
            }
        }
        archivo <<endl;
        archivo << "Area: " << area << endl;
        archivo << "Perimetro: "<< perimetro<< endl;
        archivo.close();
        cout << "Datos exportados correctamente en " << name << std::endl;
    }
    else
    {
        std::cout << "Error al abrir el archivo " << name << std::endl;
    }
}
//
//Ingreso de Datos
//
Complejo* ingresoDeDatos(const int& op,const int& n){
    Complejo* ArregloAux = new Complejo[n];
    if(op==1){
        cout<<"Ingrese datos del complejo en formato '(real,imaginaria)'"<<endl;
        for(int i=0;i<n;i++){
            cout<<"Complejo nro "<<i+1<<endl;
            cin >> ArregloAux[i];
        }
    }else if(op==2){
    	string nombreArch;
        ifstream arch01;
        cout<<"Ingrese el nombre del archivo con tipo de extencion: "<<endl;
        cin >> nombreArch;
        arch01.open(nombreArch, ios::in);
		// cout << arch01.toString() << endl;
		char c1;
		int i = 0;
		while(!arch01.eof()){
			arch01 >> ArregloAux[i];
			i++;
			arch01 >> c1;
			if(c1!=','){
				break;
			}
			// en la asignacion del ultimo valor, como ya no hay mas valores, mantiene el del ultimo signo '('
		}
		arch01.close();
    }else {return 0;}
    return ArregloAux;
}

void instanciaTriangulo(){
    double area,perimetro;
    string nombre;
    int selection;
    Complejo* pto= new Complejo[3];
    cout <<"== Valores de Triangulo ==\n"<<endl;
    cout <<"1. Ingresar por Teclado"<<endl;
    cout <<"2. Ingresar por Archivo"<<endl;
    cin >> selection;
    pto=ingresoDeDatos(selection,3);
    Triangulo triangulo(pto);
    cout<<"El area del triangulo es: "<<triangulo.Area()<<endl;
    cout<<"El perimetro del triangulo es: "<<triangulo.Perimetro()<<endl;
    area=triangulo.Area();
    perimetro=triangulo.Perimetro();
    //==Menu==
    cout<<"1.Exportar datos con nombre defaul"<<endl;
    cout<<"2.Ingresar el nombre del archivo con extencion de los datos a guargar"<<endl;
    cin>>selection;
    switch(selection){
    case 1:exportacionDeInstancias(pto,3,"triangulo.dat",area,perimetro);
     	 break;
    case 2:{
    	cout<<"Ingrese el nombre del archvio con extencion deseada: "<<endl;
    	cin>>nombre;
    	exportacionDeInstancias(pto,3,nombre,area,perimetro);}
    	break;
    }

    delete[] pto;
}
//
//Instanciamineto de Rectangulo
//
void instanciaRectangulo(){
	string nombre;
    double area,perimetro;
    int selection;
    Complejo* pto= new Complejo[4];
    cout <<"== Calculadora de distancia Euclidea ==\n"<<endl;
    cout <<"1. Ingresar por Teclado"<<endl;
    cout <<"2. Ingresar por Archivo"<<endl;
    cin >> selection;
    pto=ingresoDeDatos(selection,4);
    Rectangulo rectangulo(pto);
    cout<<"El area del Rectangulo es: "<<rectangulo.Area()<<endl;
    cout<<"El perimetro del Rectangulo es:"<<rectangulo.Perimetro()<<endl;
    area=rectangulo.Area();
    perimetro=rectangulo.Perimetro();
    //==Menu==
        cout<<"1.Exportar datos con nombre defaul"<<endl;
        cout<<"2.Ingresar el nombre del archivo con extencion de los datos a guargar"<<endl;
        cin>>selection;
        switch(selection){
        case 1:exportacionDeInstancias(pto,4,"rectangulo.dat",area,perimetro);
        break;
        case 2:{
        	cout<<"Ingrese el nombre del archvio con extencion deseada: "<<endl;
        	cin>>nombre;
        	exportacionDeInstancias(pto,4,nombre,area,perimetro);}
        	break;
        }

    delete[] pto;
}
//
//Instanciamiento de Cuadrado
//
void instanciaCuadrado(){
	string nombre;
    int selection,selection2;
    double area,perimetro;
    Complejo* pto= new Complejo[4];
    cout <<"== Calculadora de distancia Euclidea ==\n"<<endl;
    cout <<"Eliga una opcion:"<<endl;
    cout <<"1. Ingresar por Teclado"<<endl;
    cout <<"2. Ingresar por Archivo"<<endl;
    cin >> selection;
    pto=ingresoDeDatos(selection,4);
    Cuadrado cuadrado(pto);
    cout<<"El area del cuadrado es: "<<cuadrado.Area()<<endl;
    cout<<"El perimetro del cuadrado es: "<<cuadrado.Perimetro()<<endl;
    area=cuadrado.Area();
    perimetro=cuadrado.Perimetro();
    exportacionDeInstancias(pto,4,"Cuadrado.txt",area,perimetro);
        //==Menu==
            cout<<"1.Exportar datos con nombre defaul"<<endl;
            cout<<"2.Ingresar el nombre del archivo con extencion de los datos a guargar"<<endl;
            cin>>selection2;
            switch(selection2){
            case 1:exportacionDeInstancias(pto,4,"cuadrado.dat",area,perimetro);
            break;
            case 2:{
            	cout<<"Ingrese el nombre del archvio con extencion deseada: "<<endl;
            	cin>>nombre;
            	exportacionDeInstancias(pto,4,nombre,area,perimetro);}
            	break;
            }
    delete[] pto;
}
//
//  Menu de Instanciamineto de Formas Geometricas
//
void menuInstanciamiento(){
    int selection;
    cout <<"== Instanciamiento de una forma geometrica ==\n"<<endl;
    cout <<"1. Instaciacion de Triangulo"<<endl;
    cout <<"2. Instaciacion de Rectangulo"<<endl;
    cout <<"3. Instaciacion de Cuadrado"<<endl;
    cout <<"4. Exit"<<endl;
    cin >> selection;
    switch(selection){
        case 1: instanciaTriangulo();
            break;
        case 2: instanciaRectangulo();
            break;
        case 3: instanciaCuadrado();
            break;

        case 4: { system("cls"); cout<<"Adios ;)"<<endl;}
            break;

    }
}
//
//  Menu Para Calcular Distancia Euclidea
//
void calculoDistanciaEuclidea(){
    int selection;
    Complejo* pto= new Complejo[2];
    cout <<"== Calculadora de distancia Euclidea ==\n"<<endl;
    cout <<"1. Ingresar por Teclado"<<endl;
    cout <<"2. Ingresar por Archivo"<<endl;
    cout <<"3. Exit"<<endl;
    cin >> selection;
    pto=ingresoDeDatos(selection,2);
    cout<<"La distancia entre "<<pto[0]<<"y "<<pto[1]<<"es: "<<pto[0].DistanciaEuclidea(pto[1])<<endl;
    delete[] pto;
}
//
//  Menu Principal
//
void menuPrincipal(){
    int option;
    cout <<"== Menu de seleccion ==\n"<<endl;
    cout <<"1. Calculadora de distacia Euclidea"<<endl;
    cout <<"2. Instanciacion de forma geometrica"<<endl;
    cout <<"3. Exit"<<endl;
    cin >>option;
    switch (option){
        case 1: calculoDistanciaEuclidea();
                break;
        case 2: menuInstanciamiento();
                break;
        case 3: { system("clear"); cout<<"Adios ;)"<<endl;}
            break;
    }
}
