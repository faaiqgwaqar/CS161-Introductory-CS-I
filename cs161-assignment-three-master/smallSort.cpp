/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: smallSort.cpp
 * ** Date: 7/8/2018
 * ** Description: The program swaps the order of three integers passed by reference
 * *********************************************************************/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

void smallSort(int &,int &,int &);

//int main(){
//	int first = 14;
//	int second = -90;
//	int third = 2;
//
//	smallSort(first,second,third);
//	cout << first << ", " << second << ", "  << third << "\n\n";
//
//	return 0;
//}



/********************************************************************* 
 * ** Description: This function does the actual swapping after being passed in
 * *********************************************************************/ 
void smallSort(int &first, int &second, int &third){
	int temp; //because all of these are swapped, one should store a value before it
	//is replaced temporarily
	
	if(first>second){
		temp = second; //set temp
		second = first;
		first = temp; //swap
	}
	
	if(first>third){
		temp = third; //set temp
		third = first;
		first = temp; // swap
	}
	
	if(second>third){
		temp = third; //set temp
		third = second;
		second = temp; //swap
	}
}
