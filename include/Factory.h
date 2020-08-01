/*
 * Factory.h
 *
 *  Created on: Aug 1, 2020
 *      Author: nithish
 */

#ifndef INCLUDE_FACTORY_H_
#define INCLUDE_FACTORY_H_


#include "Arithmetic.h"
#include "Multiplier.h"

template <typename T>
Arithmetic <T> *Arithmetic <T> :: factory(std::string &engine) {

	if(engine.compare("Multiplier") ==0) {
		return new Multiplier<T>;
	}
	else
		throw;
}


#endif /* INCLUDE_FACTORY_H_ */
