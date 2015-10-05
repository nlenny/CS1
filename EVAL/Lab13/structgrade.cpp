#include <iostream>
#include <fstream>
#include <cstdlib>
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

int keyboardInput (student stuArray[]);//declair function to control the keyborad input from user.

int fileInput(student  stuArray[]);

void compFinalGrade (student &stuArray);//declair function to control the grade calculation.

//void file_out (student  stuArray[],bool print_out, int);//declair function to control file out.

void Rank (student  stuArray[]);//declair function to control the rank calculation.




int main()
{
	int choice;
	do 
	{
	
	int i=0;
	student stuArray[50];

	cout <<"Please choose from the menu options below." << endl;
    cout << "1:  Input, compute and display student's data from the keyboard." << endl << endl;
    cout << "2:  Input compute and display student's data from a file" << endl << endl;
	cout << "Please make a selection by using the keys 1 and 2, or -1 to quit" << std::endl << std::endl;
    cin >> choice;

	switch (choice)
	 {

case 1:
	
	keyboardInput (stuArray);
	//compFinalGrade (stuArray);
	//Rank (stuArray);
	break;

case 2:
	
	fileInput(stuArray);
	//compFinalGrade(stuArray);
	//Rank (stuArray);
	break;

default:

	std::cout << "Please make a valid choice if you wish to continue, or -1 to exit." << std::endl << std::endl;

	 }

 } while (choice != -1);


	return 0;
}

int keyboardInput (student stuArray[])//function to control the keyborad input from user.
{
	int numOfStudents=0;
	cout <<"Please enter the number of the student:  " <<endl;
	cin >> numOfStudents;
	if (numOfStudents > 50)
		cout <<"Sorry, only a maximum of 50 students can be accepted at this time." << endl;
	else
	{
	  for(int i=0; i<numOfStudents ; i++)//display the asking information with the times user want.
	   {
		cout<<"Please enter this student's name, then press enter." << endl;
		cin >> stuArray[i].name;
		cout<<"Please enter this student's exam 1 score, then press enter."<< endl;
		cin >> stuArray[i].exam1;
	    cout<<"Please enter this student's exam 2 score, then press enter." << endl;
		cin >> stuArray[i].exam2;
		cout<<"Please enter this student's exam 3 score, then press enter."<< endl;
		cin >> stuArray[i].exam3;
		cout<<"Please enter this student's final exam score, then press enter." << endl;
		cin >> stuArray[i].finalExam;
        
		compFinalGrade(stuArray[i]);
		
	   }
	}
	return numOfStudents;
}


int fileInput(student  stuArray[])
{
	cout << "This option will allow you to compute student's grades and output them to a file." << endl;
	cout << "You are only allowed a maximum of 50 student's data" << endl;
	int i=0;
	int numOfStudents;
	ifstream inStream;
    ofstream outStream("finalgrade.out");

    inStream.open("grade.dat");
    if(inStream.fail())
	{
        cout << "Input file failed to open.";
        exit(1);
    }
	outStream.open("finalgrade.out");

	outStream << setw(15) << "Name" << setw(15) << "Exam 1" << setw(15) << "Exam 2" << setw(15) 
		      << "Exam 3" << setw(15) << "Final Exam" << setw(15) << "Final Grade" << setw(15) << "Letter Grade" << "Rank" << endl;
	
	while(inStream >> stuArray[i].exam1 >> stuArray[i].exam2 >> stuArray[i].exam3 >> stuArray[i].finalExam >> stuArray[i].finalGrade
		  >>stuArray[i].letterGrade >> stuArray[i].rank)
	{

		outStream << setw(15) << stuArray[i].name << setw(7) <<stuArray[i].exam1 << setw(7) << stuArray[i].exam2 << setw(7) 
			      << stuArray[i].exam3 << setw(7) << stuArray[i].finalExam << setw(15) << stuArray[i].finalGrade <<setw(15)
				  << setw(15) <<stuArray[i].letterGrade << setw(15) << stuArray[i].rank <<endl;
	}
	cout << "Grading and sorting is complete!" << endl;
	inStream.close();
    outStream.close();
}


void compFinalGrade(student &stuArray)
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

		cout << stuArray. name <<" " << stuArray.exam1 <<" "<< stuArray.exam2 <<" "<< stuArray.exam3 
       	     <<" "<<stuArray.finalExam <<" " << stuArray.finalGrade << " "<< stuArray.letterGrade << endl;
}



/*void Rank (student*  stuArray[])//declair function to control the rank calculation.
{
  char small;
  int location;
  long stuArray[50];
  int i, j;
  for (i = 0,i < (50-1); i++)
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
	 // }
		   if(location!=i)
		   {
			   stuArray[location]=stuArray[i];
			  stuArray[i]=small;
		   }
		   i++;
	  }
  }

}*/
