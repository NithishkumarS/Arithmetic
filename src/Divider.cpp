/*
 * Divider.cpp
 *
 *  Created on: July 31, 2020
 *      Author: Nithish
 */


#include "Divider.h"
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
Divider<T>::Divider() {};

template <typename T>
Divider<T>:: ~Divider() {};

template <typename T>
double Divider<T>::operation(std::vector<T>& elements){

  if(elements.empty()){
    throw;
  }

  double Quo= elements[0];

  for(auto i=1; i<elements.size(); i++){
    Quo /= elements[i];
  }
  return Quo;
}


template class Divider<int>;
template class Divider<float>;
template class Divider<double>;




