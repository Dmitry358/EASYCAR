#ifndef TABSEARCHCAMPER_H
#define TABSEARCHCAMPER_H

#include<QLineEdit>
#include<QTextEdit>
#include<QComboBox>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>

class TabSearchCamper: public QWidget{
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

    QComboBox* sleepingPlaces;
    QCheckBox* toilet;
    QCheckBox* kitchen;

    QCheckBox* conditioner;
    QComboBox* passengerNum;
    QCheckBox* pintleHook;
    QCheckBox* sensors;

    QComboBox* emissionClass;
    QLineEdit* taxTo;
    QCheckBox* newLicense;



public:
    TabSearchCamper(QWidget* =nullptr);
};

#endif // TABSEARCHCAMPER_H
