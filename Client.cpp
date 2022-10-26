#include "Client.h"
#include <iostream>
using namespace std;

Client::Client():Person() {
	this->driving_license = "";
	this->type_of_car = "";
}

Client::Client(std::string name, Date bday, std::string license, std::string type) :Person(name,bday) {
	this->driving_license = license;
	this->type_of_car = type;
}

void Client::print() {
	Person::Print();
	cout << "Driving license: " << this->driving_license << endl;
	cout << "Type of car that the client is asking for: " << this->type_of_car << endl;
}

std::string Client::getdlicense() {
	return this->driving_license;
}

std::string Client::getcartype() {
	return this->type_of_car;
}

void Client::setdlicense(std::string license) {
	this->driving_license = license;
}

void Client::setcartype(std::string type) {
	this->type_of_car = type;
}
Client::~Client() {
	cout << "Object of type Client was deleted" << endl;
}