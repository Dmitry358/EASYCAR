#include"Vehicle.h"

Vehicle::Vehicle(string _make, string _model, unsigned int _year, unsigned int _mileage, float _price,
                 string _description, string _photo, Fuel _fuel, bool _transmission, unsigned int _power,
                 unsigned int _weight, float _NOx, float _PM):

         make(_make),
         model(_model),
         year(_year),
         mileage(_mileage),
         price(_price),
         description(_description),
         photo(_photo),
         fuel(_fuel),
         transmission(_transmission),
         power(_power),
         weight(_weight),
         NOx(_NOx),
         PM(_PM)
{}

Vehicle::~Vehicle(){};

string Vehicle::getMake() const { return make; }
string Vehicle::getModel() const { return model; }
unsigned int Vehicle::getYear() const { return year; }
unsigned int Vehicle::getMileage() const { return mileage; }
float Vehicle::getPrice() const { return price; }
Fuel Vehicle::getFuel() const { return fuel; }
bool Vehicle::getTransmission() const { return transmission; }
unsigned int Vehicle::getPower() const { return power; }
unsigned int Vehicle::getWeight() const { return weight; }
string Vehicle::getDescription() const { return description; }
string Vehicle::getPhoto() const { return photo; }
float Vehicle::getNOx() const { return NOx; }
float Vehicle::getPM() const { return PM; }

