#include "ItemPROBA.h"

ItemPROBA::ItemPROBA( QString _make, QString _model, QString _year, QString _mileage, QString _price, QWidget* parent):
    QWidget(parent), make(new QLabel(_make, this)), model(new QLabel(_model, this)), year(new QLabel(_year, this)),
    mileage(new QLabel(_mileage, this)), price(new QLabel(_price, this)){

    QVBoxLayout* mainLayout=new QVBoxLayout(this);

    QHBoxLayout* makeLayout=new QHBoxLayout(this);
    makeLayout->addWidget(new QLabel("Marca:", this));
    makeLayout->addWidget(make);
    mainLayout->addLayout(makeLayout);

    QHBoxLayout* modelLayout=new QHBoxLayout(this);
    modelLayout->addWidget(new QLabel("Modello:", this));
    modelLayout->addWidget(model);
    mainLayout->addLayout(modelLayout);

    QHBoxLayout* yearLayout=new QHBoxLayout(this);
    yearLayout->addWidget(new QLabel("Anno:", this));
    yearLayout->addWidget(year);
    mainLayout->addLayout(yearLayout);

    QHBoxLayout* mileageLayout=new QHBoxLayout(this);
    mileageLayout->addWidget(new QLabel("Km:", this));
    mileageLayout->addWidget(mileage);
    mainLayout->addLayout(mileageLayout);

    QHBoxLayout* priceLayout=new QHBoxLayout(this);
    priceLayout->addWidget(new QLabel("Prezzo:", this));
    priceLayout->addWidget(price);
    mainLayout->addLayout(priceLayout);

    setLayout(mainLayout);
}
