// messin around.cpp : Defines the entry point for the console application.
//

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


