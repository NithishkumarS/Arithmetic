/*
 * @file: utils.h
 *
 *  Created on: July 31, 2020
 *      Author: nithish
 *      References: http://www.cplusplus.com/forum/beginner/219084/
 */

#ifndef INCLUDE_UTILS_H_
#define INCLUDE_UTILS_H_



#include <iostream>
#include <vector>
#include<fstream>
using namespace std;

bool FileInput(vector<string>& files, vector<double>& elements) {

	if(files.empty()){
		cout<<"No valid .txt files"<<endl;
		return false;
	}
	bool flag = false;

	for(auto name:files){
		ifstream file(name.c_str(), std::ios_base::in);
		double x;
		while(file >> x){
			elements.push_back(x);
			cout<<x<<endl;
		}
		flag = true;
	}

	return flag;

}

vector<double> parseInput(int argc, char* argv[]){

	string arguements = argv[2];
	string suffix= ".txt";
	vector<string> files;

	vector<double> elements;

	// Input type is file
	if(arguements == "source"){



		for(int i = 3; i < argc; i++){
			arguements = argv[i];
			if(arguements.find(suffix) != std::string::npos){
				cout<<arguements;
				files.push_back(arguements);
			}

			else {
				cout<<"Improper source directory"<<endl;
				return elements;
			}
		}

		FileInput(files, elements);
	}
	// Input type is integers
	else{
		string engine = argv[1];
		if(engine.compare("Multiplier") ==0){	// Doesn't allow Multiplier to take integer inputs.
			cout<<"Multiplier engine takes only file inputs";
			return elements;
		}
		for(int j =2; j< argc; j++){
			arguements = argv[j];
			try {
			elements.push_back(stod(arguements));
			}
			catch(exception& exp ){
			throw "Enter only permitted integers";
			}
		}
	}

	return elements;
}


#endif /* INCLUDE_UTILS_H_ */
