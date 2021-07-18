#include"TabSearchTruck.h"

TabSearchTruck::TabSearchTruck(QWidget* p):
              parent(p),
              makeVehicle(new QLineEdit(this)),
              modelVehicle(new QLineEdit(this)),
              yearFrom(new QComboBox(this)),
              yearTo(new QComboBox(this)),
              mileage(new QComboBox(this)),
              priceFrom(new QLineEdit(this)),
              priceTo(new QLineEdit(this)),
              fuel(new QComboBox(this)),
              transmission(new QComboBox(this)),
              weight(new QLineEdit(this)),
              sleepingPlace(new QCheckBox("Posto per dormire", this)),
              superWeight(new QCheckBox("Carico pesante", this)),
              dangerousGood(new QCheckBox("Sostanze pericolose", this)),
              emissionClass(new QComboBox(this)),
              taxTo(new QLineEdit(this))
{
    QVBoxLayout* loTruckTab=new QVBoxLayout(this);

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
    fuel->addItem("Disel");
    fuel->addItem("Gas");
    fuel->addItem("Elettrica");

    transmission->addItem("Manuale");
    transmission->addItem("Automatica");
    transmission->addItem("Ibrida");

    weight->setPlaceholderText("Peso");

    QGridLayout *grid= new QGridLayout;
    QGridLayout *grid_1= new QGridLayout;

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
    grid_1->addWidget(weight,0,0);
    grid_1->addWidget(emissionClass,0,2);
    grid_1->addWidget(taxTo,0,1);
    grid_1->addWidget(sleepingPlace,1,0);
    grid_1->addWidget(superWeight,1,1);
    grid_1->addWidget(dangerousGood,1,2);

    loTruckTab->addItem(grid);
    loTruckTab->addItem(grid_1);
}
