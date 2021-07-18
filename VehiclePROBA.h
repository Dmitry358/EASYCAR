#ifndef VEHICLEPROBA_H
#define VEHICLEPROBA_H
#include<string>

using std::string;

class VehiclePROBA{
public:
    string make;
    string model;
    string year;
    string mileage;
    string price;
    VehiclePROBA(string _make, string _model, string _year,string _mileage,string _price):
        make(_make), model(_model), year(_year), mileage(_mileage), price(_price){}

    string getMake(){ return make;}
};

#endif // VEHICLEPROBA_H
