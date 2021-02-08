/*
Enigma Swan Adams
CS 201 Homework 02: names.cpp
1/7/2021


contains all functions neccessary for the main
homework program besides main

further description of behavior can be found
on blackbuard
**********************************************/


#include "names.h"

void InputNames(vector<string> & names) {
	for (int i = 0; i < 10; i++) {
		cout << "Please enter a name ";
		string name; // this isn't in the code I am copying from the homework assignment
		getline(cin, name);
		names.push_back(name);

	}
}

void PrintNames(const vector<string>& names) { //prints the vector. 
	for (int i = 0; i < names.size(); i++) { //for testing if things have been properly stored
		cout << names.at(i) << ' ';
	}
	cout << endl;
}

bool DoesNameExist(const string& nameToFind, const vector<string>& names) { // checks if the first input   
	for (int i = 0; i < names.size(); i++) {						        //can be found in the vector
		if (names.at(i) == nameToFind) {
			return true;
		}
		else {
			return false;
			cout << names.at(i);
		}
	}
}




