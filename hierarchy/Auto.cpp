#include"Auto.h"

Auto::Auto(string _make, string _model, unsigned int _year, unsigned int _mileage, float _price, string _description, string _photo,
           Fuel _fuel, bool _transmission, unsigned int _power, unsigned int _weight,
           float _NOx, float _PM, bool _conditioner, unsigned int _passengerNum, bool _pintleHook, bool _sensors):
      Vehicle(_make, _model, _year, _mileage, _price, _description, _photo, _fuel, _transmission, _power, _weight,
              _NOx, _PM),
      conditioner(_conditioner),
      passengerNum(_passengerNum),
      pintleHook(_pintleHook),
      sensors(_sensors){}
Auto::~Auto(){}

bool Auto::getConditioner() const { return conditioner; }

unsigned int Auto::getPassengerNum() const { return passengerNum; }

bool Auto::getPintleHook() const { return pintleHook; }

bool Auto::getSensors() const { return sensors; }
