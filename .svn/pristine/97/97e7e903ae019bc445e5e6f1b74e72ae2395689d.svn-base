//Ngwa T Leonard.
//CS1 Summer.
//Lab13 Code. Calculating student's grades, letter grade, and ranking them in order or best grades. Then display either to screen or a file.
//07/31/2013

//Included libraries
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

struct student
{
	string name;
	float exam1, exam2, exam3, finalExam;
	float finalGrade;
	char letterGrade;
	short rank;
};

//My function prototypes
int keyboardInput (student stuArray[]);// Takes users input data from the keyboard.
void compFinalGrade (student &stuArray);// Computes users data and assigns a final grade, and letter grade
void printOut (student  stuArray[],bool print_out, int numOfStudent);// Prints users grade to file/screen.
//void Rank (student  stuArray[]);

int main()
{
	char name[20], grade, response;
	int userInput, numOfStudents=0, exam1, exam2, exam3, finalExam, i, choice2;
    student stuArray[50];
	double finalGrade;
	  
	//Declaring and openning input stream.
	ifstream inStream;
	inStream.open("grade.dat");

	// Displays choices for the user.
	do{
		cout <<"Please choose from the menu options below, in order to continue." << endl<<endl;
    cout << "1:  This option computes and displays student's data from the keyboard." << endl;
    cout << "2:  This option computes and displays student's data from a file." << endl;
	cout << "Please make a selection by entering either  1 or 2." << endl;
    cin >> userInput;

		switch (userInput)
		{
		 case 1:
			 numOfStudents = keyboardInput(stuArray);
			 break;
		 case 2:

             cout << setw(15) << "Name" << setw(15) << "Exam 1" << setw(15) << "Exam 2" << setw(15) << "Exam 3" 
		          << setw(15) << "Final Exam" << setw(15) << "Final Grade" << setw(15) << " Letter Grade" << setw(15) << " Rank " << endl;

	         while (inStream >> stuArray[i].name >> stuArray[i].exam1 >> stuArray[i].exam2 >> stuArray[i].exam3 >> stuArray[i].finalExam)
	        {
	  
	          stuArray[i].finalGrade = (0.2 * (stuArray[i].exam1 + stuArray[i].exam2 + stuArray[i].exam3)) + (0.4 * stuArray[i].finalExam);

		      if(stuArray[i].finalGrade<60)
		        stuArray[i].letterGrade = 'F';
	          else if(stuArray[i].finalGrade<70)
		        stuArray[i].letterGrade = 'D';
	          else if(stuArray[i].finalGrade<80)
		        stuArray[i].letterGrade = 'C';
	          else if(stuArray[i].finalGrade<90)
		        stuArray[i].letterGrade = 'B';
	          else
		        stuArray[i].letterGrade = 'A';

		     cout << stuArray[i]. name <<" " << stuArray[i].exam1 <<" "<< stuArray[i].exam2 <<" "<< stuArray[i].exam3 
       	          <<" "<<stuArray[i].finalExam <<" " << stuArray[i].finalGrade << " "<< stuArray[i].letterGrade << stuArray[i].letterGrade
			      << stuArray[i].rank<< endl;
		             numOfStudents++;
		             i++;
	       }
			 cout <<endl;
	         cout << "Grading and ranking is complete!" << endl;

		inStream.close( );
		break;

		default:
			   cout << "Please make a valid choice if you wish to continue." << endl << endl;
		}

	           cout <<" Please enter 'Y for yes, if you will like to print your data result to a file." << endl;
		         cin >> response;
		       cout << endl;
		if((response == 'Y') || (response == 'y'))
		
		printOut(stuArray, true, numOfStudents);
		//Rank (stuArray);
		cout << endl;

		cout <<"If you will like to end the program, please enter '-1', else continue enter 1 or 2 to continue." <<endl;
		cin >> choice2;
	} while (choice2  != -1);
        
	system("pause");
	return 0;
}

