#ifndef TABINSERTMOTO_H
#define TABINSERTMOTO_H

#include<QLineEdit>
#include<QTextEdit>
#include<QComboBox>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>

class TabInsertMoto: public QWidget{
private:
    QLineEdit* make;
    QLineEdit* model;
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
    QCheckBox* glass;
    QCheckBox* pedal;
    QCheckBox* engineProtection;

public:
    TabInsertMoto(QWidget* =nullptr);

    QLineEdit* getMake() const;
    QLineEdit* getModel() const;
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
    QTextEdit* getDescription() const;
    QCheckBox* getGlass() const;
    QCheckBox* getPedal() const;
    QCheckBox* getEngineProtection() const;

};

#endif // TABINSERTMOTO_H
