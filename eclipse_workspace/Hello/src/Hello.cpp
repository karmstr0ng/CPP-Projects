//============================================================================
// Name        : Hello.cpp
// Author      : Kevin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int main() {
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	string fname,lname, age, maddr, ssn;

	string pinfo[8] = {fname, lname, age, maddr, ssn};

	cout << "Enter first name: " << flush;
	cin >> pinfo[0];
	cout << "Enter last name: " << flush;
	cin >> pinfo[1];
	cout << "Enter age: " << flush;
	cin >> pinfo[2];
	cout << "Enter SSN: ";
	cin >> pinfo[4];
	cin.ignore();
	cout << "Enter address: " << flush;
	getline(cin, maddr);

	cout << "\nName: " << pinfo[0] << " " << pinfo[1] << endl;
	cout << "Age: " << pinfo[2] << endl;
	cout << "Address: " << maddr << endl;
	cout << "SSN: " << pinfo[4] << endl;

	return 0;



}
