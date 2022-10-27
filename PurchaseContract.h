#pragma once
#include "Client.h"
#include "SalesPerson.h"
#include "NewCar.h"
#include "UsedCar.h"
#include "Date.h"


class PurchaseContract
{
private:
	Client* client;
	SalesPerson* salesperson;
	NewCar* newcar;
	UsedCar* usedcar;
	Date date_of_purchase;

public:
	PurchaseContract();
	PurchaseContract(const Client&, const SalesPerson&, const NewCar&,Date );
	PurchaseContract(const Client&, const  SalesPerson&, const  UsedCar&, Date);
	void Print();
	void setclient(const Client&);
	void setsalesperson(const SalesPerson&);
	void setcar(const NewCar&);
	void setcar(const UsedCar&);
	void setdate(Date);
	Client* getclient();
	SalesPerson* getsalesperson();
	NewCar* getnewcar();
	UsedCar* getusedcar();
	Date getdate();
	bool isequal(PurchaseContract*);
	~PurchaseContract();
};


