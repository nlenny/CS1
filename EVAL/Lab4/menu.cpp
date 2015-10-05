// Ngwa T Leonard
// 06/20/2013
// Lab4_Project
// Creating a program that gives the user six options from a menu and Calculates the results
// The program also allows the user to keep going if they want to continue with their calculations.
#include <iostream>

using namespace std;

// Declaring PI outside of main as a global constant.

const double PI = 3.141593;

int main(){

// Declaring my variables to be used inside of main.

float l, w, h, r, SA_Box = 0.0, vol_Cylinder, vol_Sphere, SA_Cylinder, SA_Sphere, vol_Box;

int choice;

// Using a do-while loop to ensure that the program runs at least once and a choice for the user to continue running the program.

do {

// Displaying the menu to the user and ask for their input.

cout <<"The menu to choose from is as follows" << endl << endl;

cout << "1: Volume of a box" << endl;

cout << "2: Surface area of a box" << endl;

cout << "3: Volume of a cylinder" << endl;

cout << "4: Surface area of a cylinder" << endl;

cout << "5: Volume of a sphere" << endl;

cout << "6: Surface area of a sphere" << endl << endl;

cout << "Please make a selection by using the keys 1 through 6 and press enter, or enter -1 to quit" << endl << endl;

cin >> choice;

// Using a switch to process the user's choice.

switch (choice){

// Case 1 will compute both the volume and the surface area, and output the results to two decimal places.

case 1:
	
	cout <<"This option will compute the Volume of box" <<"  and the  ";

	cout <<"Surface area of box" << endl << endl;

	cout <<"Please enter the length and press enter" << endl << endl;

	cin >> l;
	
	cout <<"Please enter the width and press enter" << endl << endl;

	cin >> w;

	cout <<"Please enter the height and press enter" << endl << endl;

	cin >> h;
	
	vol_Box = l * w * h;

	cout.setf(ios::fixed);

	cout.setf(ios::showpoint);

	cout.precision(2);

	cout <<"The volume of the box is      " << vol_Box <<", and " << endl << endl;
	
	SA_Box = ((2*l*w) + (2*w*h) + (2*l*h));
	
	cout << "The surface area of the box is      " << SA_Box << endl << endl;

	break;

case 2:

	// This will compute only the surface area.

	cout <<"This option will compute surface area of a box" << endl << endl;
	
	cout <<"Please enter the length and press enter" << endl << endl;

	cin >> l;
	
	cout <<"Please enter the width and press enter" << endl << endl;

	cin >> w;

	cout <<"Please enter the height and press enter" << endl << endl;

	cin >> h;

	SA_Box = ((2*l*w) + (2*w*h) + (2*l*h));

	cout.setf(ios::fixed);

	cout.setf(ios::showpoint);

	cout.precision(2);
	
	cout << "The surface area of the box is      " << SA_Box << endl << endl;

	break;

case 3:

	// Case 3 will compute both the volume and the surface area.

	cout <<"This option will compute the volume, and surface area of a cylinder" <<endl << endl;
	
	cout <<"Please enter the height and press enter" << endl << endl;

	cin >> h;

	cout <<"Please enter the radius and press enter" << endl << endl;

	cin >> r;

	vol_Cylinder = PI*r*2*h;

	cout.setf(ios::fixed);

	cout.setf(ios::showpoint);

	cout.precision(2);

	cout <<"The volume of the cylinder is      " << vol_Cylinder <<", and " << endl << endl;

	SA_Cylinder = ((2*PI*r*h) + (2*PI*r*r));

	cout <<"The surface area of the cylinder is      " << SA_Cylinder << endl << endl;

	break;

case 4:

	// This computes only the surface area.

	cout <<"This option will compute the surface area of a cylinder" << endl << endl;

	cout <<"Please enter the height and press enter" << endl << endl;

	cin >> h;

	cout <<"Please enter the radius and press enter" << endl << endl;

	cin >> r;

	SA_Cylinder = ((2*PI*r*h) + (2*PI*r*r));

	cout.setf(ios::fixed);

	cout.setf(ios::showpoint);

	cout.precision(2);

	cout <<"The surface area of the cylinder is      " << SA_Cylinder << endl << endl;

	break;

case 5:

	// Case 5 will compute both the volume and the surface area.

	cout <<"This option will compute the volume, and surface area of a sphere." << endl << endl;
	
	cout <<"Please enter the radius and press enter" << endl;

	cin >> r;

	vol_Sphere = 4/3*PI*r*r*r;

	cout.setf(ios::fixed);

	cout.setf(ios::showpoint);

	cout.precision(2);

	cout <<"The volume of the sphere is      " << vol_Sphere <<", and "<< endl << endl;

	SA_Sphere = 4*PI*r*r;

	cout <<"The surface area of the sphere is      " << SA_Sphere << endl << endl;

	break;

case 6:

	// Case 6 will compute only the surface area.

	cout <<"Surface area of sphere" << endl << endl;

	cout <<"Please enter the radius" << endl << endl;

	cin >> r;
	
	SA_Sphere = 4*PI*r*r;

	cout.setf(ios::fixed);

	cout.setf(ios::showpoint);

	cout.precision(2);
	
	cout <<"The surface area of the sphere is      " << SA_Sphere << endl << endl;

	break;

// A default in case the user's choice is not in the menu, and a choice to keep running the program.

default:

	cout << "Please make a valid choice if you wish to continue, or enter -1 to quit." << endl << endl;

	}
		
		} while (choice != -1); 

		
		
			return 0;
}