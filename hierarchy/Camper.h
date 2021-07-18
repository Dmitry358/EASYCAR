#ifndef CAMPER_H
#define CAMPER_H

#include"Auto.h"

class Camper: public Auto{
private:
    unsigned int sleepingPlaces;
    bool toilet;
    bool kitchen;

public:
    Camper(string, string, unsigned int, unsigned int, float,  string, string, Fuel, bool, unsigned int,
           unsigned int,float, float, bool, unsigned int, bool, bool, unsigned int, bool, bool);

    ~Camper();

    bool untrained() ;
    float tax() ;
    virtual unsigned int emissionClass() const;
    virtual bool isNoviceDriver() const;
    virtual double carTax() const;

    unsigned int getSleepingPlaces() const;
    bool getToilet() const;
    bool getKitchen() const;
};

#endif
