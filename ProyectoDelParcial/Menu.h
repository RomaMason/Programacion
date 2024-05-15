/*
 * Menu.h
 *
 *      Author: Camila Rivera, Joaquin, Eric Oro
 */
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <vector>
#include "Complejo.h"
#include "Poligono.h"

using namespace std;
/**
 * @fn void MenuPrincipal()
 * @brief Metodo que muestra el menu principal.
 *
 * Este metodo muestra y permite seleccionar opciones para realizar operaciones como lo son "Calcular la distancia euclidea entre dos complejos","Instanciar formas geometricas".
 */
void menuPrincipal();

/**
 * @fn void calculoDistanciaEuclidea()
 * @brief Metodo para calcular la distancia euclidea.
 *
 * Este metodo donde se puede calcular la distancia euclidea entre dos complejos, dando la opcion de hacerlo por teclado o por archivo.
 *
 */
void calculoDistanciaEuclidea();

/**
 * @fn void menuInstanciamiento()
 * @brief Metodo que muestra un submenu de instanciacion de formas geometricas.
 *
 * Este metodo es un submenu que perimite elegir instanciar formas geometricas con vectores segun la eleccion del usuario.
 *
 */
void menuInstanciamiento();

/**
 * @fn void instanciaTriangulo()
 * @brief Metodo que permite instancia un Triangulo a partir de vectores
 *
 *  Este metodo da la opcion al usuario elegir entre ingresar los vectores por teclado o por archivo. Ademas calcula el area y perimetro del triangulo.
 *  Tambien mostrando otro menu para guardar los datos en un archivo con un nombre por deafult (triangulo.dat) o que ingrese por teclado el nombre que le desee poner con su extencion pertinete.
 *
 */
void instanciaTriangulo();

/**
 * @fn void instanciaRectangulo()
 * @brief Metodo que permite instancia un Rectangulo a partir de vectores
 *
 *  Este metodo da la opcion al usuario elegir entre ingresar los vectores por teclado o por archivo. Ademas calcula el area y perimetro del rectangulo.
 *  Tambien mostrando otro menu para guardar los datos en un archivo con un nombre por deafult (rectangulo.dat) o que ingrese por teclado el nombre que le desee poner con su extencion pertinete.
 *
 */
void instanciaRectangulo();

/**
 * @fn void instanciaCuadrado()
 * @brief Metodo que permite instancia un Cuadrado a partir de vectores
 *
 *  Este metodo da la opcion al usuario elegir entre ingresar los vectores por teclado o por archivo. Ademas calcula el area y perimetro del cuadrado.
 *  Tambien mostrando otro menu para guardar los datos en un archivo con un nombre por deafult (rectangulo.dat) o que ingrese por teclado el nombre que le desee poner con su extencion pertinete.
 *
 */
void instanciaCuadrado();

/**
 * @fn Complejo ingresoDeDatos*(const int&, const int&)
 * @brief  Metodo para ingresar datos.
 *
 * Este metodo permite leer los datos por teclado o por archivo y devolvelos como un arreglo de Complejo.
 *
 * @param op : Este parametro recibe la opcion que eligio el usuario para realizar el ingreso.
 * @param n : El paramtero 'n' da el tamaño del arreglo de Complejo (predefinido con anterioridad en los metodo que lo llamaron).
 * @return : Devuele el arreglo de complejos como puntero.
 */
Complejo* ingresoDeDatos(const int& op,const int& n);

/**
 * @fn void exportacionDeInstancias(const Complejo*, const int&, const string&, const double&, const double&).
 * @brief Metodo que exporta los datos de las instancias.
 *
 *Este metodo me permite guardar un archivo con una estructura predeterminada, almacenando tanto los vectores como a los resultados como el area y el perimetro.
 *
 * @param pto : Este parametro recibe un puntero a arreglo de un Complejo.
 * @param n : Recibe el tamaño del arreglo.
 * @param name : Recibe el nombre del archivo con su extencion correspondiente.
 * @param area : Recibe el valor del area.
 * @param perimetro : Recibe el valor del perimetro.
 */
void exportacionDeInstancias(const Complejo* pto,const int& n,const string& name,const double& area,const double& perimetro);

#endif // HEADER_H_INCLUDED
