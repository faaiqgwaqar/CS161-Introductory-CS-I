/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** Date: 7/1/2018
 * ** Description: This program converts celcius temperatures to fahrenheit
 * temperatures stores in doubles/
 * *********************************************************************/ 

#include <iostream>
using std::cin;
using std::cout;

int main(){
    double celsius,fahrenhiet;
    cout<<"Please enter a Celsius temperature.\n";
    cin>>celsius;
    fahrenhiet = ((9*celsius)/5)+32;
    cout<<"The equivalent Fahrenheit temperature is:\n"<<fahrenhiet<<"\n";
    return 0;
}
