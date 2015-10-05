#include <iostream>

using namespace std;

int main(){
	// Declaring variables to hold the different types of data I will be using.
	int grade_One = 0;

	int grade_Two = 0;

	int grade_Three = 0;

	int grade_Four = 0;

	float final_Grade = 0.0;

	char choice;
	// A do while loop to run the program at least once, the give the user the choice to continue or quit 
	do{
//Getting the user's grade information.
	cout << "I will be helping you calculate your term grade" << endl << endl;

	cout << "Please enter your first grade score, and press enter" << endl << endl;

	cin >> grade_One;

	cout << "Please enter your second grade score, and press enter" << endl;

	cin >> grade_Two;

	cout << "Please enter your third grade score, and press enter" << endl;

	cin >> grade_Three;

	cout << "Please enter your fourth grade score, and press enter" << endl;

	cin >> grade_Four;
	// displaying the grading scale.
	cout << "90 to 100   A  " << endl << "89 to 89   B" <<endl << "70 to 79   C" << endl << "60 to 69   D" << endl;

	cout << "Below 60" << endl << endl;
	// Calculating the user's final grade
	final_Grade = grade_One * 0.2 + grade_Two * 0.2 + grade_Three * 0.2 + grade_Four * 0.4;
	// Outputting the user's final grade.
	cout << "Exam 1: " << grade_One << endl << endl;

	cout << "Exam 2: " << grade_Two << endl << endl;

	cout << "Exam 3: " << grade_Three << endl << endl;

	cout << "Exam 4: " << grade_Four << endl << endl;
// Using if statements to differentiate the different grading categories.
	if((final_Grade >= 60)&&(final_Grade <= 100)){

		cout << "You deserve a grade for this class" << endl;}

		if((final_Grade >= 90)&&(final_Grade <= 100)){

			cout << "Your final grade is  " << "A" << endl;}
		else

			if((final_Grade >= 80)&&(final_Grade < 90)){

				cout << "Your final grade is  " << "B" << endl;}
			else

				if((final_Grade >= 70)&&(final_Grade < 80)){

					cout << "Your final grade is  " << "C" << endl;}
				else

					if((final_Grade >= 60)&&(final_Grade < 70)){

						cout << "Your final grade is  " << "D" << endl;}

	else// An else statement in case the user does not belong to any of the above categories.

		cout << "You failed the class" << endl << endl;

cout << "Do you wish to continue with your calculations?  " << endl << endl;

cout << "Please enter 'Y' for yes and 'N' for no" << endl << endl;

cin >> choice;

	} while((choice != 'N')||(choice != 'n'));// Giving the user the option to quit or continue. End of do while loop.

}
