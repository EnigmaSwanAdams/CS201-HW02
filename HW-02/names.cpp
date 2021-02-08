/*
Enigma Swan Adams
CS 201 Homework 02: names.cpp
1/7/2021

further description of behavior can be found
on blackbuard
**********************************************/


#include "names.h"

void InputNames(vector<string> & names) {
	for (int i = 0; i < 10; i++) {
		cout << "please enter a name";
		string name; // this isn't in the code I am copying from the homework assignment
		getline(cin, name);
		names.push_back(name);

	}
}






