// Cola Machine.cpp : Defines the entry point for the console application.
// switch statement again
// just going along with the problems..
// this program prints my favorite drinks and asks you to select one

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "My 5 favorite beverages!\n1. Water\n2. Coke\n3. Sprite\n4. Almond milk\n5. Horchata\n\nPlease type the number of the drink you want.\n";
	int beverage;
	cin >> beverage;
	switch (beverage)
	{
	case 1: { cout << "You chose water!\n"; }
			break;
	case 2: { cout << "You chose Coke!\n"; }
			break;
	case 3: { cout << "You chose Sprite!\n"; }
			break;
	case 4: { cout << "You chose Almond milk!\n"; }
			break;
	case 5: { cout << "You chose horchata!\n"; }
			break;
	default: { cout << "Error. Choice was not valid, here is your money back.\n\n"; }
		return 0;
	}
}

