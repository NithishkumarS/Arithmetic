/*
 * main.cpp
 *
 *  Created on: July 31, 2020
 *      Author: Nithish
 */

#include <iostream>
#include <Multiplier.h>
#include <string>
#include "Factory.h"
#include "Arithmetic.h"
#include "utils.h"


int main(int argc, char* argv[]){



  std::string engine;
  engine = argv[1];

  std::vector<double> elements = parseInput(argc, argv);

  if(!elements.empty()) {
	  Arithmetic<double> *engine_ptr = Arithmetic<double>::factory(engine);
	  double output = engine_ptr->operation(elements);
	  std::cout<<output<<std::endl;
  }

  return 0;

}