// Takes in data from the user through the keyboard and computes it.
int keyboardInput(student stuArray[])
{
	int numOfStudents=0;
	cout <<"Please enter the number of the students you will be working with today." <<endl;
	cin >> numOfStudents;

	if (numOfStudents > 50)
		cout <<"You are only allowed 50 student's data at this time, sorry." << endl;
	else
	{
	  for(int i=0; i<numOfStudents ; i++)
	   {
		cout<<"Please enter this student's name, then press enter." << endl;
		cin >> stuArray[i].name;

		cout<<"Please enter this student's exam 1 score, then press enter."<< endl;
		cin >> stuArray[i].exam1;
		 while((stuArray[i].exam1<0) ||(stuArray[i].exam1>100))
		 { 
            std::cout<<"Your number is out of range, please enter a valid number." << std::endl;
			std::cin>>stuArray[i].exam1;
		 }

	    cout<<"Please enter this student's exam 2 score, then press enter." << endl;
		cin >> stuArray[i].exam2;
		while((stuArray[i].exam2<0) ||(stuArray[i].exam2>100))
		 { 
            std::cout<<"Your number is out of range, please enter a valid number." << std::endl;
			std::cin>>stuArray[i].exam2;
		 }

		cout<<"Please enter this student's exam 3 score, then press enter."<< endl;
		cin >> stuArray[i].exam3;
		while((stuArray[i].exam3<0) ||(stuArray[i].exam3>100))
		 { 
            std::cout<<"Your number is out of range, please enter a valid number." << std::endl;
			std::cin>>stuArray[i].exam3;
		 }

		cout<<"Please enter this student's final exam score, then press enter." << endl;
		cin >> stuArray[i].finalExam;
		while((stuArray[i].finalExam<0) ||(stuArray[i].finalExam>100))
		 { 
            std::cout<<"Your number is out of range, please enter a valid number." << std::endl;
			std::cin>>stuArray[i].finalExam;
		 }

		compFinalGrade(stuArray[i]);
	   }
	}
	return numOfStudents;
}

// Function to compute users data information.
void compFinalGrade (student  &stuArray)
{

	stuArray.finalGrade = (0.2 * (stuArray.exam1 + stuArray.exam2 + stuArray.exam3)) + (0.4 * stuArray.finalExam);

	if(stuArray.finalGrade<60)
		stuArray.letterGrade = 'F';
	else if(stuArray.finalGrade<70)
		stuArray.letterGrade = 'D';
	else if(stuArray.finalGrade<80)
		stuArray.letterGrade = 'C';
	else if(stuArray.finalGrade<90)
		stuArray.letterGrade = 'B';
	else
		stuArray.letterGrade = 'A';

		cout <<stuArray. name <<" "<<stuArray.exam1<<" "<<stuArray.exam2 <<" "<<stuArray.exam3 
		 <<" "<<stuArray.finalExam <<" "<<stuArray.finalGrade<< " " << stuArray.letterGrade << stuArray.rank << endl;

}

// Function to rank the students according to their grades.
/*void Rank (student  stuArray[])
{
  char small;
  int location;
  long stuArray[50];
  int i=0, j;
  while (i < (50-1))
  {
	  j=i+1;
	  small=stuArray[i];
	  location=i;
	  while (j<50)
	  {
		  if(stuArray[j]<small)
		  {
			  small=stuArray[j];
			  location=j;
		  }
		   j++;
	  }
		   if(location!=i)
		   {
			   stuArray[location]=stuArray[i];
			  stuArray[i]=small;
		   }
		   i++;
  }

}*/

// Function to print out the students computed data
void printOut (student  stuArray[],bool print_out, int numOfStudent)
{
	
	ofstream outStream("finalgrade.out");
	outStream << setw(15) << "Name" << setw(7) << "Exam 1" << setw(7) << "Exam 2" << setw(7) << "Exam 3" 
		<< setw(7) << "Final Exam" << setw(15) << "Final Grade" << setw(15) << " Letter Grade"<< " Rank " << endl;
	
	for(int i=0; i< numOfStudent ; i++)
	{
		outStream << setw(15) << stuArray[i].name << setw(7) << stuArray[i].exam1 << setw(7) << stuArray[i].exam2 << setw(7) 
			<< stuArray[i].exam3 << setw(7) << stuArray[i].finalExam << setw(15) << stuArray[i].finalGrade << setw(15) 
			<< stuArray[i].letterGrade << stuArray[i].rank << endl;
	}

	outStream.close();
}


