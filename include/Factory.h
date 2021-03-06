/*
 * Factory.h
 * @brief  Class objects are chosen and created in runtime.
 *  Created on: July 31, 2020
 *      Author: nithish
 */

#ifndef INCLUDE_FACTORY_H_
#define INCLUDE_FACTORY_H_


#include "Arithmetic.h"
#include "Multiplier.h"
#include "Divider.h"

/*
 *
 */
template <typename T>
Arithmetic <T> *Arithmetic <T> :: factory(std::string &engine) {

	if(engine.compare("Multiplier") ==0) {
		return new Multiplier<T>;
	}
	else if(engine.compare("Divider") ==0) {
		return new Divider<T>;
	}

	else
		throw;
}


#endif /* INCLUDE_FACTORY_H_ */
