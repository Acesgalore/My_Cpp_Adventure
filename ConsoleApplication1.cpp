// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void stateOfBoard(char x[6][6])
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << x[i][j];
		}
		cout << endl;
	}
}

void changeBoard(char(&y)[6][6])
{
	char direction;
	cout << "Input: ";
	cin >> direction;


}
	//begin main
int main()
{

	//initialize the starting board
	char board[6][6];
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			board[i][j] = 'x';
			
		}
	}
	board[1][1] = 'o';
	board[5][5] = '#';
	//print board and print controls
	stateOfBoard(board);
	cout << "You are the 'o'. You are trying to get to the '#'. The x's are empty spaces.\n"
		<< "Type 'd' to go down, 'u' to go up, 'l' to go left, and 'r' to go right.\n"
		<< "Don't fall off the board!\n";

	changeBoard(board);

    return 0;
}

