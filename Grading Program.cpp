// Grading Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int grade;
	cout << "Please enter your grade scored in a programming class (0-100):\n";
		cin >> grade;
	if (grade == 100)
	{
		cout << "You got a perfect score!\n";
	}
	else if (grade >= 90 && grade < 100)
	{
		cout << "You got an A!\n";
	}
	else if (grade >= 80 && grade < 90)
	{
		cout << "You got a B!\n";
	}
	else if (grade >= 70 && grade < 80)
	{
		cout << "You got a C!\n";
	}
	else if (grade >= 60 && grade < 70)
	{
		cout << "You got a D!\n";
	}
	else if (grade >= 0 && grade <= 59)
	{
		cout << "You failed!\n";
	}
	else
	{
		cout << "That is not a valid grade!\n";
	}
    return 0;
}

