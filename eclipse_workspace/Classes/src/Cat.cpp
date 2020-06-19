/*
 * Cat.cpp
 *
 *  Created on: May 28, 2020
 *      Author: kevin
 */

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "This is the Cat constructor" << endl;
}



Cat::~Cat() {
	cout << "This is the Cat destructor" << endl;
}

void Cat::speak() {
	cout << "Meow!!" << endl;
}

void Cat::jump() {
	cout << "Cat jumping off a hot tin roof" << endl;
}




