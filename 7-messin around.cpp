// messin around.cpp : Defines the entry point for the console application.
// Nothing really new here
// Just went along with the next problem
// This program asks for a name and greets you if your name is alice or bob

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string yourName;
	cout << "Please enter your first name: ";
	cin >> yourName;
	if (yourName == "Alice")
		cout << "Hello, " << yourName << "!" << endl;
	else if (yourName == "Bob")
		cout << "Hello, " << yourName << "!" << endl;

    return 0;
}


