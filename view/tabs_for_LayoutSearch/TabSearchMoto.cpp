#include"TabSearchMoto.h"

TabSearchMoto::TabSearchMoto(QWidget* p):
              parent(p),
              makeVehicle(new QLineEdit(this)),
              modelVehicle(new QLineEdit(this)),
              yearFrom(new QComboBox(this)),
              yearTo(new QComboBox(this)),
              mileage(new QComboBox(this)),
              priceFrom(new QLineEdit(this)),
              priceTo(new QLineEdit(this)),
              fuel(new QComboBox(this)),
              transmission(new QComboBox(this)),//void QPushButton::setMenu(QMenu *menu)
              power(new QLineEdit(this)),
              glass(new QCheckBox("Parabrezza", this)),
              pedal(new QCheckBox("Avviamento a pedale", this)),
              engineProtection(new QCheckBox("Paramotore", this)),
              emissionClass(new QComboBox(this)),
              taxTo(new QLineEdit(this)),
              newLicense(new QCheckBox("Neopatentato", this))
{
    QVBoxLayout* loMotoTab=new QVBoxLayout(this);

    QValidator* validPriceFrom = new QIntValidator(0, 150000, this);

    makeVehicle->setPlaceholderText("Marca");

    modelVehicle->setPlaceholderText("Modello");

    yearFrom->addItem("Anno Da..");
    yearFrom->addItem("2019");
    yearFrom->addItem("2018");
    yearTo->addItem("Anno A..");
    yearTo->addItem("2019");
    yearTo->addItem("2018");

    mileage->addItem("Km");
    mileage->addItem("0-25.000");
    mileage->addItem("25.000-50.000");

    priceFrom->setPlaceholderText("Prezzo da");
    priceFrom->setValidator(validPriceFrom);
    priceTo->setPlaceholderText("Prezzo a");  //fare variabile da from e impostare validator da lei per priceTo

    fuel->addItem("Carburante");
    fuel->addItem("Benzina");
    fuel->addItem("Gas");
    fuel->addItem("Elettrica");

    transmission->addItem("Manuale");
    transmission->addItem("Automatica");

    power->setPlaceholderText("Potenza");

    QGridLayout *grid= new QGridLayout;
    QGridLayout *grid_1= new QGridLayout;
    QGridLayout *grid_2= new QGridLayout;

    grid->setSpacing(10);
    grid->addWidget(makeVehicle,0,0);
    grid->addWidget(modelVehicle,0,1);
    grid->addWidget(yearFrom,1,0);
    grid->addWidget(yearTo,1,1);
    grid->addWidget(mileage,2,0);
    grid->addWidget(priceFrom,3,0);
    grid->addWidget(priceTo,3,1);
    grid->addWidget(fuel,4,0);
    grid->addWidget(transmission,4,1);

    grid_1->setSpacing(10);
    grid_1->addWidget(power,0,0);

    grid_2->setSpacing(10);
    grid_2->addWidget(glass,0,0);
    grid_2->addWidget(pedal,0,1);
    grid_2->addWidget(engineProtection,0,2);
    grid_2->addWidget(emissionClass,1,0);
    grid_2->addWidget(taxTo,1,1);
    grid_2->addWidget(newLicense,1,2);

    loMotoTab->addItem(grid);
    loMotoTab->addItem(grid_1);
    loMotoTab->addItem(grid_2);
}
