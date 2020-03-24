/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** Date: 7/5/2018
 * ** Description: This program will read the name of a file, open it, and
 * read the integers from the file, and then sum the integers in a seperarate file. 
 * *********************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std:: cout;
using std:: cin;
using std:: ifstream;
using std:: ofstream;
using std:: string;

int main(){
	int sum = 0;
	int temp;
	ifstream file;
	string filen;

	cout << "Please enter your filename.\n";
	cin>>filen;

	file.open(filen.c_str());
	if (file.fail()){
		cout << "could not access file\n";
		return 0;
	}
	
	while(file >> temp)
		sum += temp;
	file.close();
	
	ofstream outFile;
	outFile.open("sum.txt");
	outFile << sum;
	outFile.close();

	cout << "result written to sum.txt\n";
	
	return 0;
}
