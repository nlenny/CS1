// Ngwa T Leonard
// Lab5 Project.
// 06/25/2013
// Program that allows the user to guess a number that is ramdomly picked by the program
// Including all the libraries to be used by this program.

#include <iostream>>
 
#include <cstdlib>
 
#include <ctime>
 
using namespace std;
 
int main () 
{    // Declaring and initializing my variables.
 
	int number = 0;
 
	int guess = 0;

	char choice;

	srand(time(NULL));    // Function that controls time to ensure randomization. Seeding time once.

	number = rand() % 100;    // Controls radomization of the number to guessed each time the game is played.

	do {     // Outermost do-while loop to ensure the program runs again is the user chooses to continue.
			
			number = 0;   // Reinitializing my variables, number and guess.
 
			guess = 0;

				cout << "I selected a number between 0 and 99, what is it?" << endl << endl;// Initial statement to user to start guessing

		do {    // Second outermost loop to run the program

				do {    //Innermost loop to  make sure the user's input is between 0 and 99.
						
						if((guess < 0) || (guess >= 100))
						// Control statement to print when ever the user enters an out of bounds number, i.e. out of 0 to 99.
						cout << "Please enter a valid guess."<< endl;
	
						cin >> guess;
		
				} while ((guess < 0) || (guess >= 100));

				if (guess < number){

						cout << "Wrong, it is larger, what is it?" << endl << endl;
	
				}	else if (guess > number){

						cout << "Wrong, it is smaller, what is it?" << endl << endl;
	
				}	else if (guess == number)
						cout << "Correct!" << endl;
			} while (guess != number);

		cout << "Would you like to continue playing?" << endl;

		cin >> choice;

	} while ((choice == 'Y') || (choice == 'y'));

return 0;

}