
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

Date::Date() {
	this->day = 0;
	this->month = 0;
	this->year = 0;
}

Date::Date(int x,int y, int z) {
	this->day = x;
	this->month = y;
	this->year = z;

}

Date::~Date() {
	cout << "Object of type Date was deleted \n";
}

void Date::print() {
	cout << this->month << "/" << this->day << "/" << this->year << endl;
}

void Date::setday(int x) {
	this->day = x;
}
void Date::setmonth(int y) {
	this->month = y;
}
void Date::setyear(int z) {
	this->year = z;
}
int Date::getday() {
	return this->day;
}
int Date::getmonth() {
	return this->month;
}
int Date::getyear() {
	return this->year;
}
void Date::operator= (const Date& that) {
	this->day = that.day;
	this->month = that.month;
	this->year = that.year;
}