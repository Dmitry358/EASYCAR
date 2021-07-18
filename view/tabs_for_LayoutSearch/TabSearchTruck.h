#ifndef TABSEARCHTRUCK_H
#define TABSEARCHTRUCK_H

#include<QLineEdit>
#include<QTextEdit>
#include<QComboBox>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>

class TabSearchTruck: public QWidget{
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
    QLineEdit* weight;
    QCheckBox* sleepingPlace;
    QCheckBox* superWeight;
    QCheckBox* dangerousGood;    
    QComboBox* emissionClass;
    QLineEdit* taxTo;

public:
    TabSearchTruck(QWidget* =nullptr);

};

#endif // SEARCHTRUCKTAB_H
