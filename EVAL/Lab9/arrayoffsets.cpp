//Ngwa T Leonard.
//CS1.
//Due 07/14/2013.

#include <iostream>
#include <cstdlib>

// Function prototype.
void numFinder(int& rowSize, int& colSize, int& rowSub, int& colSub);

// Variables passed to main are rowSize, colSize, rowSub, colSub, response.
// A do-while loop in main to give the user the option to continue running the program.

int main()

{

	int rowSize,colSize,rowSub, colSub;

	char response;

	do

	{
		// Function call
		numFinder(rowSize, colSize, rowSub, colSub);

		std::cout <<"Do you want to continue the program? Enter Y for yes, or N or no" << std::endl << std::endl;

		std::cin >> response;

		std::cout << std::endl;

	} while ((response == 'Y') || (response == 'y'));
	
	return 0;
	
}

// Function that takes all user inputs and does the calculations for offset, actual row and column subscript.
// offset, actual row subscript actual column, rowSize, colsize, row subscript and column subscript are local variables to the function numFinder.
// The function numFinder has return statements, that are used in the function call.

void numFinder(int& rowSize, int& colSize, int& rowSub, int& colSub)

{

	int offset, actual_row_subscript, actual_column_subscript;
	
	std::cout <<"Please enter your row size, then press enter" << std::endl;

	std::cin >> rowSize;

	std::cout << std::endl;
	
	std::cout <<"Please enter your column size, then press enter" << std::endl;

	std::cin >> colSize;

	std::cout << std::endl;

	std::cout <<"Please enter your row subscript, then press enter"<< std::endl;

	std::cin >> rowSub;

	std::cout << std::endl;
 
	std::cout <<"Please enter your column subscript, then press enter"<<std::endl << std::endl;
	
	std::cin >> colSub;

	std::cout << std::endl;

	// Calculations.
	
	offset = (rowSub * colSize) + colSub;
	
	actual_row_subscript = offset/colSize;
	
	actual_column_subscript = offset % colSize;



	std::cout <<"The array has " << rowSize <<" rows, and " << colSize<<" columns." << std::endl << std::endl;
	
	std::cout <<"The subscripts entered are: " <<rowSub <<" for row, and " << colSub<<" for column" << std::endl << std::endl;

	
	// Using if, if-else, and else statements to output corresponding messages if offsets are before array or after array.

	if (offset < 0)  
	{
		std::cout <<"offset   -1" << std::endl << std::endl;

		std::cout <<"The subscripts entered, refer to an element before the beginning of the array." << std::endl << std::endl;
	}
	
	else if (offset > (rowSize*colSize))
	{
		std::cout <<"offset   -2" << std::endl << std::endl;

		std::cout <<"The subscripts entered, refer to an element after the end of the array." << std::endl << std::endl;
	}
	
	else
		
		std::cout <<"The offset is " << offset << std::endl << std::endl;
	
	
		std::cout <<"The actual location of the element in the array is at row " << actual_row_subscript <<" ,column " << actual_column_subscript << std::endl << std::endl;


}


