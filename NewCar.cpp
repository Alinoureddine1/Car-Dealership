#include "NewCar.h"
#include <iostream>
#include <string>
using namespace std;




NewCar::NewCar():Car() {
	this->model_year =0;
	this->color ="";
	this->no_of_doors=0;
	this->price=0.0;
}

NewCar::NewCar(int id, int year, std::string color, int doors, double prix):Car(id) {
	this->model_year = year;
	this->color = color;
	this->no_of_doors = doors;
	this->price = prix;
}

void NewCar::print() {
	Car::print();
	cout << "Model Year: " << this->model_year << endl;
	cout << "Color: " << this->color << endl;
	cout << "Number of doors: " << this->no_of_doors << endl;
	cout << "Price : $" << this->price << endl;
}

void NewCar::setmodel_year(int year){
	this->model_year = year;
}

void NewCar::setcolor(std::string color) {
	this->color = color;
}

void NewCar::setno_of_doors(int doors) {
	this->no_of_doors = doors;
}

void NewCar::setprice(double prix) {
	this->price = prix;
}

int NewCar::getmodel_year() {
	return this->model_year;
}

std::string NewCar::getcolor() {
	return this->color;
}

int NewCar::getno_of_doors() {
	return this->no_of_doors;
}

double NewCar::getprice() {
	return this->price;
}

NewCar::~NewCar() {
	cout << "Object of type NewCar was deleted" << endl;
}
