//Ngwa T Leonard.
//CS1 lab8, gradearray. using arrays to get user scores, calculate and show results.
//Due 07/12/2013.


#include <iostream>
#include <cstdlib>
#include <iomanip>

//Prototyping my functions.
void inputData(float[], int);
float finalGrade(float[], int);
void display(float[], int);


const int size = 5;

int main()
{
	char response;
	float grade[size];
	
	do {

	 inputData(grade, size);

	 finalGrade(grade, size);

	 display(grade, size);
	 
	 system("pause");

	 std::cout <<"Would you like to try another set of scores?" << std::endl <<std::endl;
	 std::cout <<"Please enter Y for yes or N for no" <<std::endl;
	 std::cin >> response;
	 std::cout << std::endl;
	}while ((response == 'Y') || (response == 'y'));

	return 0;

	
}

//Function to get user input, and store the input into the second to the fifth array, of array size 5.
//And because it returns no calculate, the function is of type void.
void inputData(float grade[], int size)
	
{	
	bool flag = 0;
	for(int i = 1; i < size; i++) 
	{
		do{
			flag = 0;
			switch(i)
			{
			case 1 : std::cout <<"Enter your exam 1 scores, ranging from 0 to 100." <<std::endl << std::endl;
					 break;
			case 2 : std::cout <<"Enter your exam 2 scores, ranging from 0 to 100." <<std::endl << std::endl;
				     break;
			case 3 : std::cout <<"Enter your exam 3 scores, ranging from 0 to 100." <<std::endl << std::endl;
					 break;
			case 4 : std::cout <<"Enter your exam 4 scores, ranging from 0 to 100." <<std::endl << std::endl;
					 break;
			}
			std::cin >> grade[i];

			// if statement to do condition check on the user input
			if((grade[i] < 0 ) || (grade[i] > 100))
			{
				flag = 1;
				std::cout <<"Invalid Input Data! Please re-enter your data!" <<std::endl << std::endl;
			}
		}while (flag == true);
		
	}
	
}
	

// Function of return type float. Calculates final grade from user input.
float finalGrade(float grade[], int size)
{
	
	grade[0] = (0.2*(grade[1] + grade[2] + grade[3]) + (0.4* grade[4]));
	
	return grade[0];
	
}


// Void function to output a letter grade according to the final grade. 
void display(float grade[], int size)
{
std::cout <<"Exam 1: "<< grade[1] << std::endl <<"Exam 2: " << grade[2] << std::endl << "Exam 3: " << grade[3] << std::endl <<"Exam 4: " << grade[4] << std::endl
	<<"Final Grade: " << grade[0] << std::setw(4);
	
	if (grade[0] < 60)
	{
		std::cout <<"  Letter Grade: " <<"F" << std::endl;
	}
	else if(grade[0] < 70)
	{
		std::cout <<"  Letter Grade: " <<"D"<< std::endl;
	}
	else if(grade[0] < 80)
	{
		std::cout <<"  Letter Grade: " <<"C"<< std::endl;
	}
	else if(grade[0] < 90)
	{
		std::cout <<"  Letter Grade: " <<"B"<< std::endl;
	}
	else
		std::cout <<"  Letter Grade: " <<"A"<< std::endl;
}





	


