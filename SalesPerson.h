#pragma once
#include "Person.h"
#include "Date.h"
class SalesPerson:public Person
{
private:
	double salary;
	Date date_of_hire;
public:
	SalesPerson();
	SalesPerson(std::string, Date, double, Date);
	void print();
	void setsalary(double);
	void sethiredate(Date);
	void sethiredate(int,int,int);
	double getsalary();
	Date gethiredate();
	~SalesPerson();

};

