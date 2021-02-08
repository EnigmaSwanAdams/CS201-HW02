/*
Enigma Swan Adams
CS 201 Homework 02: main.cpp
2 / 7 / 2021

This file contains the main function
I will be utilizing in the end to run all 
other functions
**********************************************/

#include "names.h"

int main() {
	vector <string> names(0);
	InputNames(names);
	PrintVector(names);  // for testing the InputNames function

	string newName;
	cout << "Enter one more name ";
	getline(cin, newName);

	
	
	//const string stringOne = "h";        //For testing the DoesName Exist function alone
	//const vector <string> vecList{ "h", "Enna", "hi" };
	if (DoesNameExist(newName, names)) {
		cout << "the name exists";
		
	}
	else {
		cout << "the name doesn't exist";
	}
	

	
	return 0;
}