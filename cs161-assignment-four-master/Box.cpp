/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: Box.cpp
 * ** Date: 7/15/2018
 * ** Description: This program does calculations of a box SA and V using classes
 * *********************************************************************/ 

#include <iostream>
#include <cstdlib>
#include "Box.hpp" //include header file

/********************************************************************* 
 * ** Description: Defeult constructer that sets elements to one
 **********************************************************************/ 
Box::Box(){
	height = 1;
	width = 1;
	length = 1;
}

/********************************************************************* 
 * ** Description: Constructor to set elements to passed in paramenters
 * *********************************************************************/ 
Box::Box(double imheight, double imwidth, double imlength){
	setHeight(imheight);
	setWidth(imwidth);
	setLength(imlength);
}

/********************************************************************* 
 * ** Description: setter for height
 * *********************************************************************/ 
void Box::setHeight(double imheight){
	height = imheight;
}

/*********************************************************************
 *  * ** Description: setter for width
 *   * *********************************************************************/
void Box::setWidth(double imwidth){
	width = imwidth;
}

/*********************************************************************
 *  * ** Description: setter for length
 *   * *********************************************************************/
void Box::setLength(double imlength){
	length = imlength;
}

/********************************************************************* 
 * ** Description: function that returns the volume in a double
 * *********************************************************************/ 
double Box::calcVolume(){
	return height*width*length;
}

/********************************************************************* 
 * ** Description: function that returns the surface area as a double
 * *********************************************************************/ 
double Box::calcSurfaceArea(){
	return (2.0*length*width) + (2.0*width*height) + (2.0*length*height);
}
