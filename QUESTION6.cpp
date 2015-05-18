/*
*	Question6.cpp
*
*	Name:				[Edu, Isaac Alfred]
*	Department:			[Computer Science]
*	Matric./Reg. No:	[47277869IE]
*	
*	Create a Body Mass Index (BMI) calculator application that reads
*	the user’s weight in kilograms and height in meters, calculate and
*	display the user’s body mass index.
*	
*/

#include <iostream> //allows program to perform input and output
using namespace std; //program uses the standard library

int main () //function main begins program execution
{
	//declaring variables
	int weight; //integer to compare
	float height,BMI; //float to compare
	
		//display welcome messages to user
	cout << "\t\t         Welcome!!!\n\n"
		 << "This program creates a Body Mass Index (BMI) calculator application that\n"
		 << "\treads the user's weight in kilograms and height in meters.\n\n";
	
	cout << "Please enter your Weight(kg): "; //prompts user for data
	cin >> weight; //reads user data
	
	cout << "Please enter your Height(m): "; //prompts user for data
	cin >> height; //reads user data
	
	BMI = weight/(height*height); //assigning value to BMI variable
	cout << "\n\nYour Body Mass Index is: " << BMI; //prompts user for data
	
	if (BMI > 25 && BMI < 29.9)
	cout << "\n...You are Overweight..." << endl;
	
	else
	if (BMI < 18.5)
	cout << "\n...You are Underwieght..." << endl; //outputs to screen
	
	else
	if (BMI > 18.5 && BMI < 24.9)
	cout << "\n\n\t...Congratulations!!!\n"
		 << "You are within a Healthy/Normal weight range." << endl; //outputs to screen
		 
	else
	if (BMI >= 30)
	cout << "\n\t...You are Obessed..." << endl; //outputs to screen
	
	cin.get(); //basic istream function
	cin.get(); //basic istream function
	return 0; 
} //ends function main
