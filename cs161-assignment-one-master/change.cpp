/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** Date: 7/1/2018
 * ** Description: This program takes a user input for number of cents (0-99)
 * as an integer, and then outputs the optimal ammount of coins it would take
 * to get this amount of cents.
 * *********************************************************************/ 

#include <iostream>
using std::cin;
using std::cout;

int main(){
    int cents,q,d,n,p,rem;
    cout<<"Please enter an amount in cents less than a dollar.\n";
    cin>>cents;
    
    q=cents/25;
    rem = cents%25;
    cents = rem;
    
    d=cents/10;
    rem= cents%10;
    cents = rem;
    
    n=cents/5;
    rem=cents%5;
    cents = rem;
    
    p = cents;
    
    cout<<"Your change will be:\n";
    cout<<"Q: "<<q<<"\nD: "<<d<<"\nN: "<<n<<"\nP: "<<p<<"\n";
        
    return 0;
}
