#include "Vehicleitem.h"

Vehicleitem::Vehicleitem(QWidget* _parent): parent(_parent){
    QVBoxLayout* mainLayout=new QVBoxLayout(parent);

            QHBoxLayout* makeLayout=new QHBoxLayout(parent);
            QLabel* title=new QLabel(QString::fromStdString("Marka:"));
            QLabel* lab=new QLabel(QString::fromStdString("Marka:"));
            makeLayout->addWidget(title);
            makeLayout->addWidget(lab);
            mainLayout->addLayout(makeLayout);

            QHBoxLayout* modelLayout=new QHBoxLayout(parent);
            QLabel* title1=new QLabel(QString::fromStdString("Modello:"));
            QLabel* lab1=new QLabel(QString::fromStdString("Marka:"));
            modelLayout->addWidget(title1);
            modelLayout->addWidget(lab1);
            mainLayout->addLayout(modelLayout);

            QHBoxLayout* yearLayout=new QHBoxLayout(parent);
            QLabel* title2=new QLabel(QString::fromStdString("Anno:"));
            QLabel* lab2=new QLabel(QString::fromStdString("Marka:"));
            yearLayout->addWidget(title2);
            yearLayout->addWidget(lab2);
            mainLayout->addLayout(yearLayout);

            QHBoxLayout* mileageLayout=new QHBoxLayout(parent);
            QLabel* title3=new QLabel(QString::fromStdString("Km:"));
            QLabel* lab3=new QLabel(QString::fromStdString("Marka:"));
            mileageLayout->addWidget(title3);
            mileageLayout->addWidget(lab3);
            mainLayout->addLayout(mileageLayout);

            QHBoxLayout* priceLayout=new QHBoxLayout(parent);
            QLabel* title4=new QLabel(QString::fromStdString("Prezzo:"));
            QLabel* lab4=new QLabel(QString::fromStdString("Marka:"));
            priceLayout->addWidget(title4);
            priceLayout->addWidget(lab4);
            mainLayout->addLayout(priceLayout);

            this->setStyleSheet({"background: yellow; border: solid 2px"});
            setLayout(mainLayout);
}
