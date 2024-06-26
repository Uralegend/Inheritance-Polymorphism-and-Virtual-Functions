// Brenton Graham
// CIS 1202 501
// April 16, 2024
#include <iostream>
#include "Car.h"
#include "Truck.h"
using namespace std;
int main() {
    // Vehicle test
    std::string manufacturer;
    int year, doors, capacity;
    // You have to put a "-" between multiple word companies so the program knows. Like General-Motors 
    std::cout << "Enter manufacturer and year built for Vehicle: ";
    std::cin >> manufacturer >> year;
    Vehicle vehicle(manufacturer, year);
    std::cout << endl;
    std::cout << "Manufacturer details:";
    std::cout << endl;
    vehicle.displayInfo();

    // Car test
    std::cout << endl;
    std::cout << "Enter manufacturer, year built and number of doors for Car: ";
    std::cin >> manufacturer >> year >> doors;
    Car car(manufacturer, year, doors);
    std::cout << endl;
    std::cout << "Manufacturer details:";
    std::cout << endl;
    car.displayInfo();

    // Truck test
    std::cout << endl;
    std::cout << "Enter manufacturer, year built and towing capacity for Truck: ";
    std::cin >> manufacturer >> year >> capacity;
    Truck truck(manufacturer, year, capacity);
    std::cout << endl;
    std::cout << "Manufacturer details:";
    std::cout << endl;
    truck.displayInfo();

    return 0;
}
