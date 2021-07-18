#ifndef TABINSERTCAMPER_H
#define TABINSERTCAMPER_H

#include<QLineEdit>
#include<QTextEdit>
#include<QComboBox>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>

class TabInsertCamper: public QWidget{
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

    QComboBox* sleepingPlaces;
    QCheckBox* toilet;
    QCheckBox* kitchen;

    QCheckBox* conditioner;
    QComboBox* passengerNum;
    QCheckBox* pintleHook;
    QCheckBox* sensors;

    QPushButton* photo;
    QTextEdit* description;

    TabInsertCamper(QWidget* =nullptr);

};

#endif // TABINSERTCAMPER_H
