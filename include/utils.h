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

	if(arguements == "source"){


		for(int i = 3; i < argc; i++){
			arguements = argv[i];
			if(arguements.find(suffix) != std::string::npos){
				cout<<arguements;
				files.push_back(arguements);}
		}
	}
	else {
		cout<<"Improper source directory"<<endl;
		return elements;
		}

	FileInput(files, elements);
	return elements;
}


#endif /* INCLUDE_UTILS_H_ */
