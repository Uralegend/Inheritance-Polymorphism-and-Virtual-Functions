#include <iostream>
#include "Car.h"
#include "Truck.h"

int main() {
    // Vehicle test
    std::string manufacturer;
    int year, doors, capacity;

    std::cout << "Enter manufacturer and year built for Vehicle: ";
    std::cin >> manufacturer >> year;
    Vehicle vehicle(manufacturer, year);
    vehicle.displayInfo();

    // Car test
    std::cout << "Enter manufacturer, year built and number of doors for Car: ";
    std::cin >> manufacturer >> year >> doors;
    Car car(manufacturer, year, doors);
    car.displayInfo();

    // Truck test
    std::cout << "Enter manufacturer, year built and towing capacity for Truck: ";
    std::cin >> manufacturer >> year >> capacity;
    Truck truck(manufacturer, year, capacity);
    truck.displayInfo();

    return 0;
}
