// problems2.cpp : Defines the entry point for the console application.
//Password problem
/*Password must have,
1) 8 to 12 characters
2) at least one numeric digit
3) at least one alphabet
4) must not have space or slash (/)
5) at least one Capital letter
6) starting character must not be a number */

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password = "";
	bool validPass = false;

	cout << "Please enter a password. Password must have:\n"
		<< "1) 8 to 12 characters\n"
		<< "2) at least one numeric digit\n"
		<< "3) at least one alphabet\n"
		<< "4) must not have a slash (/, \\)\n"
		<< "5) at least one Capital letter\n"
		<< "6) starting character must not be a number" << endl;
    return 0;
}

