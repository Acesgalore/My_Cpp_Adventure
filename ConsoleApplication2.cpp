// ConsoleApplication2.cpp : Defines the entry point for the console application.
//RPG
/*
Actions:
eat
drink
sleep
work
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

const int MAXSTAT = 100;
int food = MAXSTAT / 2; int water = MAXSTAT / 2; int sleep = MAXSTAT / 2;
bool gameOver = false;
int choice;

void status(int a, int b, int c)
{
	cout << "Player status:\n"
		<< "--------------\n"
		<< "Hunger: " << a << "/" << MAXSTAT << endl
		<< "Thirst: " << b << "/" << MAXSTAT << endl
		<< "Sleep: " << c << "/" << MAXSTAT << endl;
}

int input()
{
	int x;
	cout << "--------------\n"
		<< "1: Eat\n2: Drink\n3: Sleep\n4: Give up\n"
		<< "What would you like to do? (1/2/3/4): ";
		cin >> x;
		cout << "\n#####################################\n";
	return x;
}

void logic(int a)
{
	switch (a)
	{
	case 1:
	{
		if (food + 10 > MAXSTAT)
		{
			cout << "\n************************\nYou are too full to eat!\n************************\n";
			return;
		}
		food += 10; water -= 5; sleep -= 5;
		break;
	}
	case 2:
	{
		if (water + 10 > MAXSTAT)
		{
			cout << "\n************************\nYou are too quenched to drink!\n************************\n";
			return;
		}
		food -= 5; water += 10; sleep -= 5;
		break;
	}
	case 3:
	{
		if (sleep + 10 > MAXSTAT)
		{
			cout << "\n************************\nYou are too energetic to sleep!\n************************\n";
			return;
		}
		food -= 5; water -= 5; sleep += 10;
		break;
	}
	case 4:
	{
		gameOver = true;
		return;
	}
	default: break;
	}

	if (food <= 0)
	{
		status(food, water, sleep);
		cout << "\n\n\nYou decided not to eat even though it was obvious you were dying of\nstarvation.\n\n\n";
		gameOver = true;
		return;
	}
	if (water <= 0)
	{
		status(food, water, sleep);
		cout << "\n\n\nYou decided not to drink even though it was obvious you were dying of\ndehydration.\n\n\n";
		gameOver = true;
		return;
	}
	if (sleep <= 0)
	{
		status(food, water, sleep);
		cout << "\n\n\nYou decided not to sleep even though it was obvious you were dying of\nsleep deprivation.\n\n\n";
		gameOver = true;
		return;
	}
	return;
}

int main()
{
	cout << "This is an eating + drinking + sleeping RPG.\n"
		<< "You can spend the day doing one of those three things.\n"
		<< "If any of them drop to 0, then you can have one last meal, drink, or sleep, and then you die.\nGood luck!" << endl;

	while (gameOver == false)
	{
		status(food, water, sleep);
		choice = input();
		logic(choice);
	}
	cout << "\n\n\nYou died. The end\n\n\n";

    return 0;
}

