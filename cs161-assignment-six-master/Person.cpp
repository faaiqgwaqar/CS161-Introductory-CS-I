/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: Person.hpp
 * ** Date: 7/28/2018
 * ** Description: The program as a whole calculates standard Deviation of ages
 * in a class from the HPP
 * *********************************************************************/ 

#include <iostream>
#include <string>
#include "Person.hpp"

using std::cin;
using std::cout;
using std::string;

Person::Person(){ //Default Construtor w No Parameters
	age = 0;
}

Person::Person(string pName,double pAge){ //Parameterized Constructor w Parameters
	name = pName;
	age = pAge;
}
string Person::getName(){ //Getter Function for Name string
	return name;
}

double Person::getAge(){ //Getter Function for Age int
	return age;
}


