/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: smallSort2.cpp
 * ** Date: 8/1/2018
 * ** Description: The program as a whole is used to swap 3 variables via location
 * *********************************************************************/

#include <iostream> //Include Libraries for Code to Run
#include <cmath>

//using std::cout;

void smallSort2(int *first,int *second,int *third){ // Declare Function, pass in variables
	int temp;
	if(*first > *second){ //Compare first and second variables, swap
		temp = *first;
		*first = *second;
		*second = temp;
	}
	
	if(*first > *third){ //Compare first and third variables, swap
		temp = *first;
		*first = *third;
		*third = temp;
	}

	if(*second > *third){ //Compare second and third variables, swap
		temp = *second;
		*second = *third;
		*third = temp;
	}
}

//int main(){
//	int first = 14;
//	int second = -90;
//	int third = 2;
//	smallSort2(&first,&second,&third);
//	cout << first << ", " << second << ", " << third << "\n";
//	
//	return 0;
//}
