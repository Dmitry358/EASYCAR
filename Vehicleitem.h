#ifndef VEHICLEITEM_H
#define VEHICLEITEM_H

#include<QWidget>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QLabel>
#include<QListWidgetItem>
#include<QStyle>
#include<QColor>

class Vehicleitem: public QWidget{
private:
    QWidget* parent;

public:
    Vehicleitem(QWidget* _parent=nullptr);
};

#endif // VEHICLEITEM_H
