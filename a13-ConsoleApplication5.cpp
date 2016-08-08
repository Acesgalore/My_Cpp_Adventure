// ConsoleApplication5.cpp : Defines the entry point for the console application.
// Snacks snacked game
// Snacks to eat:
// Chips
// Fruit
// Jerky 
/*******************************/
// I made this program just today! This is the reason I started this repo.
// I wanted to keep track of my programs and I thought that this was the first real program I have ever made
// It's a game where the gameplay is eating 1 of 3 foods
// It increases the counter and then you can eat again
// IT HAS A SAVE FILE SO YOU CAN CONTINUE THE GAME. I AM SO HAPPY.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

// finally remembered to declare the functions first. Much easier to read, yes?
void input();
void endGame();
void printScreen();
void saveData();
void setup();

using namespace std;

int snackAmount[3] = { 0, 0, 0 }; // tally score of things eaten
bool gameOver = false; // for the game loop

int main()
{
	// super basic game loop, but it looks so good, am I right?
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
	if (choice == 1) // if newGame, everything = 0;
	{
		snackAmount[0] = 0; snackAmount[1] = 0; snackAmount[2] = 0;
		return;
	}
	else if (choice == 2) // if continueGame, everything = saveFile;
	{
		ifstream inFile("SaveFile.txt");
		inFile >> snackAmount[0] >> snackAmount[1] >> snackAmount[2];
		inFile.close();
		return;
	}
	else
	{
		cout << "Not a valid option. Please enter a valid option.\n";
		setup(); // just to ensure nothing happens to the file
	}
	return;
}

void printScreen()
{
	system("cls"); // nifty clarity thing I learned while making this game
			// because it was hard to follow the gameflow if text kept jumping around
	cout << "***************************************"
		<< "\nYour total amount of snacks snacked is " << snackAmount[0] + snackAmount[1] + snackAmount[2] << ".\n"
		<< "You have eaten " << snackAmount[0] << " chips.\n"
		<< "You have eaten " << snackAmount[1] << " fruit.\n"
		<< "You have eaten " << snackAmount[2] << " jerky.\n"
		<< "***************************************\n";

	return;
}

void input() // where the magic happens
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
	
	if (choice == 'y') // SAVE GAME WHOOOOO
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
