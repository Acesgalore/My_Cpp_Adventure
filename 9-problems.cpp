// problems.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int inputNumber()
{
	int x;
	cout << "Please enter a number: ";
	cin >> x;
	return x;
}

bool findingNumber(int x[5], int y)
{
	for (int j = 0; j < 5; j++)
	{
		if (y == x[j])
			return true;
	}
	return false;
}

int main()
{
	bool foundNumber = false;
	cout << "You will enter 5 numbers, followed by a 6th number.\n";
	int listNumber[5];
	int findNumber;
	for (int i = 0; i < 5; i++)
	{
		listNumber[i] = inputNumber();
	}
	cout << "Please enter a number to be searched: ";
	cin >> findNumber;
	foundNumber = findingNumber(listNumber, findNumber);
	if (foundNumber == true)
		cout << "The number " << findNumber << " appears in the first 5 numbers" << endl;
	else
		cout << "The number " << findNumber << " does not appear in the first 5 numbers" << endl;
    return 0;
}

