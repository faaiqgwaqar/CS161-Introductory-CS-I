/******************************************************************************
** Author:       Faaiq G Waqar
** Date:         June 25, 2018
** Description:  Asks the user for their favorite animal and then prints out
**               that that is their favorite animal. This is copied source code
**		 from canvas, that is then modified by the student for use.
*******************************************************************************/ 

#include <iostream>
#include <string>

/*****************************************************************************
 * Function: Main
 * Description: take input and displays favanimal
 ****************************************************************************/

int main()
{
    std::string faveAnimal;
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;    
    
    return 0;
}
