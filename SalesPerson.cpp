#include "SalesPerson.h"
#include <iostream>
using namespace std;

SalesPerson::SalesPerson():Person() {
	this->salary = 0.0;
}

SalesPerson::SalesPerson(std::string name, Date bday, double sal, Date hire):Person(name,bday) {
	this->date_of_hire = hire;
	this->salary = sal;
}

void SalesPerson::print() {
	Person::Print();
	cout << "Date hired ";
	this->date_of_hire.print();
	cout << "Salary: $" << this->salary;
	cout << endl;
}

void SalesPerson::setsalary(double sal) {
	this->salary = sal;
}

void SalesPerson::sethiredate(Date hire) {
	this->date_of_hire = hire;
}

void SalesPerson::sethiredate(int day, int month, int year) {
	this->date_of_hire = Date(day, month, year);
}

double SalesPerson::getsalary() {
	return this->salary;
}

Date SalesPerson::gethiredate() {
	return this->date_of_hire;
}

SalesPerson::~SalesPerson() {
	cout << "Object of type SalesPerson was deleted" << endl;
}