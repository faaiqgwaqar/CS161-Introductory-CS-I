/*********************************************************************
 *  * ** Author: Faaiq G Waqar
 *   * ** File Name: LineSegment.cpp
 *    * ** Date: 8/8/2018
 *     * ** Description: The program as a whole is a Point and Line Segment
 *      * Calculator. This file is for implementation of LineSegment Class
 *       * *********************************************************************/

#include <iostream>
#include <cmath>
#include "LineSegment.hpp"
#include "Point.hpp"

LineSegment::LineSegment(){ //Default Constructor
	Point p1,p2;
	setEnd1(p1);
	setEnd2(p2);
}

LineSegment::LineSegment(Point &p1,Point &p2){ //Parametrised Constructor
	setEnd1(p1);
	setEnd2(p2);
}

void LineSegment::setEnd1(Point &p1){ //Setters
	this -> p1 = p1;
}

void LineSegment::setEnd2(Point &p2){
	this -> p2 = p2;
}

Point &LineSegment::getEnd1(){ //Getters
	return p1;
}

Point &LineSegment::getEnd2(){
	return p2;
}

double LineSegment::length(){ //Get Length Calc
	return p1.distanceTo(p2);
}

double LineSegment::slope(){ //Get Slope Calc
	return ((p2.getYCoord()-p1.getYCoord())/(p2.getXCoord()-p1.getXCoord()));
}
