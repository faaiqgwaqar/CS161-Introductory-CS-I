/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: transformArray.cpp
 * ** Date: 8/2/2018
 * ** Description: The program as a whole transforms array from a singe iteration to 
 * a ddouble iteration +1.
 * *********************************************************************/ 

#include <iostream>
#include <cstdlib>

using std::cout;

void transformArray(int *&orgArr,int size){ //Function Declaration
	int newSize = size * 2; // change size to double
	int* newArr = new int[newSize]; //initialize new arr
	int i; //for iterator

	for(i = 0; i < size; i++)
		newArr[i] = orgArr[i]; //original set

	for(int j=0; j < size; j++){	//set to +1
		newArr[i] = (orgArr[j]+1);
		i++;
	}

	delete[] orgArr; //mem clear
	orgArr = newArr; //for main status
}

int main(){
	int* myArray = new int[3];
	myArray[0] = 4;
	myArray[1] = 2;
	myArray[2] = 5;
	
	transformArray(myArray,3);
		
	for (int i=0; i<6; i++)
		cout << myArray[i] << "\n";
		
	delete [] myArray;
	return 0;
}
	
