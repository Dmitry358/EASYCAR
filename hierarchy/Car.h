#ifndef CAR_H
#define CAR_H

#include"Auto.h"

class Car: public Auto{
private:
    bool stWagon;
    bool sunroof;
    bool luggagerack;

public:
    Car(string, string, unsigned int, unsigned int, float, string, string, Fuel, bool, unsigned int, unsigned int,
        float, float, bool, unsigned int, bool, bool ,bool, bool, bool);
    ~Car();

    bool untrained();
    float tax() ;
    virtual unsigned int emissionClass() const;
    virtual bool isNoviceDriver() const;
    virtual double carTax() const;

    bool getStWagon() const;
    bool getSunroof() const;
    bool getLuggagerack() const;
};

#endif
