/**
 *
 * Complejo.cpp
 *
 *      Author: Camila Rivera, Joaquin Aguero, Eric Oro
 */

#include "Complejo.h"
#include <cmath>
// constructor por defecto
Complejo::Complejo()
{
	real = 0.0;
	imag = 0.0;
}
// constructor con argumentos
Complejo::Complejo( const double& re, const double& im):real(re),imag(im){}
// constructor de copia
Complejo::Complejo(const Complejo& c)
{
	*this = c;
}
//
void Complejo::SetData( const double& re, const double& im )
{
	real = re;
	imag = im;
}
//
void Complejo::SetData(const Complejo& c)
{
	*this = c;
}
void Complejo::SetReal(const double& re)
{
	real = re;
}
void Complejo::SetImag(const double& im)
{
	imag = im;
}
// operador miembro + sobrecargado
Complejo Complejo::operator+ (const Complejo &a)
{
	Complejo suma;
	suma.real = real + a.real;
	suma.imag = imag + a.imag;
	return suma;
}
// operador miembro + sobrecargado
Complejo Complejo::operator+ (const double &re)
{
	Complejo suma;
	suma.real = real + re;
	suma.imag = imag;
	return suma;
}
// operador miembro - sobrecargado
Complejo Complejo::operator- (const Complejo &a)
{
	Complejo resta;
	resta.real = real - a.real;
	resta.imag = imag - a.imag;
	return resta;
}
//operador miembro - sobrecargado
Complejo Complejo::operator- (const double &re)
{
	Complejo suma;
	suma.real = real + re;
	suma.imag = imag;
	return suma;
}
//
double Complejo::ProdEscalar (const Complejo& c)
{
	double prod( real * c.real + imag * c.imag );
	return prod;
}
//
Complejo& Complejo::operator= (const Complejo& c)
{
	real = c.real;
	imag = c.imag;
	return *this;
}
//
double Complejo::Distancia(const Complejo& c)
{
	double dist(0.0);
	double difR( real - c.real );
	double difImg( imag - c.imag );

	dist = sqrt( difR * difR + difImg * difImg );
	return dist;
}

//
double Complejo::DistanciaEuclidea(const Complejo& c){
	double X=pow(c.real-real,2);
	double Y=pow(c.imag-imag,2);
	double dist=pow(X+Y,0.5);
	return dist;
}
//
std::ostream& operator<< (std::ostream& os, const Complejo& c)
{
	os << "(" << c.GetReal() << ", " << c.GetImag() << ")";
	return os;
}
//
std::istream& operator>> (std::istream& is, Complejo& c){
	char c1;
	char c2;
	char c3;
	double d1;
	double d2;
	is >> c1;
	if(c1 !='('){
		throw SINTAXIS_ERROR;
	}
	is >> d1;

	is >> c2;
	if(c2!=','){
		throw SINTAXIS_ERROR;
	}
	is >> d2;
	is >> c3;
	if (c3 !=')'){
		throw SINTAXIS_ERROR;
	}
	c=Complejo(d1,d2);
	return is;
}
//
std::ifstream& operator>> (std::ifstream& file, Complejo& c){
	//Lo siguiente es para leer tal cual el archivo
	//string linea;
	//while(getline(file,linea)){
	// //Procesa la liea como desees
	//std::cout<<lineta<<std::endl;
	//}
	char c1;
	char c2;
	char c3;
	double d1;
	double d2;
	// Tengo que hacer que devuelva solo un Complejo.
	//Para la lectura de mas de un complejo debo manejar en el main2
	file >> c1;
	if(c1 !='('){
		throw SINTAXIS_ERROR;
	}
	file >> d1;
	file >> c2;
	if(c2 !=','){
		throw SINTAXIS_ERROR;
	}
	file >>d2;
	file >>c3;
	if(c3!=')'){
		throw SINTAXIS_ERROR;
	}
	c=Complejo(d1,d2);
	return file;
}
