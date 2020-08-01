/*
 * Divider.h
 *
 *  Created on: July 31, 2020
 *      Author: Nithish
 */

#ifndef INCLUDE_DIVIDER_H_
#define INCLUDE_DIVIDER_H_

#include <Arithmetic.h>
#include <iostream>
#include <vector>

template <typename T>
class Divider : public Arithmetic<T>{

 public:
	Divider();

	virtual ~Divider();

	double operation(std::vector<T>& arr);
};


#endif /* INCLUDE_DIVIDER_H_ */
