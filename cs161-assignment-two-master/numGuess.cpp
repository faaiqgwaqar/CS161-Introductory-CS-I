/********************************************************************* 
 * ** Author: Faaiq G Waqar 
 * ** Date: 7/2/2018
 * ** Description: This program prompts the user for an integer that the player
 * will try to guess. If the users number entered is higher or lower the user
 * will be notified, and the amount of attepts will be told at the end of the program.
 * *********************************************************************/

#include <iostream>

using std::cout;
using std::cin;

int main (){
	int temp,goal,i;
	bool stop = false;

	cout << "Enter the number for the player to guess.\n";
	cin >> goal;
	
	i = 0;
	cout << "Enter your guess.\n";

	while(stop == false){
		i++;
		cin >> temp;
		if (temp < goal)
			cout << "Too low - try again.\n";
		else if (temp > goal)
			cout << "Too high - try again.\n";
		else
			stop = true;
	}
	
	cout << "You guessed it in " << i << " tries.\n";
		
	return 0;
}	
