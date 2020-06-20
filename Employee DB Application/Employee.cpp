/*
 * Employee.cpp
 *
 *  Created on: Jun 12, 2020
 *  Updated on: Jun 19, 2020
 *  	Fix employee class member function definition on line 45: void Person::setEmp_no(int number)
 *      Author: kevin
 */


#include <iostream>
#include <sstream>
#include "employee.h"

using namespace std;

Person::Person(){

	cout << "This is the Person constructor" << endl;

}

Person::Person(string no, string fname, string lname, string title, time_t birthday, time_t hiredate, char gender) {

	cout << "This is the second Person constructor" << endl;

	this->emp_no = no;
	this->firstname = fname;
	this->lastname = lname;
	this->pos_title = title;
	this->birthdate = birthdate;
	this->hiredate = hiredate;
	this->gender = gender;

}


Person::~Person() {
	cout << "This is the Person destructor" << endl;
}

//	setEmp_no(int no) { this->emp_no = no; }
//	setFirstname(string fname) { this->firstname = fname; }
//	setLastname(string lname){ this->lastname = lname; }
//	setTitle(string title) { this->pos_title = title; }
//	setBirthdate(time_t birthdate) { this->birthdate = birthdate; }
//	setHiredate(time_t hiredate) { this->hiredate = hiredate; }
//	setGender(char gender) { this->gender = gender; }


void Person::setEmp_no(string no) {
	cout << "Number " << no << " has been set" << endl;
}

// Don't need this implimentation'

string Person::getEmp_no(string no) {
	cout << "You're getting number " << no << endl;

	return no;
}

