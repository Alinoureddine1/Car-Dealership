#pragma once
#include "Person.h"
#include <string>

class Client:public Person
{
private:
	std::string driving_license;
	std::string type_of_car;

public:
	Client();
	Client(std::string, Date, std::string, std::string);
	~Client();
	void print();
	std::string getdlicense();
	std::string getcartype();
	void setdlicense(std::string);
	void setcartype(std::string);

};

