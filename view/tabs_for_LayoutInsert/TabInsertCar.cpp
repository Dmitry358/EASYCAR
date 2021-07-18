#include"TabInsertCar.h"

TabInsertCar::TabInsertCar(QWidget* p):
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
              stWagon(new QCheckBox("Station Wagon", this)),
              sunroof(new QCheckBox("Lunotto",this)),
              luggagerack(new QCheckBox("Portapacchi", this)),
              conditioner(new QCheckBox("Climatizzatore", this)),
              passengerNum(new QComboBox(this)),
              pintleHook(new QCheckBox("Gancio traino", this)),
              sensors(new QCheckBox("Sensori parcheggio", this)),
              description(new QTextEdit(this))
{
    QVBoxLayout* loCarTab=new QVBoxLayout(this);

    QValidator* validPriceFrom = new QIntValidator(0, 150000, this);

    makeVehicle->setPlaceholderText("Marca");

    modelVehicle->setPlaceholderText("Modello");

    year->setPlaceholderText("Anno");

    mileage->setPlaceholderText("Km");

    passengerNum->addItem("Numero passeggeri");

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
    grid_2->addWidget(stWagon,0,0);
    grid_2->addWidget(luggagerack,0,1);
    grid_2->addWidget(conditioner,0,2);
    grid_2->addWidget(sensors,1,0);
    grid_2->addWidget(pintleHook,1,1);
    grid_2->addWidget(sunroof,1,2);

    loCarTab->addItem(grid);
    loCarTab->addItem(grid_1);
    loCarTab->addItem(grid_2);
    loCarTab->addWidget(description);
    loCarTab->addWidget(photo);
}

QLineEdit* TabInsertCar::getMakeVehicle() const { return makeVehicle; }

QLineEdit* TabInsertCar::getModelVehicle() const { return modelVehicle; }

QLineEdit* TabInsertCar::getYear() const { return year; }

QLineEdit* TabInsertCar::getMileage() const { return mileage; }

QLineEdit* TabInsertCar::getPrice() const { return price; }

QComboBox* TabInsertCar::getFuel() const { return fuel; }

QComboBox* TabInsertCar::getTansmission() const { return transmission; }

QLineEdit* TabInsertCar::getPower() const { return power; }

QLineEdit* TabInsertCar::getWeight() const { return weight; }

QLineEdit* TabInsertCar::getNOx() const { return NOx; }

QLineEdit* TabInsertCar::getPM() const { return PM; }

QPushButton* TabInsertCar::getPhoto() const { return photo; }

QCheckBox* TabInsertCar::getStWagon() const { return stWagon; }

QCheckBox* TabInsertCar::getSunroof() const { return sunroof; }

QCheckBox* TabInsertCar::getLuggagerack() const { return luggagerack; }

QCheckBox* TabInsertCar::getConditioner() const { return conditioner; }

QComboBox* TabInsertCar::getPassengerNum() const { return passengerNum; }

QCheckBox* TabInsertCar::getPintleHook() const { return pintleHook; }

QCheckBox* TabInsertCar::getSensors() const { return sensors; }

QTextEdit* TabInsertCar::getDescription() const { return description; }
