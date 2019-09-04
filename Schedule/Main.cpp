/*
	Brayden Berg
	C++ Fall 2019
	Due: September 12, 2019
	Lab 2 Schedule
	We are tasked with creating and printing our class schedules onto the screen.
*/

#include <iostream>

using namespace::std;

// Variable description.
const string M = "Monday  	";
const string T = "Tuesday  	";
const string W = "Wednesday	";
const string Th = "Thursday	";
const string F = "Friday  	";
const string T1 = "8:00	";
const string T2 = "11:30	";
const string T3 = "12:40	";
const string T4 = "1:50	";
const string C1 = "Engineering Problems 180";
const string C2 = "Classical Phisics I 212";
const string C3 = "C++ 162";
const string C4 = "The College Experience 108";
const string C5 = "Public Speaking 112";

int main()
{
	// Outputs Brayden Berg's class schedule to the screen.
	cout << M << T1 << C5 << endl;
	cout << M << T2 << C4 << endl;
	cout << M << T3 << C3 << endl;
	cout << M << T4 << C2 << endl;
	cout << T << T2 << C1 << endl;
	cout << T << T3 << C3 << endl;
	cout << T << T4 << C2 << endl;
	cout << W << T1 << C5 << endl;
	cout << W << T2 << C4 << endl;
	cout << W << T3 << C3 << endl;
	cout << W << T4 << C2 << endl;
	cout << Th << T2 << C1 << endl;
	cout << Th << T3 << C3 << endl;
	cout << Th << T4 << C2 << endl;
	cout << F << T1 << C5 << endl;
	cout << F << T2 << C1 << endl;
	cout << F << T4 << C2 << endl;

	return 0;
}