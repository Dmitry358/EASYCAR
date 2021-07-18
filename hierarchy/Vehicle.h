#ifndef VEHICLE_H
#define VEHICLE_H

#include"Fuel.h"
#include<string>

using std::string;

class Vehicle{
private:
    string make;
    string model;
    unsigned int year; //unsigned short??
    unsigned int mileage;
    float price;
    string description;
    string photo;

    Fuel fuel;
    bool transmission; // manual==true; automatic==false;
    unsigned int power;
    unsigned int weight;
    float NOx;
    float PM;

public:
    Vehicle(string, string, unsigned int, unsigned int, float,  string,
            string, Fuel, bool, unsigned int, unsigned int,float, float);

    virtual ~Vehicle();
    virtual unsigned int emissionClass() const=0;
    virtual bool isNoviceDriver() const=0;
    virtual double carTax() const=0;

    bool untrained() const;
    float tax() const;//????


    string getMake() const;
    string getModel() const;
    unsigned int getYear() const;
    unsigned int getMileage() const;
    float getPrice() const;
    Fuel getFuel() const;
    bool getTransmission() const;
    unsigned int getPower() const;
    unsigned int getWeight() const;
    string getDescription() const;
    string getPhoto() const;
    float getNOx() const;
    float getPM() const;

};

#endif
