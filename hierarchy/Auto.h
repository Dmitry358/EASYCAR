#ifndef AUTO_H
#define AUTO_H

#include"Vehicle.h"

class Auto: public Vehicle{
private:
    bool conditioner;
    unsigned int passengerNum;
    bool pintleHook;
    bool sensors;

public:
    Auto(string, string, unsigned int, unsigned int, float, string,
         string, Fuel, bool, unsigned int, unsigned int, float, float, bool, unsigned int, bool, bool);

    ~Auto();

    bool getConditioner() const;
    unsigned int getPassengerNum() const;
    bool getPintleHook() const;
    bool getSensors() const;
};

#endif // AUTO_H
