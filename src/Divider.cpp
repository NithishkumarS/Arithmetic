/*
 * Divider.cpp
 *
 *  Created on: July 31, 2020
 *      Author: Nithish
 */

#include "Divider.h"
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

template<typename T>
Divider<T>::Divider() {
}
;

template<typename T>
Divider<T>::~Divider() {
}
;

template<typename T>
double Divider<T>::operation(std::vector<T> &elements) {

	double MAX = std::numeric_limits<double>::max();

	if (elements.empty()) {
		return -MAX;
		throw;
	}

	double Quo = elements[0];

	for (auto i = 1; i < elements.size(); i++) {
		try {
			if (elements[i] == 0.0)
				return -MAX;

			Quo /= elements[i];

		} catch (const char *msg) {
			cout << msg << endl;
			return -MAX;
		}
	}
	return Quo;
}

template class Divider<int> ;
template class Divider<float> ;
template class Divider<double> ;
