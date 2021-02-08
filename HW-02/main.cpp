/*
Enigma Swan Adams
CS 201 Homework 02: main.cpp
2 / 7 / 2021

This file contains the main function
I will be utilizing in the end to run all 
other functions

right now it gets ten names from a user
prints those names, and then asks the user for another name
then it checks if the last name can be found in the previouse
list of ten names and tell the user one way or the other. 
**********************************************/

#include "names.h"

int main() {
	vector <string> names(0); // for testing the printNames function
	InputNames(names);

	cout << endl;
	cout << "Now I'll print how these people are feeling." << endl;
	PrintNames(names);  


	string newName;
	cout << "Enter one more name, and I'll check if"
		"\nit can be found in the list you just inputed."
		"\nremember to use the same capitalization you originally used ";
	getline(cin, newName);
	cout << endl;
	
	
	//const string stringOne = "h";        //For testing the DoesName Exist function alone
	//const vector <string> vecList{ "h", "Enna", "hi" };
	if (DoesNameExist(newName, names)) {
		cout << "I found it. The name exists in your list";
		
	}
	else {
		cout << "I couldn't find it. The name doesn't exist in your list.";
	}
	
	
	
	return 0;
}