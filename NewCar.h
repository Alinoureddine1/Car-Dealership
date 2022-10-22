#pragma once
#include "Car.h"
#include <iostream>
#include <string>

class NewCar : public Car
{

private:
	int model_year;
	std::string color;
	int no_of_doors;
	double price;
public:
	NewCar();
	NewCar(int, int, std::string, int, double);
	void print();
	void setmodel_year(int);
	void setcolor(std::string);
	void setno_of_doors(int);
	void setprice(double);
	int getmodel_year();
	std::string getcolor();
	int getno_of_doors();
	double getprice();
	~NewCar();
};
	
