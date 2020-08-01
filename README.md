### Calculation Engines

# Requirements
```
cmake >= 3.5
gcc -std=c++0x

```

# Build instructions
```
cd CalculationEngines/
mkdir build
cd build
cmake ..
make
```

# Clean the build
```
cd CalculationEngines/
rm -f build
```

# Instructions to run the engines with integer input
```
cd build
./src/calc <engine_name> <integer1> <integer2> .....
```

# Instructions to run the engines with file lists
```
cd build
./src/calc <engine_name> source <file1> <file2>
```

# Instructions to run the unit tests 
Testing is done using the google test framework
```
cd build
./test/cpp-test
```


```
# Design and API Documentation
```
The Abstract class Arithmetic() defines the structure and primary functionalities of the Arithemetic operations. 
```
class Arithmetic {

public:
	/*
	 * Constructor
	 */
	Arithmetic() {};

	/*
	 * Virtual Destructor
	 * @brief Virtual functions require it
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

```

Class Multiplier is a derived class. Multiplier.h is the header file and Multiplier.cpp has the source implementations.

```
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
```

Class Divider is another derived class from class Arithmetic. Divider.h is the header file and Divider.cpp has the source implementations.

Factory.h contains the factory method from the Arithmetic class, that helps to create objects in run-time. Ideally it can extended to choose between any number of engines. But right now it chooses between Multiplier and Divider engines based on the input given.

```
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
```

## Using the API functions
To utilize the arithmetic engines, follow the following steps
```
Include the corresponding header, ("Multiplier.h"/ "Divider.h")

Create an engine object with a choice of datatype T(int/ float/ double)
 	Multiplier<T> object1;
	Divider<T> object2;

Call the function to get the engine output as
         object1.operation(vector<T> input);  --> returns a computed double output

Abstract class's Factory method can be accessed directly
	Arithmetic<T> :: factory(string engine);		
```


```
Utilized Google Style Guide
MIT License
```



