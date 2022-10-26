#pragma once
#include <iostream>
#include <string>

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int);
	~Date();
	void setday(int);
	void setmonth(int);
	void setyear(int);
	int getday();
	int getmonth();
	int getyear();
	void print();
	void operator= (const Date&);
};
