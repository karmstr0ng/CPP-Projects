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
	Person(int no, string fname, string lname, string title, time_t birthday, time_t hiredate, char gender);

	void setEmp_no(int no);
	void setFirstname(string fname);
	void setLastname(string lname);
	void setTitle(string title);
	void setBirthdate(time_t birthdate);
	void setHiredate(time_t hiredate);
	void setGender(char gender);
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
