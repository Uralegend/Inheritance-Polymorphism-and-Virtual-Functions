#include "Vehicle.h"

Vehicle::Vehicle(const std::string& manufacturer, int yearBuilt) :
    manufacturer(manufacturer), yearBuilt(yearBuilt) {}

void Vehicle::setManufacturer(const std::string& manufacturer) {
    this->manufacturer = manufacturer;
}

std::string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::displayInfo() const {
    std::cout << "Manufacturer: " << manufacturer << std::endl;
    std::cout << "Year Built: " << yearBuilt << std::endl;
}
