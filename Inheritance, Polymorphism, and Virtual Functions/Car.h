#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int doors;

public:
    Car(const std::string& manufacturer, int yearBuilt, int doors);
    void setDoors(int doors);
    int getDoors() const;
    void displayInfo() const override;
};

#endif
