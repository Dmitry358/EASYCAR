#include"Truck.h"

Truck::Truck(string _make, string _model, unsigned int _year, unsigned int _mileage, float _price, string _description, string _photo,
             Fuel _fuel, bool _transmission, unsigned int _power, unsigned int _weight,
             float _NOx, float _PM, bool _sleepingPlace, bool _superWeight,
             bool _dangerousGood):
       Vehicle(_make, _model, _year, _mileage, _price, _description, _photo, _fuel, _transmission, _power, _weight,
           _NOx, _PM),
       sleepingPlace(_sleepingPlace),
       superWeight(_superWeight),
       dangerousGood(_dangerousGood){}
Truck::~Truck(){}
bool Truck::getSleepingPlace() const { return sleepingPlace;}
bool Truck::getSuperWeight() const { return superWeight;}
bool Truck::getDangerousGood() const { return dangerousGood;}
///!!!!!ATTENZIONE METODI DA DEFINIRE
unsigned int Truck::emissionClass() const{
    return 1;
}
bool Truck::isNoviceDriver() const{
    return true;
}
double Truck::carTax() const{
    return 0;
}
