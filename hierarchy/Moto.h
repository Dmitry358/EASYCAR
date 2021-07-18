#ifndef MOTO_H
#define MOTO_H

#include"Vehicle.h"

class Moto: public Vehicle{
private:
    bool glass;
    bool pedal;
    bool engineProtection;

public:
    Moto(string, string, unsigned int, unsigned int, float, string,
         string, Fuel, bool, unsigned int, unsigned int, float, float, bool, bool, bool);
    ~Moto() ;

    bool untrained();
    float tax();
    virtual unsigned int emissionClass() const;
    virtual bool isNoviceDriver() const;
    virtual double carTax() const;

    bool getGlass() const;
    bool getPedal() const;
    bool getEngineProtection() const;
};

#endif
