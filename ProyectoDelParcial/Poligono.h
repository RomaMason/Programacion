/*
 * Poligono.h
 *
 *      Author: Camila Rivera, Joaquin, Eric Oro
 */
#ifndef HERSOBRECARGA_H_
#define HERSOBRECARGA_H_

enum {ERROR_NO_CUADRADO};

#include "Complejo.h"

class Poligono
{
protected:
	Complejo *vert; /// vertices del poligono, en principio, no se sabe cuantos son
	 int cantVert;
public:
	 /**
	 	  * @fn  Poligono()
	  * @brief Constructor por defecto, sin argumentos.
	  *
	  */
	Poligono(); //constructor por defecto, sin argumentos
	/**
		 * @fn  Poligono(int, const Complejo[])
	  * @brief Constructor de la clase Poligono, con argumentos.
	  *
	  * Crea un objeto Poligono con un número dado de vértices y sus coordenadas complejas.
	  *
	  * @param n Número de vértices del polígono.
	  * @param Arreglo de puntos complejos que representan los vértices del polígono.
	 */

	Poligono( int n, const Complejo pto[] ); //constructor con argumentos

	 /**
	 	  * @fn  ~Poligono()
	  * @brief Libera la memoria que se asigna de forma dinamica previamente con el arreglo de vértices.
	  * Si no se asigna memoria, no realiza ningún procedimiento.
	  *
	  */

	virtual ~Poligono();//quiere decir que para esos metodos se puede armar una tabla tabla virtual, y quien es el propietario

	virtual double Area() const=0;
	virtual double Perimetro() const=0;
};
//
//clase Triangulo, deriva de Poligono
/**
 * @class Triangulo
 *
 * @brief Esta clase representa un triángulo en el plano complejo.
 *
 * Hereda de la clase Poligono y proporciona funcionalidades específicas para un triángulo.
 */

class Triangulo:public Poligono
{
public:
	/**
	 	 * @fn Triangulo( const Complejo pto[])
	     * @brief Constructor de la clase Triangulo.
	     *
	     * Crea un objeto Triangulo con los vértices que se proporcionan.
	     *
	     * @param Arreglo de puntos complejos que representan los vértices del triángulo.
	     */
	Triangulo( const Complejo pto[]);
	/**
	 	 * @fn virtual ~Triangulo()
	     * @brief Es el destructor de la clase Triangulo.
	     *
	     * Libera los recursos asignados en forma dinámica para los vértices del triángulo.
	     */
	virtual ~Triangulo();
	/**
	 	 * @fn virtual double Area() const
	     * @brief Realiza el calculo del área del triángulo.
	     *
	     * @return El área del triángulo en el plano complejo.
	     */
	virtual double Area() const;
	/**
	 	 * @fn virtual double Perimetro() const
	     * @brief Realiza el calculo del perimetro del triángulo.
	     *
	     * @return El perimetro del triángulo en el plano complejo.
	     */
	virtual double Perimetro() const;
};
//
//clase Rectangulo, deriva de Poligono

/**
 * @class Rectangulo
 * @brief Clase que representa un rectángulo en el plano complejo.
 *
 * Esta clase hereda de la clase Poligono y proporciona funcionalidades específicas para un rectángulo.
 */
class Rectangulo:public Poligono
{
public:
	/**
	 	 * @fn Rectangulo( const Complejo pto[])
	     * @brief Constructor de la clase Rectangulo.
	     *
	     * Crea un objeto Rectangulo con los vértices dados.
	     *
	     * @param pto Arreglo de puntos complejos que representan los vértices del rectángulo.
	     */
	Rectangulo( const Complejo pto[]);
	/**
		 * @fn  ~Rectangulo()
	 * @brief Destructor de la clase Rectangulo.
	 * Libera los recursos asignados dinámicamente para los vértices del rectángulo.
	 */
	virtual ~Rectangulo();
	/**
		 * @fn double Area()const
	 * @brief Calcula el área del rectángulo.
	 *
	 * @return El área del rectángulo en el plano complejo.
	 */
	virtual double Area() const;

	/**
		 * @fn double Perimetro()const
	 * @brief Calcula el perímetro del rectángulo.
	 *
	 * @return El perímetro del rectángulo en el plano complejo.
	 */
	virtual double Perimetro() const;
};
//
//clase Cuadrado, deriva de Rectangulo

/**
 * @class Cuadrado
 * @brief Clase que representa un cuadrado en el plano complejo.
 * Esta clase hereda de la clase Rectangulo y proporciona funcionalidades específicas para un cuadrado.
 *
 */
class Cuadrado:public Rectangulo
{
public:
	/**
		 * @fn  Cuadrado(const Complejo[])
	 * @brief Constructor de la clase Cuadrado.
	 * Crea un objeto Cuadrado con los vértices dados.
	 * @param pto Arreglo de puntos complejos que representan los vértices del cuadrado.
	 */
	Cuadrado( const Complejo pto[]);
	/**
		 * @fn  ~Cuadrado()
	 * @brief Destructor de la clase Cuadrado.
	 * Libera los recursos asignados dinámicamente para los vértices del cuadrado.
	 */
	virtual ~Cuadrado();
	/**
		 * @fn double Area()const
	 * @brief Realiza el calculo del area del cuadrado.
	 *
	 * @return El área del cuadrado en el plano complejo.
	 */
	virtual double Area() const;
	/**
		 * @fn double Perimetro()const
	 * @brief Realiza el calculo del perímetro del cuadrado.
	 * El perímetro del cuadrado en el plano complejo.
	 * @return
	 */
	virtual double Perimetro() const;
};
#endif // HERSOBRECARGA_H_
