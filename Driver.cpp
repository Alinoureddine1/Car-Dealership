
#include <iostream>
#include "Car.h"
#include "Date.h"
#include "NewCar.h"
#include "UsedCar.h"
using namespace std;
int main()
{
    NewCar car(122, 2012, "Pink", 2, 2300);
    car.print();


    return 0;
}

