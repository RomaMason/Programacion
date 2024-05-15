/*
 * Template/multipleTemplate.cc
 *
 *  Created on: Aug 14, 2017
 *      Author: adrian
 */

#include <iostream>
#include <math.h>
using namespace std;

template< typename Z, typename K >
//implementa un polinomio de orden determinado: coef[0]+ z*coef[1]+ z^2 * coef[2] ... y lo muestra
Z Polinomio( const Z& z, const Z coef[], const K& orden)
{
	Z valor(coef[0]);
	cout << coef[0] << " ";
	for( int i=1; i<=orden; i++)
	{
		Z termino(Z(pow(z,i)) * coef[i]);
		valor += termino;
		cout << "+ ((" << z << ") ^ " << i << ") * (" << coef[i] << ") ";
	}
	return valor;
}
int main()
{
	double base(5.67);
	int grado(3);
	double coef[grado+1] = {0.2, -0.08, 0.01, 0.005};

	cout << "\nvalor que toma el polinomio: " << Polinomio<double,int>( base, coef, grado) << endl;

	return 0;
}


