/*
 * Multiplier.cpp
 *
 *  Created on: July 31, 2020
 *      Author: Nithish
 */


#include "Multiplier.h"
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

template <typename T>
Multiplier<T>::Multiplier() {};

template <typename T>
Multiplier<T>:: ~Multiplier() {};

template <typename T>
double Multiplier<T>::operation(std::vector<T>& elements){

  if(elements.empty()){
    throw;
  }
  double MAX = std::numeric_limits<double>::max();
  double product= 1.0;

  for(auto i:elements){

	  if( product*i > MAX) {
		  cout<< " Product is too large than the maximum permissible size"<< endl;\
		  throw;
	  }
	  else{    product *= i;}
  }
  return product;
}


template class Multiplier<int>;
template class Multiplier<float>;
template class Multiplier<double>;

