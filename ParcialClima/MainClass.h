#ifndef MAINCLASS_H
#define MAINCLASS_H

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include "TiempoClima.h"

using namespace std;

class MainClass{
    private:
    Clima clima;
    Time time;
    public:
    MainClass();
    ~MainClass();

    void SetClima(const Clima& c);
    void SetClima(const float& v,const float& t,const float& h,float& l);
    void SetTime(const Time& t);
    void SetTime(int&a,int&m,int&d,int&h,int&min);
};

 ifstream& operator>> (ifstream& file,MainClass& main){
    string verf,aux;
    float v,t,h,ll;
    Time tiempo;
	char d1,d2,d3,d4;
    file>>verf;
    if(verf == "sinTiempo"){
        file >> v >> d1;
        file >> t >> d2;
        file >> h >> d3;
        file >> ll >> d4;
    }else if(verf== "conTiempo"){
        file >> aux;
        tiempo.Enlace(aux);
        file >> v >> d1;	    
        file >> t >> d2;
	    file >> h >> d3;
	    file >> ll >> d4;
        main.SetTime(tiempo);
    }
     main.SetClima(v,t,h,ll);
	return file;
}

ostream& operator<< (ostream& os,const MainClass& main){
    
}

#endif // MAINCLASS_H