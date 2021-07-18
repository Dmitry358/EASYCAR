#ifndef TABINSERTTRUCK_H
#define TABINSERTTRUCK_H

#include<QLineEdit>
#include<QTextEdit>
#include<QComboBox>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>

class TabInsertTruck: public QWidget{
public:
    QWidget* parent;

    QLineEdit* makeVehicle;
    QLineEdit* modelVehicle;
    QLineEdit* year;
    QLineEdit* mileage;
    QLineEdit* price;
    QComboBox* fuel;
    QComboBox* transmission;
    QLineEdit* power;
    QLineEdit* weight;
    QLineEdit* NOx;
    QLineEdit* PM;
    QPushButton* photo;
    QTextEdit* description;
    QCheckBox* sleepingPlace;
    QCheckBox* superWeight;
    QCheckBox* dangerousGood;

    TabInsertTruck(QWidget* =nullptr);

};

#endif // TABINSERTTRUCK_H
