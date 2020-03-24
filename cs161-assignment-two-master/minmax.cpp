/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** Date: 7/5/2018
 * ** Description: This program asks the user for how many integers it would like
 * to be entered, and then, it will have user input for those integers, and then
 * determine what the mins and maxes are for the set of integers.
 * *********************************************************************/

#include <iostream>

using std::cout;
using std::cin;

int main(){
	int min,max,temp,reps;
	bool z = false;
	cout << "How many integers would you like to enter?\n";
	cin >> reps;
	cout << "Please enter " << reps << " integers.\n";

	cin >> temp;
	min = temp;		
	max = temp;

	for(int i=0; i<(reps-1); i++) {
		cin >> temp;

		if(temp < min)
			min = temp;
		else if(temp > max)
			max = temp;
	}
	
	cout << "min: " << min << "\n";
	cout << "max: " << max << "\n";

	return 0;
}
