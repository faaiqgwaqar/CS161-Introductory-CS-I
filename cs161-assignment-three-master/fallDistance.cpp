/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: fallDistance.cpp
 * ** Date: 7/13/2018
 * ** Description: This takes the equation for distance based on time and
 * gravity, takes user input, and then solves for distance in seperate function
 * *********************************************************************/ 

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double fallDistance(double);

//int main(){
//	double time,distance;
//
//	cout << "Welcome to Distance of Object Falling Program.\n";
//	cout << "Start By Entering a Value for Time: \n";
//	cin >> time;
//
//	distance = fallDistance(time);
//	
//	cout << "The Distance Travelled is: " << distance << "\n\n";
//}

/********************************************************************* 
 * ** Description: Function does calculation of distance with time passed in as double
 * *********************************************************************/ 
double fallDistance(double time){
	double cont = 0.50, g = 9.8, distance;
	//intializing variables, give constants names for simplicities sake
	distance = cont * g * pow(time,2.0);
	//create equation to solve for distance
	return distance;
	//return distance to the main
}
