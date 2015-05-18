/*
*	Question2.cpp
*
*	Name:				[Edu, Isaac Alfred]
*	Department:			[Computer Science]
*	Matric./Reg. No:	[47277869IE]
*	
*	a program that reads in two integers and determines and prints
*	if the first is a multiple of the second.
*	
*/

#include <iostream> //allows program to perform input and output
using namespace std; //program uses the standard library function

int main () //function main begins program execution
{
	//variable declarations
	int m, n; //integers to compare
	
	//display welcome messages to user
	cout << "\t\t       Welcome!!!\n\n"
		 << "This program reads two integers and determines and prints\n"
		 << "\tif the first is a multiple of the second.\n\n";
		 
	cout << "Enter First Integer: "; //prompts user for first data
	cin >> m; //reads an integer from the user
	
	cout << "Enter second Integer: "; //prompts user for second data
	cin >> n; //reads an integer from the user
	
	if (m % n == 0)
	cout << "\n" << m << " is a multiple of " << n;
	
	else
	cout << "\n" << m << " is not a multiple of " << n;
	return 0;
} //end function main
