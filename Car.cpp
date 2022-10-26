#include "Car.h"
#include <iostream>
#include <string>
using namespace std;


Car::Car(){
	unique_id = 0;
}

Car::Car(int x) {
	unique_id = x;
}

Car::~Car() {
	cout << "Object of type Car was deleted\n";
}

void Car::setid(int x) {
	this->unique_id = x;
}

int Car::getid() {
	return this->unique_id;
}

void Car::print() {
	cout << "ID: " << getid() << endl;
}