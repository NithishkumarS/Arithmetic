/*
 * test.cpp
 *
 *  Created on: July 31, 2020
 *      Author: Nithish
 */



#include <gtest/gtest.h>
#include <vector>
#include "Divider.h"

using namespace std;
/**
 * @brief test for checking whether the "operation()" function is correct
 */
TEST(Compute, should_pass) {
	  vector<double> elements{10.0,2.0,5.0};
	  Divider<double> obj;
	  EXPECT_EQ(1.0, obj.operation(elements));
}




