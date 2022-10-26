#pragma once
#include "Car.h"
#include "NewCar.h"
#include <iostream>
#include <string>
class UsedCar:public NewCar
{
private:
	std::string manifacturer;
	int milage;

public:
	UsedCar();
	UsedCar(int, int, std::string, int, double, std::string, int);
	void print();
	void setmanifacturer(std::string);
	void setmilage(int);
	std::string getmanifacturer();
	int getmilage();
    ~UsedCar();

};    

