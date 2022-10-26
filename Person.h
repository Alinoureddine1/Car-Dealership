#pragma once
#include <string>
#include <iostream>
#include "Date.h"
class Person
{
private:
	std::string name;
	Date date_of_birth;
public:
	Person();
	Person(std::string,Date);
	void Print();
	std::string getname();
	Date getdbirth();
	void setname(std::string);
	void setdbirth(int, int, int);
	void setdbirth(Date);
	~Person();




};

