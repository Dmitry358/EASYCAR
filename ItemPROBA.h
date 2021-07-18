#ifndef ITEMPROBA_H
#define ITEMPROBA_H

#include<QWidget>
#include<QVBoxLayout>
#include<QLabel>
#include<QString>
class ItemPROBA:public QWidget{
public:
    ItemPROBA(QString, QString, QString, QString, QString, QWidget* parent=nullptr);
    QLabel* make;
    QLabel* model;
    QLabel* year;
    QLabel* mileage;
    QLabel* price;
    ///////
};

#endif // ITEMPROBA_H
