/*
 * employee.h
 *
 *  Created on: Jun 10, 2020
 *      Author: kevin
 */
#include <iostream>
#include <sstream>
#include <ctime>


using namespace std;

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Person {
private:

	int emp_no = 0;
	string firstname = "";
	string lastname = "";
	string pos_title = "";
	time_t birthdate;
	time_t hiredate;
	char gender;

public:
	Person();

	void setEmp_no(int no) { this->emp_no = no; }
	void setFirstname(string fname) { this->firstname = fname; }
	void setLastname(string lname){ this->lastname = lname; }
	void setTitle(string title) { this->pos_title = title; }
	void setBirthdate(time_t birthdate) { this->birthdate = birthdate; }
	void setHiredate(time_t hiredate) { this->hiredate = hiredate; }
	void setGender(char gender) { this->gender = gender; }

	string getEmp_no(int emp_number);

	~Person();
};

class Empsalary: public Person {
private:
	double long salary;
	time_t from_date;
	time_t to_date;

public:
	void setSalary();
	void setFromdate();
	void setTodate();

};

#endif /* EMPLOYEE_H_ */
