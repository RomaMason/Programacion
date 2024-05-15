/*
 * Template/ComplejoTemplate.h
 *
 *  Created on: 19/04/2012
 *      Author: adrian
 */

#ifndef COMPLEJOTEMPLATE_H_
#define COMPLEJOTEMPLATE_H_

#include <iostream>
using namespace std;

template <class T>
class Complejo
{
	private:
		T real;
		T imag;
		T modulo;
		T faseGrados;
	public:
		// Constructores
		Complejo(void);
		Complejo(const T&, const T im=0.0);
		Complejo(const Complejo<T>&);
		// SetThings
		void SetData(const T& re, const T& im);
		void SetData(const Complejo<T>& c);
		void SetReal(const T&);
		void SetImag(const T&);
		// GetThings
		T GetReal(void) const{return real;}
		T GetImag(void) const{return imag;}
		// Sobrecarga de operadores aritmeticos
		Complejo<T> operator+ (const Complejo<T>&);
		Complejo<T> operator+ (const T&);
		Complejo<T> operator- (const Complejo<T>&);
		Complejo<T> operator* (const Complejo<T>&);
		Complejo<T> operator/ (const Complejo<T>&);
		// Sobrecarga del operador de asignacion
		Complejo<T>& operator= (const Complejo<T>&);
		// Sobrecarga de operadores de comparacion
		template <class Z>
		friend int operator== (const Complejo<Z>&, const Complejo<Z>&);
		template <class Z>
		friend int operator!= (const Complejo<Z>&, const Complejo<Z>&);
		// Sobrecarga del operador de insercion en el flujo de salida
		template <class Z>
		friend ostream& operator<< (ostream&, const Complejo<Z>&);
};

//implementaciones
// constructor por defecto
template <class T>
Complejo<T>::Complejo(void)
{
	real = 0.0;
	imag = 0.0;
}
// constructor con argumentos
template <class T>
Complejo<T>::Complejo( const T& re, const T im)
{
	real = re;
	imag = im;
}
// constructor de copia
template <class T>
Complejo<T>::Complejo(const Complejo<T>& c)
{
	this->imag = c.imag;
	this->imag = c.imag;
}
//
template <class T>
void Complejo<T>::SetData( const T& re, const T& im )
{
	real = re;
	imag = im;
}
//
template <class T>
void Complejo<T>::SetData(const Complejo<T>& c)
{
	*this = c;
}
template <class T>
void Complejo<T>::SetReal(const T& re)
{
	real = re;
}
template <class T>
void Complejo<T>::SetImag(const T& im)
{
	imag = im;
}
// operador miembro + sobrecargado
template <class T>
Complejo<T> Complejo<T>::operator+ (const Complejo<T> &a)
{
	Complejo<T> suma;
	suma.real = real + a.real;
	suma.imag = imag + a.imag;
	return suma;
}
// operador miembro + sobrecargado
template <class T>
Complejo<T> Complejo<T>::operator+ (const T &re)
{
	Complejo<T> suma;
	suma.real = real + re;
	suma.imag = imag;
	return suma;
}
// operador miembro - sobrecargado
template <class T>
Complejo<T> Complejo<T>::operator- (const Complejo<T> &a)
{
	Complejo<T> resta;
	resta.real = real - a.real;
	resta.imag = imag - a.imag;
	return resta;
}
template <class T>
ostream& operator<< (ostream& os, const Complejo<T>& c1)
{
	os << "(" <<  c1.real << ", " << c1.imag << ")";
	return os;
}

#endif 


// COMPLEJOTEMPLATE
