/*
 * TiempoClima.h
 *
 *  Created on: 3 may. 2024
 *      Author: progb
 */

#ifndef TIEMPOCLIMA_H_
#define TIEMPOCLIMA_H_

#include <iostream>
#include <fstream>
#include <exception>

using namespace std;
/**
 * @class Clima
 * @brief Almacena los datos del clima
 *
 */
class Clima{
private:
	float velocidad;
	float temperatura;
	float humedad;
	float mmLluvia;

public:
	/**
		 * @fn  Clima()
	 * @brief Constructor por defecto de la clase Clima
	 *
	 */
	Clima();
	/**
		 * @fn  Clima(float&, float&, float&)
	 * @brief Constructor de la clase Clima
	 *
	 * @param v : Valor de la velocidad
	 * @param t : Valor de la temperatura
	 * @param h : Valor de la humedad
	 */
	Clima(float&v,float&t,float&h,float&l);

	// Metodo Set
	/**
		 * @fn void SetData(const Clima&)
	 * @brief EL metodo establece los datos de:
	 * velocidad del viento
	 * temperatura
	 * humedad
	 * milimetros de lluvia
	 *
	 * @param
	 */
	void SetData(const Clima&);
	/**
		 * @fn void SetData(float&, float&, float&)
	 * @brief Metodo para establecer los datos del clima
	 *
	 * @param v : Valor de la velocidad
	 * @param t : Valor de la temperatura
	 * @param h : Valor de la humedad
	 */
	void SetData(const float& v,const float& t,const float& h,float& l);

	/**
		 * @fn void SetVelocidad(float&)
	 * @brief Metodo para establecer la velocidad del viento
	 *
	 * @param v : Valor de la velocidad
	 */
	void SetVelocidad(float& v);

	/**
		 * @fn void SetTemperatura(float&)
	 * @brief Metodo para establecer la temperatura
	 *
	 * @param t : Valor de la temperatura
	 */
	void SetTemperatura(float& t);

	/**
		 * @fn void SetHumedad(float&)
	 * @brief Metodo para establecer la humedad
	 *
	 * @param h : Valor de la humedad
	 */
	void SetHumedad(float& h);

	/**
		 * @fn void SetMmLluvia(float&)
	 * @brief Metodo para establecer la cantidad de lluvia
	 *
	 * @param l
	 */
	void SetMmLluvia(float& l);
	//Metodo Get

	/**
		 * @fn float GetVelocidad(void)const
	 * @brief Metodo para retornar el valor de la velocidad del viento
	 *
	 * @return Retorna el valor del viento
	 */
	float GetVelocidad(void)const{return velocidad;}

	/**
		 * @fn float GetTemperatura(void)const
	 * @brief  Metodo para retornar el valor de la temperatura
	 *
	 * @return Retorna el valor de la temperatura
	 */
	float GetTemperatura(void)const{return temperatura;}

	/**
		 * @fn float GetHumedad(void)const
	 * @brief Metodo para retornar el valor de la humedad
	 *
	 * @return Retorna el valor de la humedad
	 */
	float GetHumedad(void)const{return humedad;}

	/**
		 * @fn float GetMmLluvia(void)const
	 * @brief Metodo para retornar el valor de cantidad de lluvia
	 *
	 * @return Retorna el valor de la cantidad de lluvia
	 */
	float GetMmLluvia(void)const{return mmLluvia;}

	Clima& operator=(const Clima& c);

};

/**
 * @class Time
 * @brief Almacena los datos de la fecha y hora
 *
 */
class Time{
private:
	int anio;
	int mes;
	int dia;
	int hora;
	int minuto;
public:
	/**
		 * @fn Time()
		 * @brief Constructor por defecto de la clase Time
		 *
		 */
	Time();
	/**
		 * @fn Time(int&,int&,int&,int&,int&)
		 * @brief Constructor de la clase Time
		 *
		 * @param a : Valor del anio
		 * @param m : Valor del mes
		 * @param d : Valor del dia
		 * @param h : Valor de la hora
		 * @param min : Valor del minuto
		 */
	Time(int&a,int&m,int&d,int&h,int&min);
	/**
		 * @fn void SetData(int&,int&,int&,int&,int&)
		 * @brief Metodo para establecer los datos de la fecha y hora
		 *
		 * @param a : Valor del anio
		 * @param m : Valor del mes
		 * @param d : Valor del dia
		 * @param h : Valor de la hora
		 * @param min : Valor del minuto
		 */
	void SetData(int&a,int&m,int&d,int&h,int&min);
	/**
		 * @fn void SetAnio(int&)
		 * @brief Metodo para establecer el valor del anio
		 *
		 * @param a : Valor del anio
		 */
	void SetData(const Time&t);
	void SetAnio(int&a);
	/**
		 * @fn void SetMes(int&)
		 * @brief Metodo para establecer el valor del mes
		 *
		 * @param m : Valor del mes
		 */
	void SetMes(int&m);
	/**
		 * @fn void SetDia(int&)
		 * @brief Metodo para establecer el valor del dia
		 *
		 * @param d : Valor del dia
		 */
	void SetDia(int&d);
	/**
		 * @fn void SetHora(int&)
		 * @brief Metodo para establecer el valor de la hora
		 *
		 * @param h : Valor de la hora
		 */
	void SetHora(int&h);
	/**
		 * @fn void SetMinuto(int&)
		 * @brief Metodo para establecer el valor del minuto
		 *
		 * @param min : Valor del minuto
		 */
	void SetMinuto(int&min);
	/**
		 * @fn int GetAnio(void)const
		 * @brief Metodo para retornar el valor del anio
		 *
		 * @return Retorna el valor del anio
		 */
	int GetAnio(void)const{return anio;}
	/**
		 * @fn int GetMes(void)const
		 * @brief Metodo para retornar el valor del mes
		 *
		 * @return Retorna el valor del mes
		 */
	int GetMes(void)const{return mes;}
	/**
		 * @fn int GetDia(void)const
		 * @brief Metodo para retornar el valor del dia
		 *
		 * @return Retorna el valor del dia
		 */
	int GetDia(void)const{return dia;}
	/**
		 * @fn int GetHora(void)const
		 * @brief Metodo para retornar el valor de la hora
		 *
		 * @return Retorna el valor de la hora
		 */
	int GetHora(void)const{return hora;}
	/**
		 * @fn int GetMinuto(void)const
		 * @brief Metodo para retornar el valor del minuto
		 *
		 * @return Retorna el valor del minuto
		 */
	int GetMinuto(void)const{return minuto;}
	Time Enlace(string&);
	void GetFecha();
	Time& operator=(const Time& t);
	void operatorTime();

};

#endif /* TIEMPOCLIMA_H_ */
