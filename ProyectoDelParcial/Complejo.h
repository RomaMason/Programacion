/*
 * Complejo.h
 *
 *      Author: Camila Rivera, Joaquin Aguero, Eric Oro
 */

#ifndef COMPLEJO_H_
#define COMPLEJO_H_

#include <iostream>
#include <fstream>

/**
 * @enum exeption
 * @brief Enumeracion de exepción
 *
 */
enum exeption{SINTAXIS_ERROR};/**< SINTAXIS_ERROR */

/**
 * @class Complejo
 * @brief Clase que representa un numero complejo
 *
 */
class Complejo
{
	private:
		/**
		 * Parte real
		 */
		double real;

		/**
		 * Parte imaginaria
		*/
		double imag;
	public:
		// Constructores
		/**
		 * @fn  Complejo()
		 * @brief Constructor que inicializa por defecto en 0
		 *
		 */
		Complejo();

		/**
		* @fn  Complejo(const double&, const double&)
		 * @brief Constructor que inicializa las partes real e imaginaria del complejo
		 *
		 * @param re Parte real del complejo
		 * @param im Parte imaginaria del complejo
		 */
		Complejo(const double& re, const double& im);

		/**
		 * @fn  Complejo(const Complejo&)
		 * @brief Constructor que inicializa a partir de copiar los valores de otro objeto Complejo
		 *
		 * @param Recibe un objeto Complejo
		 */
		Complejo(const Complejo&);

		// SetThings

		/**
		 	 	 * @fn void SetData(const double&, const double&)
		 * @brief Establece los valores de la parte real y imaginaria del Complejo
		 *
		 * @param re Parte real del Complejo
		 * @param im Parte imaginaria del Complejo
		 */
		void SetData(const double& re, const double& im);

		/**
		 	 	 * @fn void SetData(const Complejo&)
		 * @brief Establece los valores del Complejo a partir de copiarle los valores a un objeto Complejo externo
		 *
		 * @param c Complejo externo
		 */
		void SetData(const Complejo& c);

		/**
		 	 	 * @fn void SetReal(const double&)
		 * @brief Establece el valor de la parte real del Complejo
		 *
		 * @param Parte real del Complejo
		 */
		void SetReal(const double&);

		/**
				 * @fn void SetImag(const double&)
		 * @brief Establece el valor de la parte imaginiaria del Complejo
		 *
		 * @param Parte imaginaria del Complejo
		 */
		void SetImag(const double&);
		// GetThings

		/**
				 * @fn double GetReal(void)const
		 * @brief Retrona el valor de la parte real del Complejo
		 *
		 * @return Parte real
		 */
		double GetReal(void) const{return real;}

		/**
				 * @fn double GetImag(void)const
		 * @brief Retorna el valor de la parte imaginari del Complejo
		 *
		 * @return Parte imaginaria del Complejo
		 */
		double GetImag(void) const{return imag;}

		// Sobrecarga de operadores aritmeticos

		/**
				 * @fn Complejo operator +(const Complejo&)
		 * @brief  Sobrecarga del operador suma para sumar dos Complejos
		 *
		 * @param Complejo para sumar
		 * @return Complejo que resulta de la suma
		 */
		Complejo operator+ (const Complejo&);

		/**
				 * @fn Complejo operator +(const double&)
		 * @brief Sobrecarga del operador suma para sumar el Complejo con un numero tipo double
		 *
		 * @param Numero tipo double para sumar
		 * @return Complejo que resulta de la suma del Complejo con un double
		 */
		Complejo operator+ (const double&);

		/**
				 * @fn Complejo operator -(const Complejo&)
		 * @brief  Sobrecarga del operador resta para restar dos Complejos
		 *
		 * @param Complejo a restar
		 * @return Complejo que resulta de la resta
		 */
		Complejo operator- (const Complejo&);

		/**
						 * @fn Complejo operator -(const double&)
		 * @brief Sobrecarga del operador suma para restar el Complejo con un numero tipo double
		 *
		 * @param Numero tipo double para restar
		 * @return Complejo que resulta de la resta del Complejo con un double
		 */
		Complejo operator- (const double&);

