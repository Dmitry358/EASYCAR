#include"Camper.h"

Camper::Camper(string _make, string _model, unsigned int _year, unsigned int _mileage, float _price, string _description, string _photo,
               Fuel _fuel, bool _transmission, unsigned int _power, unsigned int _weight,
               float _NOx, float _PM, bool _conditioner, unsigned int _passengerNum, bool _pintleHook, bool _sensors,
               unsigned int _sleepingPlaces, bool _toilet, bool _kitchen):

          Auto(_make, _model, _year, _mileage, _price, _description, _photo, _fuel, _transmission, _power, _weight,
               _NOx, _PM, _conditioner, _passengerNum, _pintleHook, _sensors),
          sleepingPlaces(_sleepingPlaces),
          toilet(_toilet),
          kitchen(_kitchen){}
Camper::~Camper(){}

unsigned int Camper::getSleepingPlaces() const { return sleepingPlaces;}
bool Camper::getToilet() const { return toilet;}
bool Camper::getKitchen() const { return kitchen;}

bool untrained(){return true;};
float tax(){return 0;};
unsigned int emissionClass(){return 0;};

///!!!!!ATTENZIONE METODI DA DEFINIRE
unsigned int Camper::emissionClass() const{
    return 1;
}
bool Camper::isNoviceDriver() const{
    return true;
}
double Camper::carTax() const{
    return 0;
}
