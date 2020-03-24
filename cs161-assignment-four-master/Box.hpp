/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: Box.hpp
 * ** Date: 7/15/2018
 * ** Description: This program does calculations of a box SA and V using classes
 * *********************************************************************/ 

#ifndef WAQARF_BOX_HPP //Header guards make sure repeats are eliminated
#define WAQARF_BOX_HPP
#include <iostream>
#include <cstdlib>

class Box{
	private: // These members will hold the dimentions
		double height; //using doubles so decimals can be held
		double width;
		double length;
	public:
		Box(); //default costructor
		Box(double imheight, double imwidth, double imlength); //input constructor
		void setHeight(double imheight); //setters
		void setWidth(double imwidth);
		void setLength(double imlength);
		double calcVolume(); //does calculation for volume
		double calcSurfaceArea(); //does calculation for Surface Area
};
#endif //end header guards
