#include "Person.h"
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() {
	this->name = "";
}
Person::Person(std::string nm, Date that) {
	this->name = nm;
}

void Person::Print() {
	std::cout << "Name: " << this->name << endl;
	cout << "Date of birth: ";
	this->date_of_birth.print();
}
std::string Person::getname() {
	return this->name;
}

Date Person::getdbirth() {
	return this->date_of_birth;
}

void Person::setname(std::string that) {
	this->name = that;

}
void Person::setdbirth(int day, int month, int year) {
	this->date_of_birth = Date(day, month, year);
}

void Person::setdbirth(Date that) {
	this->date_of_birth = that;
}

Person::~Person() {
	std::cout << "Object of type Person was deleted\n";
}