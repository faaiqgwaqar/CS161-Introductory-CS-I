/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: hailstone
 * ** Date: 7/13/2018
 * ** Description: The program replicates the hailstone algorithm and figures
 * out how many iterations it takes to get one
 * *********************************************************************/ 

#include <iostream>
#include <cmath>
	
using std::cout;
using std::cin;

int hailstone(int);

//int main(){
//	int start,times;	
//	
//	cout << "Enter Start Integer: \n";
//	cin >> start;
//	times = hailstone(start);
//	cout << "Times: " << times << "\n";
//	return 0;
//}


/********************************************************************* 
 * ** Description: does the math and gets the final result
 * *********************************************************************/ 
int hailstone(int start){
	int hailstone = start,imp = 0; //define variables
	while(hailstone != 1){ //begin loop to find iterations
		if (hailstone%2 == 0){ //in the case of even
			hailstone /= 2; //divide by 2
			cout << hailstone << "\n"; //print
		}
		else{ //in case of odd
			hailstone *= 3; // multiply by 3
			hailstone++; // add one
			cout << hailstone << "\n"; //print
		}
		imp++;
	}
	return imp;	
}
