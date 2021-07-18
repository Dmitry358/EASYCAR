#include"Moto.h"

Moto::Moto(string _make, string _model, unsigned int _year, unsigned int _mileage, float _price,  string _description, string _photo,
           Fuel _fuel, bool _transmission, unsigned int _power, unsigned int _weight,
           float _NOx, float _PM, bool _glass, bool _pedal, bool _engineProtection):
      Vehicle(_make, _model, _year, _mileage, _price, _description, _photo, _fuel, _transmission, _power, _weight,
              _NOx, _PM),
      glass(_glass),
      pedal(_pedal),
      engineProtection(_engineProtection){}
Moto::~Moto(){}

bool Moto::getGlass() const { return glass; }
bool Moto::getPedal() const { return pedal; }
bool Moto::getEngineProtection() const { return engineProtection; }

///!!!!!ATTENZIONE METODI DA DEFINIRE
unsigned int Moto::emissionClass() const{
    return 1;
}
bool Moto::isNoviceDriver() const{
    return true;
}
double Moto::carTax() const{
    return 0;
}
