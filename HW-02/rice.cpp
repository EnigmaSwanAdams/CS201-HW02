/*
Enigma Swan Adams
CS 201 Homework 02: rice.cpp
2/7/2021

calculates the amount of squares 
required for the user to get a given number 
of rice grains

see aditional program 2 on the homework 
description file for more information 
**********************************************/

#include "rice.h"

int findNumSquares(int numRice) {
	int originalNumRice = numRice;

	if (numRice == 0) {
		return 0;
	}

	int numSquares = 1;
	while ((numRice+1) / 2 != 1) {
		numSquares++;
		numRice = numRice / 2;
	}

	
	if (powersOf2(numSquares) - 1 < originalNumRice) {
		numSquares = numSquares + 1;
	}

	//cout << originalNumRice << " " << numSquares <<endl; // for testing 
	return numSquares;
}

int powersOf2(int x) {
	int y = 1;
	for (int i = 0; i < x; i++) {
		y = y * 2;
	}
	return y;
}

void numCalcs() {
	int testNum = 1025;
	double rice = 1;
	for (int numSquares = 1; numSquares <= testNum; numSquares++) {
		
		cout << numSquares << " " << rice << endl;
		rice = rice * 2;
	}

	
}