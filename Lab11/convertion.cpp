//Ngwa T Leonard
//CS1 Summer session
//Lab11 Project.
//07/21/2013

#include <iostream> 
#include <cstdlib>
#include "converter.h" 

// Functions call in main to carry out user's requests.
 int main()

{ 

 int num, oldBase, newBase, digitOne, digitTwo, choice; 

 do 

 { 
	 num = 0;
	 oldBase = 0;
	 newBase = 0; 
     digitOne = 0; 
     digitTwo = 0; 


 // Menu display for user to choose.
	 std::cout <<"The menu to choose from is as follows:" << std::endl << std::endl;

     std::cout << "1:  Convert a number from a former base, to base 10." << std::endl << std::endl;

     std::cout << "2:  Convert a number from base 10, to a specified base." << std::endl << std::endl;

	 std::cout << "Please make a selection by using the keys 1 and 2, or -1 to quit" << std::endl << std::endl;

     std::cin >> choice;

 // Switch to execute user choice
	 switch (choice)
	 {

case 1:
	
	userInput(num, oldBase, newBase);

	anyBaseToTen(num, oldBase, digitOne);

	std::cout <<"The number in your specified base is: " << digitOne << std::endl << std::endl; 

	break;

case 2:
	
	userInput(num, oldBase, newBase);

	tenToAnyBase(num, newBase, digitTwo);

	std::cout << "The number in your specified base is: " << digitTwo << std::endl << std::endl;

	break;

default:

	std::cout << "Please make a valid choice if you wish to continue, or -1 to exit." << std::endl << std::endl;

	 }

 } while (choice != -1);

 return 0;

 }