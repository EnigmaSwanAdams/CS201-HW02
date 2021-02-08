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

void PrintNames(const vector<string>& names) {   //prints thoughts of the people with the names, and changes the names to all caps
	vector<string> exclamations{" IS EXCITED!", " IS VERY HAPPY!!", " IS ELATED", " ACTUALLY... just kind of wants to leave" };
	vector<string> copiedNames = names;

	for (int i = 0; i < names.size(); i++) { 
		
		transform(copiedNames.at(i).begin(), copiedNames.at(i).end(), copiedNames.at(i).begin(), ::toupper);
		cout << copiedNames.at(i) << exclamations.at(rand() % 4) << endl;
	}
	cout << endl;
}


bool DoesNameExist(const string& nameToFind, const vector<string>& names) { // checks if the first input   
	for (int i = 0; i < names.size(); i++) {						        //can be found in the vector
		if (names.at(i) == nameToFind) {
			return true;
		}	
	}
	return false;
}




