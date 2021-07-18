#include"TabInsertCamper.h"

TabInsertCamper::TabInsertCamper(QWidget* p):
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

              sleepingPlaces(new QComboBox(this)),
              toilet(new QCheckBox("Bagno", this)),
              kitchen(new QCheckBox("Cucina", this)),

              conditioner(new QCheckBox("Climatizzatore", this)),
              passengerNum(new QComboBox(this)),
              pintleHook(new QCheckBox("Gancio traino", this)),
              sensors(new QCheckBox("Sensori parcheggio", this)),

              photo(new QPushButton("Carica foto", this)),
              description(new QTextEdit(this))
{
    QVBoxLayout* loCamperTab=new QVBoxLayout(this);

    QValidator* validPriceFrom = new QIntValidator(0, 150000, this);

    makeVehicle->setPlaceholderText("Marca");

    modelVehicle->setPlaceholderText("Modello");

    year->setPlaceholderText("Anno");

    mileage->setPlaceholderText("Km");

    price->setPlaceholderText("Prezzo");
    price->setValidator(validPriceFrom);

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

    passengerNum->addItem("Numero passeggeri");
    sleepingPlaces->addItem("Posti per dormire");

    QGridLayout *grid= new QGridLayout;
    QGridLayout *grid_1= new QGridLayout;
    QGridLayout *grid_2= new QGridLayout;

    grid->setSpacing(10);
    grid->addWidget(makeVehicle,0,0);
    grid->addWidget(modelVehicle,0,1);
    grid->addWidget(year,1,0);
    grid->addWidget(mileage,1,1);
    grid->addWidget(price,2,0);
    grid->addWidget(passengerNum,2,1);
    grid->addWidget(fuel,3,0);
    grid->addWidget(transmission,3,1);

    grid_1->setSpacing(10);
    grid_1->addWidget(power,0,0);
    grid_1->addWidget(weight,0,1);
    grid_1->addWidget(NOx,0,2);
    grid_1->addWidget(PM,0,3);

    grid_2->setSpacing(10);
    grid_2->addWidget(sensors,0,0);
    grid_2->addWidget(pintleHook,0,1);
    grid_2->addWidget(conditioner,0,2);
    grid_2->addWidget(kitchen,1,0);
    grid_2->addWidget(toilet,1,1);
    grid_2->addWidget(sleepingPlaces,1,2);

    loCamperTab->addItem(grid);
    loCamperTab->addItem(grid_1);
    loCamperTab->addItem(grid_2);

    loCamperTab->addWidget(description);
    loCamperTab->addWidget(photo);
}
