/*
*	Question4.cpp
*
*	Name:				[Edu, Isaac Alfred]
*	Department:			[Computer Science]
*	Matric./Reg. No:	[47277869IE]
*	
*	a program that inputs a five-digit integer, separates the integer
*	into its digits and prints them separated by three spaces each.
*/

#include <iostream> //allows program to perform input and output
using namespace std; //program uses the standard library function

int main () //function main begins program execution
{
	//declaring variables
	int fdt, f1, f2, f3, f4, f5; //variables to compare
	
	cout << "\t\t       Welcome!!!\n\n"
		 << "This program reads Five-Digit integer, seperates the integer\n"
		 << "\t\tinto digits and prints them.\n\n";
		 
	cout << "Input your Five-digit integer: "; //prompts user for data
	cin >> fdt; //reads an integer from the user
	
	if (fdt < 10000)
	{
		cout << "Incorrect digit! Try again!";
	}
	if (fdt > 99999)
	{
		cout << "Incorrect digit! Try again!";
	}
	
	f1 = fdt / 10000;
	f2 = (fdt / 1000) % 10;
	f3 = (fdt / 100) % 10;
	f4 = (fdt / 10) % 10;
	f5 = fdt % 10;
	
	cout << f1
	<< " " << f2
	<< " " << f3
	<< " " << f4
	<< " " << f5;
	
	return 0;
} //ends function main
