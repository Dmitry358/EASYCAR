#ifndef TABSEARCHCMOTO_H
#define TABSEARCHCMOTO_H

#include<QLineEdit>
#include<QTextEdit>
#include<QComboBox>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>

class TabSearchMoto: public QWidget{
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
    QLineEdit* power;
    QCheckBox* glass;
    QCheckBox* pedal;
    QCheckBox* engineProtection;

    QComboBox* emissionClass;
    QLineEdit* taxTo;
    QCheckBox* newLicense;

public:
    TabSearchMoto(QWidget* =nullptr);


};

#endif // TABSEARCHCMOTO_H
