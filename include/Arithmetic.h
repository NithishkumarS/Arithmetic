/*
 * Arithmetic.h
 *
 *  Created on: July 31, 2020
 *      Author: Nithish
 */

#ifndef INCLUDE_ARITHMETIC_H_
#define INCLUDE_ARITHMETIC_H_

#include <iostream>
#include <vector>

template <typename T>

class Arithmetic {

public:
	/*
	 * Constructor
	 */
	Arithmetic() {};

	/*
	 * Virtual Destructor
	 */
	virtual ~Arithmetic() {};

	/**
	 * Function to create an engine object from the input
	 * params :  name of engine
	 * return :  engine object
	 */
	static Arithmetic *factory(std::string& engine);

	/*
	 * Pure virtual function to that has to redefined for the corresponding arithmetic operation
	 * params :  vector of operands
	 * return :  Computed engine output
	 */
	virtual double operation(std::vector<T>& elements) = 0;
};



#endif /* INCLUDE_ARITHMETIC_H_ */
