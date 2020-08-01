/*
 * main.cpp
 *
 *  Created on: July 31, 2020
 *      Author: Nithish
 */

#include <iostream>
#include <string>
#include "Factory.h"
#include "Arithmetic.h"
#include "Multiplier.h"
#include "Divider.h"
#include "utils.h"
#include <limits>
double MAX = std::numeric_limits<double>::max();


int main(int argc, char* argv[]){

  std::string engine;
  engine = argv[1];

  std::vector<double> elements = parseInput(argc, argv);
  if(!elements.empty()) {
	  try {
		  Arithmetic<double> *engine_ptr = Arithmetic<double>::factory(engine);
		  double output = engine_ptr->operation(elements);
		  if(output == -MAX)
			  cout<<"Enter a non zero integer"<<endl;
		  else
			  std::cout<<output<<std::endl;
	  }
	  catch(const char *msg) {
	      cout << msg << endl;
	  }
  }

  return 0;
}

