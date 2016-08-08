// ConsoleApplication3.cpp : Defines the entry point for the console application.
// Vectors! I already knew how to do vectors, but I wanted to make a program
// that would tell you what note would play if you selected a guitar string and fret
// but I couldn't think an easy way to make the iterator point to a member in the middle of the vector
// so I gave up.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> notes {"A", "A#/Bb","B", "C", "C#/Db", "D", "D#/Eb", "E", "F", "F#/Gb", "G", "G#/Ab"};
vector<string>::iterator iter;

string string1[16];
string string2[16];
string string3[16];
string string4[16];
string string5[16];
string string6[16];

void setTune()
{
	for (iter = notes[8]; iter != notes.end(); iter++) // incorrect syntax. How do I get it to start iterating from [8]?
	{

	}
}

int main()
{

    return 0;
}

