#include "MainClass.h"
#include "TiempoClima.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

//---------------------------------------------------------------

MainClass::MainClass(){
    //Constructor
}

//---------------------------------------------------------------

MainClass::~MainClass(){
    //Destructor
}

//---------------------------------------------------------------

void MainClass::SetClima(const Clima& c){
    clima=c;
}

//---------------------------------------------------------------

void MainClass::SetClima(const float& v,const float& t,const float& h,float& l){
    clima.SetData(v,t,h,l);
}

//---------------------------------------------------------------

void MainClass::SetTime(const Time& t){
    time=t;
}

//---------------------------------------------------------------

void MainClass::SetTime(int&a,int&m,int&d,int&h,int&min){
    time.SetData(a,m,d,h,min);
}

//---------------------------------------------------------------

//---------------------------------------------------------------



//---------------------------------------------------------------