#include "TabInsertMoto.h"
#include"TabInsertMoto.h"

TabInsertMoto::TabInsertMoto(QWidget* p):
              QWidget(p),
              make(new QLineEdit(this)),
              model(new QLineEdit(this)),
              year(new QLineEdit(this)),
              mileage(new QLineEdit(this)),
              price(new QLineEdit(this)),
              fuel(new QComboBox(this)),
              transmission(new QComboBox(this)),
              power(new QLineEdit(this)),
              weight(new QLineEdit(this)),
              NOx(new QLineEdit(this)),
              PM(new QLineEdit(this)),
              photo(new QPushButton("Carica foto", this)),
              description(new QTextEdit(this)),
              glass(new QCheckBox("Parabrezza", this)),
              pedal(new QCheckBox("Avviamento a pedale", this)),
              engineProtection(new QCheckBox("Paramotore", this))
{
    QVBoxLayout* loMotoTab=new QVBoxLayout(this);
    QHBoxLayout* loDescription=new QHBoxLayout(this);
/*
    QLineEdit* makeVehicle=new QLineEdit(this);
    QLineEdit* modelVehicle=new QLineEdit(this);
    QLineEdit* year=new QLineEdit(this);
    QLineEdit* mileage=new QLineEdit(this);
    QLineEdit* price=new QLineEdit(this);
    QComboBox* fuel=new QComboBox(this);
    QComboBox* transmission=new QComboBox(this);
    QLineEdit* power=new QLineEdit(this);
    QLineEdit* weight=new QLineEdit(this);
    QLineEdit* NOx=new QLineEdit(this);
    QLineEdit* PM=new QLineEdit(this);
    QPushButton* photo=new QPushButton(this);
    QTextEdit* description=new QTextEdit(this);
    QCheckBox* glass=new QCheckBox(this);
    QCheckBox* pedal=new QCheckBox(this);
    QCheckBox* engineProtection=new QCheckBox(this);
*/
    make->setPlaceholderText("Marca");
    model->setPlaceholderText("Modello");
    year->setPlaceholderText("Anno");
    mileage->setPlaceholderText("Km"); //!!!!INSERIRE SOLO CIFRE
    price->setPlaceholderText("Prezzo");

    transmission->addItem("Manuale");
    transmission->addItem("Automatica");

    fuel->addItem("Carburante");
    fuel->addItem("Benzina");
    fuel->addItem("Gas");
    fuel->addItem("Elettrica");    

    power->setPlaceholderText("Potenza");
    weight->setPlaceholderText("Peso");
    NOx->setPlaceholderText("NOx");
    PM->setPlaceholderText("PM");
    description->setPlaceholderText("Descrizione...");
    description->setBaseSize(100,100);
    //description->setMaximumHeight(100);

    QGridLayout *grid= new QGridLayout(this);
    QGridLayout *grid_1= new QGridLayout(this);
    QGridLayout *grid_2= new QGridLayout(this);
    QGridLayout *grid_3= new QGridLayout(this);
    //setHorizontalSpacing(int spacing); setVerticalSpacing(int spacing)

    grid->setSpacing(10);
    grid->addWidget(make,0,0);
    grid->addWidget(model,0,1);
    grid->addWidget(year,1,0);
    grid->addWidget(mileage,1,1);

    grid_3->setSpacing(15);
    grid_3->addWidget(price,0,0);
    grid_3->addWidget(transmission,0,1);
    grid_3->addWidget(fuel,0,2);

    grid_1->setSpacing(50);
    grid_1->addWidget(power,0,0);
    grid_1->addWidget(weight,0,1);
    grid_1->addWidget(NOx,0,2);
    grid_1->addWidget(PM,0,3);

    grid_2->setSpacing(10);
    grid_2->addWidget(glass,0,0);
    grid_2->addWidget(pedal,0,1);
    grid_2->addWidget(engineProtection,0,2);

    loMotoTab->addItem(grid);
    loMotoTab->addItem(grid_3);
    loMotoTab->addItem(grid_1);
    loMotoTab->addItem(grid_2);

    loDescription->addWidget(description);
    //loDescription->setBaseSize(100,100);

    loMotoTab->addLayout(loDescription);
    loMotoTab->addWidget(photo);


}

QLineEdit* TabInsertMoto::getMake() const { return make; }

QLineEdit* TabInsertMoto::getModel() const { return model; }

QLineEdit* TabInsertMoto::getYear() const { return year; }

QLineEdit* TabInsertMoto::getMileage() const { return mileage; }

QLineEdit* TabInsertMoto::getPrice() const { return price; }
/*
QComboBox* TabInsertMoto::getFuel() const { return fuel; }

QComboBox* TabInsertMoto::getTansmission() const { return transmission; }

QLineEdit* TabInsertMoto::getPower() const { return power; }

QLineEdit* TabInsertMoto::getWeight() const { return weight; }

QLineEdit* TabInsertMoto::getNOx() const { return NOx; }

QLineEdit* TabInsertMoto::getPM() const { return PM; }

QPushButton* TabInsertMoto::getPhoto() const { return photo; }

QTextEdit* TabInsertMoto::getDescription() const { return description; }
*/

