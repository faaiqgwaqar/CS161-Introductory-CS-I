/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: findMedian.cpp
 * ** Date: 7/28/2018
 * ** Description: The program as calculates the median of numbers in an array
 * *********************************************************************/

#include <iostream>
#include <algorithm> //Use this library for a sort

using std::cout;
using std::cin;
using std::sort;

double findMedian(int *val,int size){ //call to function
	sort(val,val+size); //sort so median can be found
	double median; //initialize variable
	if(size%2 == 0) // if even amount of numbers
		median = ((double)val[size/2]+val[(size-1)/2])/2;
	else //if odd ammounr of numbers
		median = val[size/2];

	return median; //return
}

//int main(){
//	int val[] = {23,5,-10,0,0,321,1,2,99,30};
//	int size = 10;
//	
//	double median = findMedian(val,size);
//	cout << "Median: " << median << "\n\n";
//	
//	return 0;
//}
