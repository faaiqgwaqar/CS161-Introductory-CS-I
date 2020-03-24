/*********************************************************************
 *  * ** Author: Faaiq G Waqar
 *   * ** File Name: Point.cpp
 *
 * *    * ** Date: 8/8/2018
 *     * ** Description: The program as a whole is a Point and Line Segment
 *      * Calculator. This file is for impplementation of point class
 *       * *********************************************************************/

#include <iostream>
#include <cmath>
#include "Point.hpp"

Point::Point(){ //COnstructors
	setXCoord(0);
	setYCoord(0);
}

Point::Point(double axCoord,double ayCoord){
	setXCoord(axCoord);
	setYCoord(ayCoord);
}

void Point::setXCoord(double axCoord){ //setters
	xCoord = axCoord;
}

void Point::setYCoord(double ayCoord){
	yCoord = ayCoord;
}

double Point::getXCoord(){ //getters
	return xCoord;
}

double Point::getYCoord(){
	return yCoord;
}

double Point::distanceTo(const Point &p){ //distance calculator
	return sqrt(pow((xCoord - p.xCoord),2)+pow((yCoord - p.yCoord),2));
}
