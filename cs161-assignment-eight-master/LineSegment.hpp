/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: LineSegment.hpp
 * ** Date: 8/8/2018
 * ** Description: The program as a whole is a Point and Line Segment
 * Calculator. This file is for definiton of LineSegment Class
 * *********************************************************************/ 

#ifndef WAQARF_LINESEGMENT_HPP
#define WAQARF_LINESEGMENT_HPP
#include "Point.hpp"

class LineSegment {
	private:
		Point p1; //Reference to the Point class
		Point p2;
	public:
		LineSegment(); //Constructors
		LineSegment(Point &p1,Point &p2);
		void setEnd1(Point &p1); //Set Endpoints
		void setEnd2(Point &p2);
		Point &getEnd1(); //Get Endpoints
		Point &getEnd2();
		double length(); //Length Calc
		double slope(); //Slope Calc`
};

#endif
