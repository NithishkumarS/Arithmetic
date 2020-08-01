/*
 * Multiplier.cpp
 *
 *  Created on: July 31, 2020
 *      Author: Nithish
 */


#include "Multiplier.h"
#include <iostream>
#include <vector>
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

  double product= 1.0;

  for(auto i:elements){
    product *= i;
  }
  return product;
}


template class Multiplier<int>;
template class Multiplier<float>;
template class Multiplier<double>;

