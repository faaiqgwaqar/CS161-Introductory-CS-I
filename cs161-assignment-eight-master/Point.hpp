/*********************************************************************
 *  * ** Author: Faaiq G Waqar
 *   * ** File Name: Point.hpp
 *    * ** Date: 8/8/2018
 *     * ** Description: The program as a whole is a Point and Line Segment
 *      * Calculator. This file is for definiton of Point Class
 *       * *********************************************************************/

#ifndef WAQARF_POINT_HPP
#define WAQARF_POINT_HPP
#include <cmath>
class Point{
	private:
		double xCoord;
		double yCoord;
	public:
		Point();
		Point(double axCoord,double ayCoord);
		void setXCoord(double axCoord);
		void setYCoord(double ayCoord);
		double getXCoord();
		double getYCoord();
		double distanceTo(const Point &p);
};

#endif
