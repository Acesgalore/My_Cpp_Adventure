// ConsoleApplication5.cpp : Defines the entry point for the console application.
// Snacks snacked game
// Snacks to eat:
// Chips
// Fruit
// Jerky 

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

void input();
void endGame();
void printScreen();
void saveData();
void setup();

using namespace std;

int snackAmount[3] = { 0, 0, 0 };
bool gameOver = false;

int main()
{
	cout << "Welcome to The Snacking Game!\n"
		<< "You have the choice of snacking on chips, fruit, or jerky.\n"
		<< "You can also choose to load your progress or start a new game.\n";
	setup();
	while (gameOver != true)
	{
		printScreen();
		input();
	}
	endGame();

	return 0;
}

/*************************************Functions***********************************/

void setup()
{
	int choice;
	
	cout << "1 = New Game\n2 = Load Game\nYour choice (1/2): ";
	cin >> choice;
	cout << endl;
	if (choice == 1)
	{
		snackAmount[0] = 0; snackAmount[1] = 0; snackAmount[2] = 0;
		return;
	}
	else if (choice == 2)
	{
		ifstream inFile("SaveFile.txt");
		inFile >> snackAmount[0] >> snackAmount[1] >> snackAmount[2];
		inFile.close();
		return;
	}
	else
	{
		cout << "Not a valid option. Please enter a valid option.\n";
		setup();
	}
	return;
}

void printScreen()
{
	system("cls");
	cout << "***************************************"
		<< "\nYour total amount of snacks snacked is " << snackAmount[0] + snackAmount[1] + snackAmount[2] << ".\n"
		<< "You have eaten " << snackAmount[0] << " chips.\n"
		<< "You have eaten " << snackAmount[1] << " fruit.\n"
		<< "You have eaten " << snackAmount[2] << " jerky.\n"
		<< "***************************************\n";

	return;
}

void input()
{
	int choice;

	cout << "\nWhat would you like to eat?\n1. Chips\n2. Fruit\n3. Jerky\n4. I want to eat the 'end game' button\n"
		<< "Your choice (1/2/3/4): ";
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		snackAmount[0] += 1;
		break;
	}
	case 2:
	{
		snackAmount[1] += 1;
		break;
	}
	case 3:
	{
		snackAmount[2] += 1;
		break;
	}
	case 4:
	{
		gameOver = true;
		break;
	}
	default:
		break;
	}
	return;
}

void endGame()
{
	char choice;
	cout << "\nYour final stats are:\n";
	printScreen();
	cout << "***************************************"
		<< "\nWould you like to save your game? (y/n): ";
	cin >> choice;
	
	if (choice == 'y')
		saveData();
	
	cout << "\nThank you for playing The Snacking game!\n\n";

	return;
}

void saveData()
{
	ofstream oFile("SaveFile.txt");
	oFile << snackAmount[0] << endl << snackAmount[1] << endl << snackAmount[2];
	oFile.close();
	cout << "\nSave complete!";

	return;
}
