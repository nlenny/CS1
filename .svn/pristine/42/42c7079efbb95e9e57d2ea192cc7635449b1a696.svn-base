//Ngwa T Leonard.
//Base Converter Code.
//Due: 06/30/2013

#include <iostream>

int main()
{
	char response('0'); // "response" value either continues or ends do-while loop
    
    do {
        int num, oldBase, newBase;
        std::cout << "Enter your number between 1 and 2147483647." << std::endl;
        std::cin >> num;
        
        while((num<1) ||(num>2147483647)){ 
            std::cout<<"Your number is out of range, please enter a valid number." << std::endl;
            std::cin>>num;
        }
        
        std::cout << "What base is your number currently in?"<< std::endl;
        std::cin >> oldBase;
        std::cout << "What base would you like your number converted to? (Must be between 2 and 10)" << std::endl;
        std::cin >> newBase;
        std::cout << std::endl;
        
        while((newBase<2)||(newBase>10)){
            std::cout << "New base input is out of range, please enter a new base to convert to." << std::endl << std::endl;
            std::cin >> newBase;
        }
        
        // Function to convert user's number to base 10 if it is not already in base 10.
        int digit, numNewBase, place;
        if(oldBase!=10)
		{
            digit = num % 10;
            // Checks to make sure number input can be represented in the given base.
            if(digit >= oldBase)
			{
                std::cout << "Number is not within the range of specified base. Re-enter a number and base." << std::endl;
                response = 'y';
                continue;
            }
            
            int numBaseTen = digit;
            place = 1;
            num = num/10;
            
            while(num != 0){
                digit = num % 10;
                place = place * oldBase;
                numBaseTen = numBaseTen + (digit * place);
                num = num / 10;
            }
            num = numBaseTen;
            std::cout<<"Your number in base 10 is "<< num <<std::endl;
        }
        // Function to convert user's number from base 10 to the user's desired base, and outputs user's number in their new base.
        
        numNewBase = num % newBase;
        place = 1;
        num /= newBase;
        
        while(num != 0){
            digit = num % newBase;
            place *= 10;
            if((2147483647 - numNewBase - (digit * place)) < 0){
                std::cout << "Error: INT OVERFLOW. Your number is too large to represent in the specified base." << std::endl;
                response = 'E';
                num = 0;
            }
            numNewBase += (digit * place);
            num /= newBase;
        }
        if(response == 'E'){
            std::cout << "Would you like to try another number? (Y/N)" << std::endl;
            std::cin >> response;
            continue;
        }
        
        std::cout << "Your number in base " << newBase << " is: " << numNewBase << std::endl << std::endl;
        
        //Using a do-while loop and giving the user a choice to continue with their calculations or exit the program.
        std::cout << "Enter 'Y' for yes to continue with the program, else 'N' for no to exit the program." <<std::endl;
        std::cin>>response;
        std::cout << std::endl;
    
    }while ((response == 'Y') || (response == 'y'));

    return 0;
}

