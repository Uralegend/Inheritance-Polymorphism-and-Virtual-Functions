#include "Car.h"

Car::Car(const std::string& manufacturer, int yearBuilt, int doors) :
    Vehicle(manufacturer, yearBuilt), doors(doors) {}

void Car::setDoors(int doors) {
    this->doors = doors;
}

int Car::getDoors() const {
    return doors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    std::cout << "Doors: " << doors << std::endl;
}
