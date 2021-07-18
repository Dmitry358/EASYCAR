#ifndef SEARCHCARTAB_H
#define SEARCHCARTAB_H

#include<QLineEdit>
#include<QTextEdit>
#include<QComboBox>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>

class TabSearchCar: public QWidget{
private:
    QWidget* parent;

    QLineEdit* makeVehicle;
    QLineEdit* modelVehicle;
    QComboBox* yearFrom;
    QComboBox* yearTo;
    QComboBox* mileage;
    QLineEdit* priceFrom;  //controllare from < to
    QLineEdit* priceTo;
    QComboBox* fuel;
    QComboBox* transmission;

    QCheckBox* stWagon;
    QCheckBox* sunroof;
    QCheckBox* luggagerack;

    QCheckBox* conditioner;
    QComboBox* passengerNum;
    QCheckBox* pintleHook;
    QCheckBox* sensors;

    QComboBox* emissionClass;
    QLineEdit* taxTo;
    QCheckBox* newLicense;

public:
    TabSearchCar(QWidget* =nullptr);

};


#endif // SEARCHCARTAB_H
