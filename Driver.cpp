
#include <iostream>
#include "Car.h"
#include "Date.h"
#include "NewCar.h"
#include "UsedCar.h"
#include "SalesPerson.h"
#include "Client.h"
#include "dataManager.h"
#include "PurchaseContract.h"
using namespace std;
int main()
{
   
    dataManager* datamanager = new dataManager();;

    //creating new cars
    NewCar* newcars[10];
    newcars[0] = new NewCar(13,2012,"black",2,14000);//
    newcars[1] = new NewCar(17, 2020, "yellow", 4, 24000);
    newcars[2] = new NewCar(20, 2001, "black", 1, 7000);
    newcars[3] = new NewCar(23, 2003, "green", 1, 2000);
    newcars[4] = new NewCar(16, 2014, "silver", 2, 10000);
    newcars[5] = new NewCar(14, 2016, "red", 2, 29000);
    newcars[6] = new NewCar(8, 2018, "white", 1, 25000);
    newcars[7] = new NewCar(25, 2012, "violet", 2, 32000);
    newcars[8] = new NewCar(34, 2013, "pink", 1, 15000);
    newcars[9] = new NewCar(12, 2002, "blue", 2, 7000);

    //creating used cars
    UsedCar* usedcar[10];
    usedcar[0] = new UsedCar(100, 2012, "black", 2, 12000,"BMW",40000);
    usedcar[1] = new UsedCar(120, 2020, "yellow", 4, 8500,"Audi",26000);
    usedcar[2] = new UsedCar(110, 2018, "black", 1, 7000,"Tesla", 24000);
    usedcar[3] = new UsedCar(123, 2003, "green", 1, 2000,"Honda",200000);
    usedcar[4] = new UsedCar(113, 2014, "silver", 2, 10000,"toyota",12000);
    usedcar[5] = new UsedCar(154, 2020, "red", 2, 300000,"Pagani",2000);
    usedcar[6] = new UsedCar(187, 2018, "white", 1, 25000,"renault",20000);
    usedcar[7] = new UsedCar(156, 2012, "violet", 2, 32000,"Lotus",200000);
    usedcar[8] = new UsedCar(132, 2013, "pink", 1, 15000,"BMW",25000);
    usedcar[9] = new UsedCar(412, 2012, "blue", 2, 7000,"Ferrari",105000);

    //Creating birth days
    Date* bdays[8];
    bdays[0] = new Date(13, 2, 2001);
    bdays[1] = new Date(25, 10, 1995);
    bdays[2] = new Date(7, 7, 2004);
    bdays[3] = new Date(13, 3, 2002);
    bdays[4] = new Date(13, 4, 1992);
    bdays[5] = new Date(26, 12, 2005);
    bdays[6] = new Date(13, 1, 1990);
    bdays[7] = new Date(21, 4, 2003);

    //Creating dates for car purchases
    Date* dates[5];
    dates[0] = new Date(13, 2, 2019);
    dates[1] = new Date(25, 10, 2021);
    dates[2] = new Date(7, 4, 2020);
    dates[3] = new Date(13, 3, 2018);
    dates[4] = new Date(13, 2, 2016);

    //creating hiring dates
    Date* hires[3];
    hires[0] = new Date(12, 12, 2012);
    hires[1] = new Date(25, 12, 2012);
    hires[2] = new Date(1, 4, 2018);

    //Creating clients
    Client* clients[5];
    clients[0] = new Client("mike",*bdays[0],"Class G","new");
    clients[1] = new Client("jake",*bdays[1],"Class G","new");
    clients[2] = new Client("kevin", *bdays[6], "Class G","used");
    clients[3] = new Client("smith", *bdays[4], "Class G", "new");
    clients[4] = new Client("edgar", *bdays[2], "Class G", "used");

    //Creating sales persons
    SalesPerson* sales[3];
    sales[0] = new SalesPerson("sami",*bdays[7],40000, *hires[0]);
    sales[1] = new SalesPerson("kyle",*bdays[5],30000,*hires[1]);
    sales[2] = new SalesPerson("ellie", *bdays[3], 30000, *hires[2]);

    
    //Creating purchase contracts
    PurchaseContract* contracts[5];
    contracts[0] = new PurchaseContract(*clients[0],*sales[0],*newcars[0],*dates[3]);
    contracts[1] = new PurchaseContract(*clients[1], *sales[1], *newcars[2], *dates[4]);
    contracts[2] = new PurchaseContract(*clients[2], *sales[0], *usedcar[5], *dates[1]);
    contracts[3] = new PurchaseContract(*clients[3], *sales[2], *newcars[6], *dates[2]);
    contracts[4] = new PurchaseContract(*clients[4], *sales[0], *usedcar[2], *dates[0]);


    //inseting the employees to the data manager
    datamanager->insertSalesPerson(sales[0]);
    datamanager->insertSalesPerson(sales[1]);
    datamanager->insertSalesPerson(sales[2]);
    datamanager->insertSalesPerson(sales[2]); //trying to insert the same employee twice
    
    //inserting the contracts to the data manager
    datamanager->insertPurchaseContract(contracts[0]);
    datamanager->insertPurchaseContract(contracts[1]);
    datamanager->insertPurchaseContract(contracts[2]);
    datamanager->insertPurchaseContract(contracts[3]);
    datamanager->insertPurchaseContract(contracts[4]);


    //Inserting the new cars
    datamanager->insertNewCar(newcars[1]);
    datamanager->insertNewCar(newcars[3]);
    datamanager->insertNewCar(newcars[4]);
    datamanager->insertNewCar(newcars[5]);
    datamanager->insertNewCar(newcars[7]);
    datamanager->insertNewCar(newcars[8]);
    datamanager->insertNewCar(newcars[9]);
    

    //Inserting the used cars
    datamanager->insertUsedCar(usedcar[0]);
    datamanager->insertUsedCar(usedcar[1]);
    datamanager->insertUsedCar(usedcar[3]);
    datamanager->insertUsedCar(usedcar[4]);
    datamanager->insertUsedCar(usedcar[6]);
    datamanager->insertUsedCar(usedcar[7]);
    datamanager->insertUsedCar(usedcar[8]);
    datamanager->insertUsedCar(usedcar[9]);

   
   
    
    //tests to check availability 
    NewCar* test1 = new NewCar(2012, "violet");
    NewCar* test2 = new NewCar(2022, "black"); // shouldnt exist
    UsedCar* test3 = new UsedCar(2013, "pink");
    UsedCar* test4 = new UsedCar(2021, "yellow"); //shouldnt exist

    //Testing the availability function
    datamanager->checkavailability(*test1);
    datamanager->checkavailability(*test2);
    datamanager->checkavailability(*test3);
    datamanager->checkavailability(*test4);

    //testing the print under certain age 
    datamanager->printAge(10);

    //testing the print under certain milage
    datamanager->printMilage(40000);

    //printing the inventory as well as the purchase contracts
    datamanager->print();



    //Deleting objects of all types

    for (int i = 0; i < 10; i++) {
        delete newcars[i];
        delete usedcar[i];
    }
    for (int i = 0; i < 8; i++) {
        delete bdays[i];
       
    }
    
    delete sales[0];
    delete sales[1];
    delete sales[2];
    delete hires[0];
    delete hires[1];
    delete hires[2];

    for (int i = 0; i < 5; i++) {
        delete dates[i];
        delete clients[i];
        delete contracts[i];

    }
    delete datamanager;

    return 0;
}

