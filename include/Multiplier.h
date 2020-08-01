/*
 * Multiplier.h
 *
 *  Created on: July 31, 2020
 *      Author: Nithish
 */

#ifndef INCLUDE_MULTIPLIER_H_
#define INCLUDE_MULTIPLIER_H_

#include <Arithmetic.h>
#include <iostream>
#include <vector>

template<typename T>
class Multiplier: public Arithmetic<T> {

public:

	/*
	 * Constructor
	 */
	Multiplier();

	/*
	 * Virtual Destructor
	 */
	virtual ~Multiplier();

	/*
	 * Function redefinition from the base class
	 * params :  vector of operands
	 * return :  Computed engine output
	 */
	double operation(std::vector<T> &arr);
};

#endif /* INCLUDE_MULTIPLIER_H_ */
