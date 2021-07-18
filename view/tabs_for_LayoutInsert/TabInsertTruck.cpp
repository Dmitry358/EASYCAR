#include"TabInsertTruck.h"

TabInsertTruck::TabInsertTruck(QWidget* p):
              parent(p),
              makeVehicle(new QLineEdit(this)),
              modelVehicle(new QLineEdit(this)),
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
              sleepingPlace(new QCheckBox("Posto per dormire", this)),
              superWeight(new QCheckBox("Carico pesante", this)),
              dangerousGood(new QCheckBox("Sostanze pericolose", this))
{
    QVBoxLayout* loTruckTab=new QVBoxLayout(this);

    makeVehicle->setPlaceholderText("Marca");

    modelVehicle->setPlaceholderText("Modello");

    year->setPlaceholderText("Anno");

    mileage->setPlaceholderText("Km");

    price->setPlaceholderText("Prezzo");

    fuel->addItem("Carburante");
    fuel->addItem("Benzina");
    fuel->addItem("Disel");
    fuel->addItem("Gas");
    fuel->addItem("Elettrica");

    transmission->addItem("Manuale");
    transmission->addItem("Automatica");
    transmission->addItem("Ibrida");

    power->setPlaceholderText("Potenza");

    weight->setPlaceholderText("Peso");

    NOx->setPlaceholderText("NOx");
    PM->setPlaceholderText("PM");

    description->setPlaceholderText("Descrizione...");

    QGridLayout *grid= new QGridLayout;
    QGridLayout *grid_1= new QGridLayout;
    QGridLayout *grid_2= new QGridLayout;

    grid->setSpacing(10);
    grid->addWidget(makeVehicle,0,0);
    grid->addWidget(modelVehicle,0,1);
    grid->addWidget(year,1,0);
    grid->addWidget(mileage,1,1);
    grid->addWidget(price,2,0);
    grid->addWidget(fuel,3,0);
    grid->addWidget(transmission,3,1);

    grid_1->setSpacing(10);
    grid_1->addWidget(power,0,0);
    grid_1->addWidget(weight,0,1);
    grid_1->addWidget(NOx,0,2);
    grid_1->addWidget(PM,0,3);

    grid_2->setSpacing(10);
    grid_2->addWidget(sleepingPlace,0,0);
    grid_2->addWidget(superWeight,0,1);
    grid_2->addWidget(dangerousGood,0,2);

    loTruckTab->addItem(grid);
    loTruckTab->addItem(grid_1);
    loTruckTab->addItem(grid_2);
    loTruckTab->addWidget(description);
    loTruckTab->addWidget(photo);
}
