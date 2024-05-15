// Template/vector01.cc
#include <iostream>
#include <vector>
#include <algorithm> //para generar arg para std::sort
#include "Complejo.h"

struct SortMayorMenor
{
    inline bool operator() (const Complejo& i1, const Complejo& i2)
    {
    	return (i1.Modulo() > i2.Modulo());
    }
};

struct SortMenorMayor{
	inline bool operator() (const Complejo& i1, const Complejo& i2){
		return (i1.Modulo() < i2.Modulo());
	}
};

int main( int argc, char **argv )
{
   std::vector<Complejo> vecInt;

   vecInt.push_back(Complejo(10,23));
   vecInt.push_back(Complejo(-15,24));
   vecInt.push_back(Complejo(20,78));

   std::cout << "Muestra utilizando indice:" << std::endl;

   unsigned int k;
   for( k=0; k < vecInt.size(); k++)
   {
  	 std::cout << vecInt[k] << std::endl;
   }

   std::cout << std::endl << "Muestra utilizando iterator:" << std::endl;

   std::vector<Complejo>::iterator ii;
   for(ii=vecInt.begin(); ii!=vecInt.end(); ii++)
   {
  	 std::cout << *ii << std::endl;
   }

   std::cout << std::endl << "Muestra utilizando const iterator:" << std::endl;

   std::vector<Complejo>::const_iterator cii;
   for(cii=vecInt.begin(); cii!=vecInt.end(); cii++)
   {
  	 std::cout << *cii << std::endl;
   }

   std::cout << std::endl << "Muestra utilizando reverse Iterator:" << std::endl;

   std::vector<Complejo>::reverse_iterator rii;
   for(rii=vecInt.rbegin(); rii!=vecInt.rend(); ++rii)
   {
  	 std::cout << *rii << std::endl;
   }

   std::cout << "size: " << vecInt.size() << std::endl;
   std::cout << "vecInt[2]: " << vecInt[2] << std::endl;

   std::swap(vecInt[0], vecInt[2]);
   std::cout << "vecInt[2] luego de swap con el [0]: " << vecInt[2] << std::endl;

   std::sort(vecInt.begin(),vecInt.end());

   std::cout << "Luego de sort sin metodo de ordenacion como argumento\n";
   for( k=0; k < vecInt.size(); k++)
   {
  	 std::cout << vecInt[k] << std::endl;
   }

   std::sort(vecInt.begin(),vecInt.end(), SortMayorMenor());

   std::cout << "Luego de sort con metodo de ordenacion como argumento\n";
   for( k=0; k < vecInt.size(); k++)
   {
  	 std::cout << vecInt[k] << std::endl;
   }

   std::sort(vecInt.begin(),vecInt.end(), SortMenorMayor());

   std::cout << "Luego de sort con metodo de ordenacion como argumento2\n";
   for( k=0; k < vecInt.size(); k++)
   {
  	 std::cout << vecInt[k] << std::endl;
   }

  return 0;
}

