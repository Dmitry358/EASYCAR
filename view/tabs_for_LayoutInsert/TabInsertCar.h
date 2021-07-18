#ifndef TABINSERTCAR_H
#define TABINSERTCAR_H

#include<QLineEdit>
#include<QTextEdit>
#include<QComboBox>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>

class TabInsertCar: public QWidget{
private:
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
    QCheckBox* stWagon;
    QCheckBox* sunroof;
    QCheckBox* luggagerack;
    QCheckBox* conditioner;
    QComboBox* passengerNum;
    QCheckBox* pintleHook;
    QCheckBox* sensors;
    QTextEdit* description;

public:
    TabInsertCar(QWidget* =nullptr); //EXPLICITdfgn

    QLineEdit* getMakeVehicle() const;
    QLineEdit* getModelVehicle() const;
    QLineEdit* getYear() const;
    QLineEdit* getMileage() const;
    QLineEdit* getPrice() const;
    QComboBox* getFuel() const;
    QComboBox* getTansmission() const;
    QLineEdit* getPower() const;
    QLineEdit* getWeight() const;
    QLineEdit* getNOx() const;
    QLineEdit* getPM() const;
    QPushButton* getPhoto() const;
    QCheckBox* getStWagon() const;
    QCheckBox* getSunroof() const;
    QCheckBox* getLuggagerack() const;
    QCheckBox* getConditioner() const;
    QComboBox* getPassengerNum() const;
    QCheckBox* getPintleHook() const;
    QCheckBox* getSensors() const;
    QTextEdit* getDescription() const;
};


#endif // TABINSERTCAR_H
