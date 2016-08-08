// 2. Project 1.cpp : Defines the entry point for the console application.
// My first official c++ program after learning the basics
// Done in VS Express, because it looks nice and is free
// A simple program that averages three numbers
// I can't cast for my life, so all three input variables are floats

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float scoreOne;
	float scoreTwo;
	float scoreThree;
	cout << " You will enter three scores to be averaged.\n Please enter the first score:" << endl;
	cin >> scoreOne;
	cout << "Please enter the second score:" << endl;
	cin >> scoreTwo;
	cout << "Please enter the third score:" << endl;
	cin >> scoreThree;

	float averageScore = (scoreOne + scoreTwo + scoreThree) / 3;
	cout << "\nYour averaged score is: " << averageScore << endl;

    return 0;
}

