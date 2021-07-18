#ifndef TRUCK_H
#define TRUCK_H

#include"Vehicle.h"

class Truck: public Vehicle{
private:
    bool sleepingPlace;
    bool superWeight;
    bool dangerousGood;

public:
    Truck(string, string, unsigned int, unsigned int, float, string,
          string, Fuel, bool, unsigned int, unsigned int, float, float, bool, bool, bool);
    virtual ~Truck();

    float tax();
    virtual unsigned int emissionClass() const;
    virtual bool isNoviceDriver() const;
    virtual double carTax() const;

    bool getSleepingPlace() const;
    bool getSuperWeight() const;
    bool getDangerousGood() const;
};

#endif
