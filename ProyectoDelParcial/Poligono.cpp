/*
 * Poligono.cpp
 *
 *	Author: Camila Rivera, Joaquin Aguero, Eric Oro
 */

#include <iostream>
#include <math.h>
#include "Poligono.h"
using namespace std;

Poligono::Poligono()
{
	cout << "En constructor de Poligono sin argumentos" << endl;
	cantVert=0;
	vert = NULL;
}

Poligono::Poligono( int n, const Complejo pto[] )
{
	cantVert=n;
	vert = new Complejo[cantVert];
//	cout << "En constructor de Poligono, this= " << (this)  << " y direccion de vert= " << (vert) << ", con vertices:" << endl;
	for( int i=0; i < cantVert; i++ )
	{
		vert[i] = pto[i];
		//luego se vera como es posible sobrecargar el operador de ostream << para tipos de datos definidos por el usuario
		cout << "vertice " << i << ": (" <<  vert[i] << ")\n";
	}
}
Poligono::~Poligono()
{
//	cout << "En destructor de Poligono con cantVert=" << cantVert << ", liberara mem de vert= " << vert << endl;
	if( cantVert > 0 )
		delete []vert;
}
// **** Triangulo ****
Triangulo::Triangulo( const Complejo pto[]):Poligono( 3, pto )
{
//	cout << "En constructor de Triangulo" << endl;
}
Triangulo::~Triangulo()
{
//	cout << "En destructor Triangulo" << endl;
}
double Triangulo::Area() const
{
	//como el area del paralelogramo limitado en un extremo por dos vectores coincide con la norma del producto
	//vectorial de los mismos, el area del triangulo es la mitad de la del paralelogramo
	//Estas operaciones pueden hacerse mediante el uso de metodos de bibliotecas, pero para iniciar el estudio,
	//se desarrollaran completamente, considerando los puntos como vectores en el plano complejo, luego los
	//vectores a considerar seran los vectores diferencia (vert[1] - vert[0]), (vert[2] - vert[0])
	Complejo vecDif1 = vert[1] - vert[0];
	Complejo vecDif2 = vert[2] - vert[0];
	double areaTriang( vecDif1.ProdEscalar(vecDif2)/2.0f );
	if( areaTriang < 0.0f )
		areaTriang = -areaTriang;
	return ( areaTriang );
}
double Triangulo::Perimetro() const
{
	//el perimetro lo evalua como la suma de las distancias entre los vertices
	double perim( vert[0].Distancia(vert[1]) +
	             vert[1].Distancia(vert[2]) +
	             vert[2].Distancia(vert[0]) );
	return perim;
}
// **** Rectangulo ****
Rectangulo::Rectangulo( const Complejo pto[]):Poligono( 4, pto )
{
//	cout << "En constructor de Rectangulo" << endl;
}
Rectangulo::~Rectangulo()
{
//	cout << "En destructor Rectangulo" << endl;
}
double Rectangulo::Area() const
{
	//como el area del rectangulo es igual al producto de base por su altura, se evaluan las distancias de
	//un vertice a los tres restantes y se multiplican las dos distancias menores
	double dist[3] = {vert[0].Distancia(vert[1]),vert[0].Distancia(vert[2]), vert[0].Distancia(vert[3])};
	for( int k=0; k < 2; k++ ) //ordena de menor a mayor
	{
		for( int i=k+1; i < 3; i++ )
		{
			if( dist[i] < dist[k] )
			{ //intercambio
				double dAux = dist[k];
				dist[k] = dist[i];
				dist[i] = dAux;
			}
		}
	}
	//
	double areaRectangulo( dist[0] * dist[1] );
	return ( areaRectangulo );
}
double Rectangulo::Perimetro() const
{
	//el perimetro lo evalua como la suma de las distancias entre los vertices
	double perim( vert[0].Distancia(vert[1]) +
	             vert[1].Distancia(vert[2]) +
	             vert[2].Distancia(vert[3]) +
	             vert[3].Distancia(vert[0]));
	return perim;
}
// **** Cuadrado ****
//auxiliar para evaluar igualdad entre doubles (o diferencia)
static bool EqDouble( const double& d1, const double& d2, const double& limInf )
{
	double difPos( d1- d2 );
	if( difPos < 0.0 )
		difPos = -difPos;
	return ( difPos < limInf );
}
//
Cuadrado::Cuadrado( const Complejo pto[]):Rectangulo( pto )
{
	cout << "En constructor de Cuadrado" << endl;
	//verifica que los vertices formen un cuadrado tomando las distancias entre un vertice y los otros 3
	//luego de ordenar, las dos distancias menores deben ser iguales entre si y la tercera sqrt(2) * distancia menor
	double dist[3] = {vert[0].Distancia(vert[1]),vert[0].Distancia(vert[2]), vert[0].Distancia(vert[3])};
	for( int k=0; k < 2; k++ ) //ordena de menor a mayor
	{
		for( int i=k+1; i < 3; i++ )
		{
			if( dist[i] < dist[k] )
			{ //intercambio
				double dAux = dist[k];
				dist[k] = dist[i];
				dist[i] = dAux;
			}
		}
	}
	const double limInf = dist[0] / 1000.0; //diferencia entre elementos double que permite considerarlos iguales
	if( !EqDouble(dist[0], dist[1], limInf) || !EqDouble(dist[2], (sqrt(2)*dist[0]), limInf) )
		throw int(ERROR_NO_CUADRADO);
}
//
Cuadrado::~Cuadrado()
{
//	cout << "En destructor Cuadrado" << endl;
}
//
double Cuadrado::Area() const
{
	//como el area del cuadrado se puede evaluar como la del rectangulo
	return(Rectangulo::Area());
}
//
double Cuadrado::Perimetro() const
{
	//como el perimetro del cuadrado se puede evaluar como el del rectangulo
	return(Rectangulo::Perimetro());
}

