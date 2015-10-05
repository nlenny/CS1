// Prints out your pseudonym
// Leonard, Ngwa
// 06/13/2013
// My limitation for using double in calculating the square is 5, and 5 for calculating the cube.
# include <iostream>

using namespace std;

double number = 0.0;// Using the variable number of type double allows the user to enter up to 5 digits.

double number_two = 0.0;

double result_Of_Square = 0.0;// The result of the square of the user's number is of type double to allow the return of decimal points.

double result_Of_Cube = 0.0;// The result of the cube of the user's number is of type double to allow the return of decimal points.

int main(){

	cout << "Enter the number you wish to calculate it's square  " << endl;// Displays instructions for the user
	
	cin >> number;// Allows users to imput their selection

	result_Of_Square = number * number;// Calculates the square of the users input

	cout << result_Of_Square << endl;
	
	cout << "The square of your number is  " << result_Of_Square << endl;// Displays the square of the user's input


	cout << "Enter the number you want to calculate it's cube  " << endl;//Displays instructions for the user

	cin >> number_two;// Allows users to imput their selection

	result_Of_Cube = number_two * number_two * number_two;// Calculates the cube of the users input

	cout << "The cube of your number is  " << result_Of_Cube << endl;// Displays the square of the user's input

	return 0;


}