		/**
				 * @fn Complejo operator *(const Complejo&)
		 * @brief Sobrecarga del operado multiplicación para multiplicar dos Complejos
		 *
		 * @param Complejo a multiplica
		 * @return Complejo que resulta de la multiplicacion
		 */
		Complejo operator* (const Complejo&);

		/**
				 * @fn double ProdEscalar(const Complejo&)
		 * @brief Metodo para calcular el producto escalar entre dos Complejos
		 *
		 * @param Complejo con el que se calcula el producto escalar
		 * @return Producto escalar entre los dos Complejos
		 */
		double ProdEscalar (const Complejo&);

		/**
				 * @fn Complejo operator /(const Complejo&)
		 * @brief Sobrecarga del operador de divicion para dividir dos Complejos
		 *
		 * @param Complejo a dividir
		 * @return Complejo que resulta de la divicion
		 */
		Complejo operator/ (const Complejo&);

		// Sobrecarga del operador de asignacion

		/**
				 * @fn Complejo operator =&(const Complejo&)
		 * @brief Sobrecarga de operador de asignacion para asignar un complejo a otro complejo
		 *
		 * @param Complejo que asigna valores
		 * @return Complejo que resulta de la asignacion
		 */
		Complejo& operator= (const Complejo&);

		// Sobrecarga de operadores de comparacion

		/**
				 * @fn bool operator ==(const Complejo&)
		 * @brief Sobrecarga del operador booleano == para comparar dos complejos
		 *
		 * @param Complejo con el que se compara
		 * @return Resultado de la comparacion booleana de igualdad
		 */
		bool operator== (const Complejo&);

		/**
				 * @fn bool operator !=(const Complejo&)
		 * @brief Sobrecarga del operado != para comparar dos complejos
		 *
		 * @param  Compleco con el que se compara
		 * @return Resultado de la comparacion booleana de la distincion
		 */
		bool operator!= (const Complejo&);

		//Metodo para evaluar distancia pitagorica entre dos puntos del plano Complejo

		/**
				 * @fn double Distancia(const Complejo&)
		 * @brief Metodo para calcular la distancia pitagorica entre dos puntos del plano Complejo
		 *
		 * @param Complejo con el cual se calcula la distancia pitagorica
		 * @return Distancia resultante
		 */
		double Distancia(const Complejo&);

		//Metodo para evaluar distancia euclidea entre dos puntos del plano Complejo

		/**
				 * @fn double DistanciaEuclidea(const Complejo&)
		 * @brief Metodo para calular la distancia euclida entre dos puntos del plano Complejo
		 *
		 * @param  Comlpjeo con el que se calcula la distancia euclidea
		 * @return Distancia resultante
		 */
		double DistanciaEuclidea(const Complejo&);

		/**
		 * @brief Sobrecarga del operador de inserción en el flujo de salida para insertar un objeto Complejo en un flujo de salida.
		 *
		 * @param os Flujo de salida en el que se insertará el complejo.
		 * @param c Complejo que se insertará en el flujo de salida.
		 * @return Flujo de salida modificado después de la inserción del complejo.
		 */
		friend std::ostream& operator<< (std::ostream&os, const Complejo& c);

		/**
		 * @brief Sobrecarga del operador de extracción del flujo de entrada para extraer un objeto Complejo de un flujo de entrada.
		 *
		 * @param is Flujo de entrada del que se extraerá el complejo.
		 * @param c Complejo en el que se almacenará la entrada extraída.
		 * @return Flujo de entrada modificado después de la extracción del complejo.
		 */
		friend std::istream& operator>> (std::istream&is, Complejo&c);

		/**
		 * @brief Sobrecarga del operador de extracción del flujo de archivo para extraer un objeto Complejo de un flujo de archivo.
		 *
		 * @param file Flujo de archivo del que se extraerá el complejo.
		 * @param c Complejo en el que se almacenará la entrada extraída.
		 * @return Flujo de archivo modificado después de la extracción del complejo.
		 */
		std::ifstream& operator>> (std::ifstream&file);


};

#endif


// COMPLEJO
