#pragma once
#include "NewCar.h"
#include "UsedCar.h"
#include "SalesPerson.h"
#include"Date.h"
#include "PurchaseContract.h"


class dataManager
{

private:
	NewCar* newcarArray[50];
	UsedCar* usedcarArray[200];
	SalesPerson* salespersonArray[10];
	PurchaseContract* pcontractArray[100];
	int newcarsnb;
	int usedcarnb;
	int salesnb;
	int contracts;

public:
	dataManager();
	bool insertSalesPerson(SalesPerson*);
	bool insertNewCar(NewCar*);
	bool insertUsedCar(UsedCar*);
	bool insertPurchaseContract(PurchaseContract*);
	bool checkavailability(NewCar&);
	bool checkavailability(UsedCar&);
	void printAge(int);
	void printMilage(int);
	void print();
	~dataManager();


};

