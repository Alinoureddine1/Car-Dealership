#pragma once
#include <iostream>
#include <string>

class Car
{
private:
	int unique_id;

public:
	Car();
	Car(int);
	~Car();
	void setid(int);
	int getid();
	void print();
 

};

