#pragma once
//names.h 
//header for names.cpp

//#ifndef NAMES_H  // this was an error and I don't think I need it
//#define NAMES_H  // so I'm just oging to leave these out this time around

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::string;
using std::vector;
using std::getline;
using std::cin;

void InputNames(vector<string>& names); //prompts for and get s ten names from the user

void PrintVector(vector<string>& vec);  // prints the vector
										// for testing if things have been properly stored

