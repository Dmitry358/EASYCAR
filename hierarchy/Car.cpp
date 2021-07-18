#include"Car.h"

Car::Car(string _make, string _model, unsigned int _year, unsigned int _mileage, float _price, string _description, string _photo,
         Fuel _fuel, bool _transmission, unsigned int _power, unsigned int _weight,
         float _NOx, float _PM, bool _conditioner, unsigned int _passengerNum, bool _pintleHook, bool _sensors,
         bool _stWagon, bool _sunroof, bool _luggagerack):
    Auto(_make, _model, _year, _mileage, _price,  _description, _photo, _fuel, _transmission, _power, _weight,
          _NOx, _PM, _conditioner, _passengerNum, _pintleHook, _sensors),
    stWagon(_stWagon),
    sunroof(_sunroof),
    luggagerack(_luggagerack){}
Car::~Car(){}

bool Car::getStWagon() const { return stWagon; }
bool Car::getSunroof() const { return sunroof; }
bool Car::getLuggagerack() const { return luggagerack; }

///!!!!!ATTENZIONE METODI DA DEFINIRE
unsigned int Car::emissionClass() const{
    return 1;
}
bool Car::isNoviceDriver() const{
    return true;
}
double Car::carTax() const{
    return 0;
}
