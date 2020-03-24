/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** Date: 7/1/2018
 * ** Description: This program asks for user input of 5 doubles, and then
 * arithmatically solves for the average and then outputs that as a double
 * *********************************************************************/ 

#include <iostream>
using std::cin;
using std::cout;

int main(){
    double num1,num2,num3,num4,num5,avg;
    cout<<"Please enter five numbers.\n";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
    avg = (num1+num2+num3+num4+num5)/5;
    cout<<"The average of those numbers is:\n"<<avg<<"\n";
    return 0;
}
