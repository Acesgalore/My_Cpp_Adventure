// ConsoleApplication6.cpp : Defines the entry point for the console application.
// The shoplist program
// This program is inspired by having to write a shopping list from multiple recipies
// It is supposed to make it so much easier to write :)
// 1. user wants to input a category, ingredient, or end list
// 2. if ingredient, push.back()
// 3. if category, then add the category to the vector 
// 4. if end list, prints the list to a file

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream> //most libraries I've used in a program

using namespace std;

void getInput();
void addCat();
void addFood();
void printList();
void endList(); 

vector<string> ingredients{ "Grocery list:\n-------------\n" }; // initialize vector and iterator
vector<string>::iterator foodIter = ingredients.begin(); //Oh yeah I finally learned how to use iterators. hooray

bool endGram = false; //For quitting the program

int main()
{
	cout << "Hello! I am the grocery shopping list maker 2000!\n"
		<< "I will ask you questions throughout the span of our meeting\n"
		<< "which you cannot take back, so be sure to make your choice accurately.\n"
		<< "You will have the option of making categories to group your food into.\n"
		<< "If at any point you are done with your list, you can type 'done' to complete\nyour list.\n\n";
	system("pause"); //nifty thing I learned today

	while (endGram != true) // super super basic loop
	{
		printList();
		getInput();
	}
    return 0;
}

/*******************************************Functions******************************************/

void getInput()
{
	int input; //I found that it was much easier to enter a number than type the word everytime
				// Although it's good to practice typing ..
	cout << "\n----------------------------\nRight now you can:\n1. create a category, \n2. add a grocery,\n3. finalize your list.\n"
		<< "Your input (1/2/3): ";
	cin >> input;
	cout << endl;

	switch (input) //I like using switches for integer inputs
	{
	case 1:
	{
		addCat();
		break;
	}
	case 2:
	{
		addFood();
		break;
	}
	case 3:
	{
		endList();
		break;
	}
	default:
		break;
	}
	return;
}

void addFood()
{
	string input = "";
	cout << "\nPlease enter the name of the grocery now, or type 'cancel' to cancel\n"
		<< "Input (no spaces): ";
	cin >> input;
	cout << endl;

	if (input == "cancel")
		return;
	else if (input == "")
		return;

	ingredients.push_back(input + "\n");

	return;
}

void addCat() // To be honest, I could have used a variable to determine if the person wanted to enter a category
				// and make that variable change how the addFood function did its thing
				// but I just copy pasted the function and changed a few lines #lazy
{
	string input = "";
	cout << "\nPlease enter the name of the category now, or type 'cancel' to cancel\n"
		<< "Input (no spaces): ";
	cin >> input;
	cout << endl;

	if (input == "cancel")
		return;
	else if (input == "")
		return;

	ingredients.push_back("\n" + input + "\n-------------\n");

	return;
}

void printList()
{
	if (endGram != true)
		system("cls");	//NIFTY AF
	for (foodIter = ingredients.begin(); foodIter != ingredients.end(); foodIter++) //not only did I learn iterators
		cout << *foodIter;															//but I learned how to use them in loops
	cout << endl;																	//along with vector functions!
	foodIter = ingredients.begin(); //I forgot to include this line the first time I ran the program..it was rather anticlimactic
	return;
}

void endList()
{
	ofstream oFile("list.txt"); //basic file output
	
	for (foodIter = ingredients.begin(); foodIter != ingredients.end(); foodIter++) //resused the loop with oFile
	{
		oFile << *foodIter;
		
	}
	oFile.close(); // Close your files, yo
					// -Every youtube video ever

	cout << "Your grocery list has been saved! Check your accompanying text file\nto retrieve it!\n"
		<< "Thank you for making your grocery list with me today!\n\n";

	endGram = true; //100 lines later

	return;
}
