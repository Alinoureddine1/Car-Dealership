#include "dataManager.h"
#include <iostream>
using namespace std;






dataManager::dataManager() {
	 this->newcarsnb=0;
	 this->usedcarnb=0;
     this->salesnb=0;
	 this->contracts=0;

	 for (int i = 0; i < 50; i++) {
		 this->newcarArray[i] = nullptr;
	 }
	 for (int i = 0; i < 200; i++) {
		 this->usedcarArray[i] = nullptr;
	 }
	 for (int i = 0; i < 10; i++) {
		 this->salespersonArray[i] = nullptr;
	 }
	 for (int i = 0; i < 100; i++) {
		 this->pcontractArray[i] = nullptr;
	 }

}
bool dataManager::insertSalesPerson(SalesPerson* that) {

	//check if the salesperson exists
	for (int i = 0; i < (this->salesnb + 1); i++) {
		if (this->salespersonArray[i] == nullptr) {
			continue;
		}
		if (this->salespersonArray[i]->getname() == that->getname()) {
			cout << "This Sales Person already exists\n";
			return false;
		}
	}

	//Adding the Sales Person
	if (salesnb < 10) {
		this->salespersonArray[salesnb] = that;
		salesnb++;
		cout << "Sales Person was added successfully" << endl;
		return true;
	}
	else {
		cout << "Error!! Sales Person array is full\n";
		return false;
	}

}

bool dataManager::insertNewCar(NewCar* that) {

	//check if the car exists
	for (int i = 0; i < newcarsnb + 1; i++) {
		if (this->newcarArray[i] == nullptr) {
			continue;
		}
		if (this->newcarArray[i]->Car::getid() == that->Car::getid()) {
			cout << "This Car already exists\n";
			return false;
		}
	}
	if (newcarsnb < 50) {
		//Adding the Car
		this->newcarArray[newcarsnb] = that;
		newcarsnb++;
		cout << "New Car was added successfully" << endl;
		return true;
	}
	else {
		cout << "Error!! New Cars array is full\n";
		return false;
	}
}

bool dataManager::insertUsedCar(UsedCar* that) {

	//check if the car exists
	for (int i = 0; i < usedcarnb + 1; i++) {
		if (this->usedcarArray[i] == nullptr) {
			continue;
		}
		if (this->usedcarArray[i]->Car::getid() == that->Car::getid()) {
			cout << "This Car already exists\n";
			return false;
		}
	}
	if (usedcarnb < 200) {
		//Adding the Car
		this->usedcarArray[usedcarnb] = that;
		usedcarnb++;
		cout << "Used Car was added successfully" << endl;
		return true;
	}
	else {
		cout << "Error!! Used Cars array is full\n";
		return false;
	}
}

bool dataManager::insertPurchaseContract(PurchaseContract* that) {

	//check if the contract exists
	for (int i = 0; i < contracts + 1; i++) {
		if (this->pcontractArray[i] == nullptr) {
			continue;
		}
		if (this->pcontractArray[i]->isequal(that)) {
			cout << "This Contract already exists\n";
			return false;
		}
	}
	if (contracts < 100) {
		//Adding the Contract
		this->pcontractArray[contracts] = that;
		contracts++;
		cout << "Contract was added successfully" << endl;
		return true;
	}
	else {
		cout << "Error!! Contracts array is full\n";
		return false;
	}
}

bool dataManager::checkavailability(NewCar& that) {
	cout << "------------------------------------------------------------" << endl;
	for (int i = 0; i < newcarsnb+1; i++) {
		if (newcarArray[i] == nullptr) {
			continue;
		}
		if (this->newcarArray[i]->getcolor() == that.getcolor() && this->newcarArray[i]->getmodel_year() == that.getmodel_year()) {
			cout << "Car with Color " << that.getcolor() << " Model year: " << that.getmodel_year() << " is available\n";
			
			return true;
		
		}
	
	}
	cout << "Car with Color " << that.getcolor() << " Model year: " << that.getmodel_year() << " is not available\n";
	return false;
} 

bool dataManager::checkavailability(UsedCar& that) { 
	cout << "------------------------------------------------------------" << endl;
	for (int i = 0; i < usedcarnb + 1; i++) {
		if (usedcarArray[i] == nullptr) {
			continue;
		}
		if (this->usedcarArray[i]->getcolor() == that.getcolor() && this->usedcarArray[i]->getmodel_year() == that.getmodel_year()) {
			cout << "Car with Color " << that.getcolor() << " Model year " << that.getmodel_year() << " is available\n";
			
			return true;

		}

	}
	cout << "Car with Color " << that.getcolor() << " Model year: " << that.getmodel_year() << " is not available\n";
	return false;
}

void dataManager::printAge(int age) {
	bool res = false;
	cout << "------------------------------------------------------------" << endl;
	cout << "Cars under the age of " << age << " :\n\n";
	for (int i = 0; i < usedcarnb + 1; i++) {
		if (usedcarArray[i] == nullptr) {
			continue;
		}
		if ((2022 - this->usedcarArray[i]->getmodel_year()) < age) {
			this->usedcarArray[i]->print();
			cout << endl;
			res = true;
		}

	}
	if (!res) {
		cout << "No Used Cars fit the mentioned Age range\n ";

	};
}

void dataManager::printMilage(int miles) {
	bool res = false;
	cout << "------------------------------------------------------------" << endl;
	cout << "Cars under " << miles << " miles:\n\n";
	for (int i = 0; i < usedcarnb + 1; i++) {
		if (usedcarArray[i] == nullptr) {
			continue;
		}
		if ( this->usedcarArray[i]->getmilage() < miles) {
			this->usedcarArray[i]->print();
			cout << endl;
			res = true;
		}

	}
	if (!res) {
		cout << "No Used Cars under the mentioned milage \n ";

	};
}

void dataManager::print() {
	cout << "------------------------------------------------------------" << endl;
	cout << "Inventory of new Cars: \n\n";
	for (int i = 0; i < newcarsnb + 1; i++) {
		if (this->newcarArray[i] == nullptr) {
			continue;
		}
		this->newcarArray[i]->print();
		cout << endl;
	};
	cout << "------------------------------------------------------------" << endl;
	cout << "Inventory of used Cars: \n\n";
	for (int i = 0; i < usedcarnb + 1; i++) {
		if (this->usedcarArray[i] == nullptr) {
			continue;
		}
		this->usedcarArray[i]->print();
		cout << endl;
	};
	cout << "------------------------------------------------------------" << endl;
	cout << "Purchase contracts: \n\n";
	for (int i = 0; i < contracts + 1; i++) {
		if (this->pcontractArray[i] == nullptr) {
			continue;
		}
		this->pcontractArray[i]->Print();
		cout << endl;
	};
	cout << "------------------------------------------------------------" << endl;

}


dataManager::~dataManager() {
	for (int i = 0; i < 50; i++) {
		delete this->newcarArray[i];
	}
	for (int i = 0; i < 200; i++) {
		delete this->usedcarArray[i];
	}
	for (int i = 0; i < 10; i++) {
		delete this->salespersonArray[i];
	}
	for (int i = 0; i < 100; i++) {
		delete this->pcontractArray[i];
	}
	cout << "Object of type Data Manager was deleted\n";
}
