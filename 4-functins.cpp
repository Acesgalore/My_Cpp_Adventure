// functins.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void say_hello(int w)
{
	for (int i = 0; i < w; i++)
	{
		cout << "Hello\n";
	}
}

int multiplyFunc(int x, int y)
{
	return x*y;
}
void half(int z)
{
	int x = z / 2;
	if (z <= 0)
		return;
	cout << x << endl;
	half(x);
}

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;

	cout << "Input: ";
	cin >> a;
	say_hello(a);

	cout << "Number 1: ";
	cin >> b;
	cout << "Number 2: ";
	cin >> c;
	d = multiplyFunc(b, c);
	cout << d << endl;

	cout << "Extra number: ";
	cin >> e;
	cout << e << endl;
	half(e);

    return 0;
}

