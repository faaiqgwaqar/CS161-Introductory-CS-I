/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: Taxicab.cpp
 * ** Date: 7/15/2018
 * ** Description: This program does changes for the location of a taxicab
 * *********************************************************************/

#ifndef WAQARF_TAXICAB_HPP //header guards
#define WAQARF_TAXICAB_HPP
class Taxicab{
	private: // set variables into the class
		int xCoord;
		int yCoord;
		int distance;
	public:
		Taxicab(); //default constructor
		Taxicab(int x, int y); // constructor w variables
		int getXCoord(); //getter for the x
		int getYCoord(); //getter fot the y
		int getDistanceTraveled();
		void moveX(int displacement); //makes changes to x and the distance
		void moveY(int displacement); // makes changes to y and the distance
};

#endif
