// stringenemy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void zzNamePortal(string zName)
{
	replace(zName.begin(), zName.end(), 'a', 'z');
	replace(zName.begin(), zName.end(), 'e', 'z');
	replace(zName.begin(), zName.end(), 'i', 'z');
	replace(zName.begin(), zName.end(), 'o', 'z');
	replace(zName.begin(), zName.end(), 'u', 'z');
	replace(zName.begin(), zName.end(), 'A', 'Z');
	replace(zName.begin(), zName.end(), 'E', 'Z');
	replace(zName.begin(), zName.end(), 'I', 'Z');
	replace(zName.begin(), zName.end(), 'O', 'Z');
	replace(zName.begin(), zName.end(), 'U', 'Z');
	cout << "Your z'd name is " << zName << endl;
}

void reversePortal(string reptar)
{
	reverse(reptar.begin(), reptar.end());
	cout << "Your reversed name is " << reptar << endl;
}
int main()
{
	string firstName;
	string lastName;
	string wholeName;

	cout << "First name: ";
	getline(cin, firstName);

	cout << "Last name: ";
	getline(cin, lastName);

	wholeName = firstName + " " + lastName;
	cout << "Your name is " << wholeName << endl;

	zzNamePortal(wholeName);

	reversePortal(wholeName);

    return 0;
}

