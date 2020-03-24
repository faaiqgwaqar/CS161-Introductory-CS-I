/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name:Taxicab.cpp
 * ** Date: 7/15/2018
 * ** Description: This program does changes for the location of a taxicab
 * *********************************************************************/

#include <iostream>
#include <cstdlib>
#include "Taxicab.hpp"

/********************************************************************* 
 * ** Description: Default constructor sets to zero
 * *********************************************************************/ 
Taxicab::Taxicab(){
	xCoord = 0;
	yCoord = 0;
	distance = 0;
}

/********************************************************************* 
 * ** Description: Constructor to passed in values
 * *********************************************************************/ 
Taxicab::Taxicab(int x, int y){
	xCoord = x;
	yCoord = y;
	distance = 0;
}

/********************************************************************* 
 * ** Description: getter to return the xCoordinate according to the constructor
 * *********************************************************************/ 
int Taxicab::getXCoord(){
	return xCoord;
}

/********************************************************************* 
 * ** Description: getter to return the yCoordinate according to the constructor
 * *********************************************************************/ 
int Taxicab::getYCoord(){
	return yCoord;
}

/********************************************************************* 
 * ** Description: getter to return the distance
 * *********************************************************************/ 
int Taxicab::getDistanceTraveled(){
	return distance;
}

/********************************************************************* 
 * ** Description: used in order to move in the x direction
 * *********************************************************************/ 
void Taxicab::moveX(int displacement){
	xCoord += displacement;
	distance += abs(displacement); //adds to distance from displacement from origin
}

/********************************************************************* 
 * ** Description: used in order to move in the y direction
 * *********************************************************************/ 
void Taxicab::moveY(int displacement){
	yCoord += displacement;
	distance += abs(displacement);
}


