/*
*	Question1.cpp
*
*	Name:				[Edu, Isaac Alfred]
*	Department:			[Computer Science]
*	Matric./Reg. No:	[47277869IE]
*	
*	program that reads an integer and determines and
*	prints whether it's odd or even.
*	
*/

#include <iostream> //allows program to perform input and output
using namespace std; //program uses the standard library function

//function main begins program execution
int main ()
{
	// variable declarations
	int m; //integer to compare
	
	//display welcome messages to user
	cout << "\t\t         Welcome!!!\n\n"
		 << "This program reads an integer and determines and prints\n"
		 << "\t\twhether it's odd or even.\n\n";
		 
	cout << "Enter Integer: "; //prompts user for data
	cin >> m; //reads data from the user
	
	if (m % 2 == 0)
	cout << m << " is an Even number\n";
	
	else
	cout << m << " is an Odd number\n";
	
	return 0;
} //ends function main
