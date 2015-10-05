//Ngwa T Leonard.
//CS1 Summer.
//Lab7 Code. Calculating final grade, assigning letter grade using I/O file.
//07/07/2013

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>//including this library to manipulate setw(_).
    
int main(){
    std::ifstream in;
    std::ofstream out;

   // Function to know if file didn't open. 
    in.open("grade.txt");
    if(in.fail()){
        std::cout << "Input file failed to open.";
        exit(1);
    }
    out.open("finalgrade.txt");
	
    double examOne, examTwo, examThree, examFour, finalGrade;

    char firstName[15], lastName[15], letterGrade;
        
    std::cout << "Computing students' grade." << std::endl;

    out << std::setw(15) << "Name" << std::setw(15) << "Exam 1" << std::setw(15) << "Exam 2" << std::setw(15) << "Exam 3" << std::setw(15) << "Exam 4" << std::setw(15) << "Final Score" << std::setw(15) << "Grade" << std::endl;
        
    //Using a while loop with parameters to make sure it reads the entire file
	while(in >> firstName >> lastName >> examOne >> examTwo >> examThree >> examFour)
	{
        finalGrade = (0.2 * (examOne + examTwo + examThree)) + (0.4 * examFour); // Calculates final grade and assigns a letter grade.
        
        if(finalGrade<60)
           letterGrade = 'F';
        else if(finalGrade<70)
            letterGrade = 'D';
        else if(finalGrade<80)
            letterGrade = 'C';
        else if(finalGrade<90)
            letterGrade = 'B';
        else
            letterGrade = 'A';
        //Outputs both names, last name, exams, final grade and letter grade in that order.
        out << std::setw(15) << firstName << std::setw(15) << lastName << std::setw(15) << examOne << std::setw(15) << examTwo << std::setw(15) << examThree << std::setw(15) << examFour << std::setw(15) << finalGrade << std::setw(15) << letterGrade << std::endl;

    }
    
    std::cout << "Grading, complete!" << std::endl;

	// Closes all open files.
    in.close();
    out.close();

    return 0;
}

    


