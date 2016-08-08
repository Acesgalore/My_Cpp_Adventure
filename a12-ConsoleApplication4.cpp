// ConsoleApplication4.cpp : Defines the entry point for the console application.
// Learned how to input and output from/to files
// I followed along on a youtube video and this was the code. The text file has 5 numbers in it.
// Text file unincluded because it's pretty straightforward

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("read_write.txt");

	//error check
	if (inFile.fail())
	{
		cerr << "Error opening file.";
		exit(1);
	}

	int a, b, c, d, e;

	inFile >> a >> b >> c >> d >> e;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;

	inFile.close();
    return 0;
}

