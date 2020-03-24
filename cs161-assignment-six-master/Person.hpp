#ifndef WAQARF_PERSON_HPP
#define WAQARF_PERSON_HPP

#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;

class Person{
	private:
		string name;
		double age;
	public:
		Person();
		Person(string pName,double pAge);
		string getName();
		double getAge();
};

#endif
