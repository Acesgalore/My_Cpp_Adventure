// Menu chooser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Difficulty Levels\n\n";
	cout << "1. easy\n";
	cout << "2. normal\n";
	cout << "3. hard\n\n";
	enum difficulty {easy = 1, normal, hard};
	difficulty choice;
	cout << "Select your desired difficulty: ";
	cin >> choice;
	switch (choice)
	{
	case 1: cout << "You chose difficulty level easy\n" << endl;
		break;
	case 2: cout << "You chose difficulty level normal\n" << endl;
		break;
	case 3: cout << "You chose difficulty level hard\n" << endl;
		break;
	default: cout << "You chose an invalid difficulty level\n" << endl;
	}
	return 0;
}
