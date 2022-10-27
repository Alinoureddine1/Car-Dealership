#include "PurchaseContract.h"
#include <iostream>
using namespace std;

PurchaseContract::PurchaseContract() {
	this->client = new Client();
	this->salesperson = new SalesPerson();
	this->newcar = new NewCar();
	this->usedcar = new UsedCar();

}

PurchaseContract::PurchaseContract(const Client& cl, const SalesPerson& sales, const NewCar& car, Date date) {
	this->client = new Client(cl);
	this->salesperson = new SalesPerson(sales);
	this->newcar = new NewCar(car);
	this->usedcar = NULL;
	this->date_of_purchase = date;

}

PurchaseContract::PurchaseContract(const Client& cl, const SalesPerson& sales, const UsedCar& car, Date date) {
	this->client = new Client(cl);
	this->salesperson = new SalesPerson(sales);
	this->usedcar = new UsedCar(car);
	this->newcar = NULL;
	this->date_of_purchase = date;
}

void PurchaseContract::Print() {
	cout << "Client details: \n";
	this->client->Print();
	cout << "Sales Person details: \n";
	this->salesperson->print();
	if (this->newcar == NULL) {
		cout << "Car type: Used\n";
	}
	else {
		cout << "Car type: New\n";
	}
	cout << "Date of Purchase: ";
	this->date_of_purchase.print();
}

void PurchaseContract::setclient(const Client& cl) {
	delete this->client ;
	this->client = new Client(cl);
}

void PurchaseContract::setsalesperson(const SalesPerson& sales) {
	delete this->salesperson;
	this->salesperson = new SalesPerson(sales);
}

void PurchaseContract::setcar(const NewCar& car) {
	delete this->newcar;
	this->newcar = new NewCar(car);
}

void PurchaseContract::setcar(const UsedCar& car) {
	delete this->usedcar;
	this->usedcar = new UsedCar(car);
}

void PurchaseContract::setdate(Date that) {
	this->date_of_purchase = that;
}

bool PurchaseContract::isequal(PurchaseContract* that) {
	if (this->client->getname() == that->client->getname() && this->salesperson->getname() == that->salesperson->getname()) { return true; }
	return false;
}

Client* PurchaseContract::getclient() {
	return this->client;
}

SalesPerson* PurchaseContract::getsalesperson() {
	return this->salesperson;
}

NewCar* PurchaseContract::getnewcar() {
	return this->newcar;
}

UsedCar* PurchaseContract::getusedcar() {
	return this->usedcar;
}

Date PurchaseContract::getdate() {
	return this->date_of_purchase;
}

PurchaseContract::~PurchaseContract() {
	delete this->client;
	delete this->newcar;
	delete this->usedcar;
	delete this->salesperson;
	cout << "Object of type Purchase Contract was deleted\n";
}