// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

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

