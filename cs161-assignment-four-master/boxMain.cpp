#include <iostream>
#include <cstdlib>
#include "Box.hpp"

using std::cout;
using std::cin;

int main(){
	Box ob1,ob2(2.0,3.0,4.0);
	cout << "box 1 " << ob1.calcVolume();
	cout << "\nSA " << ob1.calcSurfaceArea();

	cout << "\nbox 2 " << ob2.calcVolume();
	cout << "\nSA " << ob2.calcSurfaceArea();
		
	return 0;
}
