/*
 * TiempoClima.cc
 *
 *  Created on: 3 may. 2024
 *      Author: progb
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <string>
#include "TiempoClima.h"

using namespace std;

Clima::Clima(){
	velocidad=0.0;
	temperatura=0.0;
	humedad=0.0;
	mmLluvia=0.0;
}

Clima::Clima(float& v,float& t, float& h,float& l){
	velocidad=v;
	temperatura=t;
	humedad=h;
	mmLluvia=l;
}
void Clima::SetData(const Clima& c){
	velocidad=c.velocidad;
	temperatura=c.temperatura;
	humedad=c.humedad;
	mmLluvia=c.mmLluvia;

}

void Clima::SetData(const float& v,const float& t,const float& h,float& l){
	velocidad=v;
	temperatura=t;
	humedad=h;
	mmLluvia=l;
}

Clima& Clima::operator=(const Clima& c){
    velocidad=c.velocidad;
    temperatura=c.temperatura;
    humedad=c.humedad;
    mmLluvia=c.mmLluvia;
    return *this;
}

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
Time::Time(){
	anio=0;
	mes=0;
	dia=0;
	hora=0;
	minuto=0;
}

Time::Time(int& a,int& m,int& d,int& h,int& min){
	anio=a;
	mes=m;
	dia=d;
	hora=h;
	minuto=min;
}

void Time::SetData(int&a,int&m,int&d,int&h,int&min){
	anio=a;
	mes=m;
	dia=d;
	hora=h;
	minuto=min;
}

void Time::SetData(const Time& t){
	*this=t;
}

void Time::operatorTime(){
	time_t now = time(0);
    tm* localTime = localtime(&now);
	anio=localTime->tm_year+1900;
	mes=localTime->tm_mon+1;
	dia=localTime->tm_mday;
	hora=localTime->tm_hour;
	minuto=localTime->tm_min;
}

Time Time::Enlace(string& tiempo){
	stringstream ss(tiempo);
	string c1,c2,c3,c4,c5,c6;
	getline(ss,c1,'/');
	getline(ss,c2,'/');
	getline(ss,c3,' ');
	getline(ss,c4,':');
	getline(ss,c5,'\0');
	anio=stoi(c1);
	mes=stoi(c2);
	dia=stoi(c3);
	hora=stoi(c4);
	minuto=stoi(c5);
	return *this;
}

void Time::GetFecha(){
	cout << anio << "/" << mes << "/" << dia << endl;
	cout << hora << ":" << minuto << endl;
}

Time& Time::operator=(const Time& t){
	anio=t.anio;
	mes=t.mes;
	dia=t.dia;
	hora=t.hora;
	minuto=t.minuto;
	return *this;

}