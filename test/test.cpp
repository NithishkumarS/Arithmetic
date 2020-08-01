/*
 * test.cpp
 * @brief Tests the computational ability of Divider engine
 *  Created on: Aug 1, 2020
 *      Author: Nithish
 */



#include <gtest/gtest.h>
#include <vector>
#include "Divider.h"
#include <limits>
double MAX = std::numeric_limits<double>::max();


using namespace std;
/**
 * @brief test for checking whether the "operation()" function is correct
 */
TEST(Compute, should_pass) {
	  vector<double> elements{10.0,2.0,5.0};
	  Divider<double> obj;
	  EXPECT_EQ(1.0, obj.operation(elements));
}

/**
 * @brief test to check "operation()" function performs in the presence of zero Denominator
 */
TEST(ZeroInteger, should_pass) {
	  vector<double> elements{10.0,0,5.0};
	  Divider<double> obj;
	  EXPECT_EQ(-MAX, obj.operation(elements));
}


/**
 * @brief test to check "operation()" in different datatypes for the template
 */
TEST(Datatypes, should_pass) {
	  vector<int> elements{30,3,5};
	  vector<float> elements_f{30.0,3.0,5.0};

	  Divider<int> obj;
	  Divider<float> obj_f;

	  EXPECT_EQ(2.0, obj.operation(elements));
	  EXPECT_EQ(2.0, obj_f.operation(elements_f));
}

/**
 * @brief test to check "operation()" function performs with single input
 */
TEST(SingleInput, should_pass) {
	  vector<double> elements{10.0};
	  Divider<double> obj;
	  EXPECT_EQ(10.0, obj.operation(elements));
}

/**
 * @brief test to check "operation()" function reacts to no input
 */
TEST(NoInput, should_pass) {
	  vector<double> elements{};
	  Divider<double> obj;
	  EXPECT_EQ(-MAX, obj.operation(elements));
}




