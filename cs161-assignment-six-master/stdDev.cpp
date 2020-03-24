/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: stdDev.cpp
 * ** Date: 7/28/2018
 * ** Description: The program as a whole calculates standard Deviation of ages
 * in a class from the HPP
 * *********************************************************************/ 

#include <iostream>
#include <string>
#include <cmath>
#include "Person.hpp"

using std::cin;
using std::cout;
using std::string;

double stdDev(Person val[],int size){
	int sum = 0; //Initalize sum to create the mean
	double mean,stdDeviation = 0.0;
	for(int i=0;i<size;i++) //add all values through a loop
		sum += val[i].getAge();
	mean = sum/size; //calculate the mean
	for(int i=0;i<size;++i)
		stdDeviation += pow(val[i].getAge()-mean,2); 

	return sqrt(stdDeviation/size);
}

int main(){
	Person a("alice",92);
	Person b("bernice",77);
	Person array[]  = {a,b};
	double result = stdDev(array,2);
	cout << result << "\n";
	
	return 0;

}	
