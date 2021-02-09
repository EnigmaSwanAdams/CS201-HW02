/*
Enigma Swan Adams
CS 201 Homework 02: main.cpp
2 / 7 / 2021

This file contains the main function
I will be utilizing in the end to run all 
other functions in the main program as decribed
in the main program in the homewrk

I don't think it is neccessary 
for the end result, but I used
it for testing.

right now it gets ten names from a user
prints those names, and then asks the user for another name
then it checks if the last name can be found in the previouse
list of ten names and tell the user one way or the other. 

now it also prompts for the amount of money in different coins a person has
then tells them about what they just entered, and the total amount in dollars

now it also calculates the amount of squares 
required for the user to get a given number 
of rice grains
**********************************************/

#include "names.h"
#include "money.h"
#include "rice.h"
#include <string> // not sure why but this seamed to fix something 

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
	
	cout << endl;
	
	money(); // testing the additional program 1, money.cpp
	cout << endl;

	///*for (int i = 1; i <= 9; i++) { // for testing 
		//findNumSquares(i);
	//}

	//cout << powersOf2(3); //  for testing

	int numRice = 0;
	std:: cout << "Enter how much rice yu would want if you were the inventor: ";
	cin >> numRice;
	int numSquares = findNumSquares(numRice);
	cout << endl;
	cout << "You would need to have invented a chess buard with " << numSquares << " squares" << endl;
	

	//numCalcs(); // just for helping me test what the largest values were 
	cout << "The largest number of squares for which you can calcualte an\n"
		"exact number of grains using int is 31" << endl;
	cout << "The largest number of squares for which you can calcualte an\n"
		"approximate number of grains using a double is 1024" << endl;


	return 0;
	}