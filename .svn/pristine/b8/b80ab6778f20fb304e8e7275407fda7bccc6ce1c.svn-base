// Ngwa T Leonard
// CS1
// Lab10, rolling of the dice and printing the results
// 07/19/2013


# include<iostream>
# include<ctime>
# include<cstdlib>
# include<iomanip>

// Prototyping my functions
int rolling(int& side_die_1, int& side_die_2);// Function allows user to roll both dice and returns both dice numbers

void display(int numOfRolls, int twoDiceArray[][6]);// Function to display numbers each roll of the dice by the user, and prints the frequency distribution of the numbers in an array of size 6 by 6

int main()

{
	// Declaring my variables.
    unsigned short seed;
	char response;
	int numOfRolls=0;
	int side_die_1;
	int side_die_2;
	int twoDiceArray[6][6];
	int totalDiceCount=0;

	// Function to ask the user for the seed, once, then runs the program till user decides to end the program
	std::cout <<"Enter seed" << std::endl;
	std::cin >> seed;
	srand(seed);

	do 
		{

		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			
				twoDiceArray[i][j] = 0;
		}

	std::cout <<"How many times do you want to roll the dice?" << std::endl;

	std::cin >> numOfRolls;

	std::cout << std::endl;

	// Dynamically allocating two arrays to store the number of rolls by the user
	int* arrayOne=new int[numOfRolls];

	int* arrayTwo=new int[numOfRolls];

	// Counts the number of times the user rolls the dice
	for (int count = 0; count < numOfRolls; count++)

	{

		totalDiceCount=rolling(side_die_1, side_die_2);

		twoDiceArray[side_die_1][side_die_2]++;

		arrayOne[count] = side_die_1;
		arrayTwo[count] = side_die_2;

	}

	// Displays the number of rolls the user made and displays the numbers on the two dice.
	for (int i=0; i < numOfRolls; i++)
		  {
			  std::cout << std::setw(5)<< "Roll " << i+1 <<" ";
			  std::cout <<std::setw(5)<< arrayOne[i] <<", " << arrayTwo[i] <<"; ";
			  std::cout<< std::endl;
		  }

	// Deallocates the two dynamic arrays created, to free memory.
	delete[] arrayOne;
	delete[] arrayTwo;

	std::cout<<std::endl;

	    display(numOfRolls, twoDiceArray);

		std::cout << std::endl;

		std::cout <<"Please press Y for yes to continue playing, else, thanks for playing.  Good-bye." << std::endl;

		std::cin >> response;

		std::cout << std::endl;

} while ((response == 'Y') || (response == 'y'));

	system("PAUSE");

	return 0;

}

// Function allows user to roll both dice and returns both dice numbers

int rolling(int& side_die_1, int& side_die_2)

{

	int totalDiceCount;
	
	side_die_1 = 1 + rand() % 6;

	side_die_2 = 1 + rand() % 6;

	totalDiceCount = side_die_1 + side_die_2;

	return totalDiceCount;
	
}

// Function to display numbers each roll of the dice by the user, and prints the frequency distribution of the numbers in an array of size 6 by 6

void display(int numOfRolls,int twoDiceArray[][6])

{
	std::cout << std::endl<< std::endl;

	std::cout<< std::setw(32)<<"Simulation of "<< numOfRolls << " rolls of" << std::endl;

	std::cout << std::endl;

	std::cout<< std::setw(34) <<"Side  Die  2" << std::endl << std::endl;

	std::cout << std::setw(16) <<"1" << std::setw(5) <<"2" << std::setw(5) <<"3" << std::setw(5) <<"4" << std::setw(5) <<"5" << std::setw(5) <<"6"<< std::endl << std::endl<< std::endl;
		
	for (int diceOne = 0; diceOne < 6; diceOne++)
	{
		if(diceOne == 1)
		{
			std::cout << "Roll"<<std::endl;
		}
		else if(diceOne == 2)
		{
            std::cout << "of"<<std::endl;
		}
		else if(diceOne == 3)
		{
			std::cout <<"die 1"<<std::endl;
		}
		else if(diceOne == 4)
		{
			std::cout<<std::endl;
		}
		else if(diceOne == 5)
		{
			std::cout << std::endl;
		}
		
			std::cout << std::setw(10) << diceOne + 1 <<" ";// Prints out the rows starting from row 1
			
			for (int diceTwo = 0; diceTwo < 6; diceTwo++)
		
			std::cout << std::setw(5) << twoDiceArray[diceOne][diceTwo];// Prints the frequency distribution in the rows and columns of the array
			
			std::cout << std::endl;
	}
	
}

