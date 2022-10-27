#include "UsedCar.h"
#include <iostream>
#include <string>
using namespace std;

UsedCar::UsedCar() :NewCar() {
	this->manifacturer = "";
	this->milage = 0;
}
UsedCar::UsedCar(int id, int year, std::string color, int doors, double prix, std::string manifac , int miles) :NewCar( id, year, color, doors, prix) {
	this->manifacturer = manifac;
	this->milage = miles;
}
UsedCar::UsedCar(int miles, std::string colr) :NewCar( miles, colr) {

}
void UsedCar::print() {
	NewCar::print();
	cout <<"Manifacturer: "<< this->manifacturer << endl;
	cout << "Milage: " << this->milage << " miles" << endl;
}
void UsedCar::setmanifacturer(std::string manifac) {
	this->manifacturer = manifac;
}
void UsedCar::setmilage(int miles) {
	this->milage = miles;
}
std::string UsedCar::getmanifacturer() {
	return this->manifacturer;
}
int UsedCar::getmilage() {
	return this->milage;
}


UsedCar::~UsedCar() {
	cout << "Object of type UsedCard was deleted" << endl;
}