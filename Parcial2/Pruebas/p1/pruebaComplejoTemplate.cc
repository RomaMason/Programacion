/*
 * Template/pruebaComplejoTemplate.cc
 *
 *  Created on: 19/04/2012
 *      Author: adrian
 */
#include "ComplejoTemplate.h"

template <class T>
void pruebaComplejoTemplate()
{
	Complejo<T> c1(4.0); //se genera el complejo 4.0 + 0.0i
	Complejo<T> c2(c1); //se genera un nuevo complejo con valor 4.0 +0.0i
	Complejo<T> c3( -1.0, 2.7);
	//...
	Complejo<T> c4 = c1 + c2 + c3;
	T f(2.5);
	Complejo<T> c5 = c3 + f;
	std::cout << "c1= " << c1 << ", c2= " << c2 << ", c3= " << c3 << ", c4= " << c4 << ", c5= " << c5 << std::endl;
}

int main( int argc, char **argv )
{
	std::cout << "Utilizando float: ";
	pruebaComplejoTemplate<double>();
	std::cout << "\nUtilizando double: ";
	pruebaComplejoTemplate<float>();
	//
	return 0;
}


