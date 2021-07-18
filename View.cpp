#include"View.h"
#include"Controller.h"

View::View(QWidget *parent): QWidget(parent), buttonInsert(new QPushButton(tr("INSERT"), this)),
      buttonSearch(new QPushButton(tr("SEARCH"), this)), labelInsert(addLabelInsert(this)),
      tabInsert(addTabInsert(this)), layoutSearch(new LayoutSearch(this)),
      buttonInserimento(new QPushButton(tr("Inserisci"), this)), buttonRicerca(new QPushButton(tr("Cerca"), this)){

    QVBoxLayout* layoutMain=new QVBoxLayout();
    QHBoxLayout* layoutButtons=new QHBoxLayout(); //quando QHBoxLayout(this) ce problema

    buttonSearch->setIcon(QIcon(":/images/a.jpg"));
    layoutButtons->addWidget(buttonInsert);
    layoutButtons->addWidget(buttonSearch);
    layoutMain->addLayout(layoutButtons);

    layoutMain->addWidget(labelInsert);
    layoutMain->addWidget(tabInsert);
    layoutMain->addWidget(layoutSearch);

    QHBoxLayout* layoutButtons1=new QHBoxLayout();
    layoutButtons1->addWidget(buttonInserimento);
    layoutButtons1->addWidget(buttonRicerca);
    layoutMain->addLayout(layoutButtons1);

    QPushButton* buttonCancel=new QPushButton(tr("Mostra tutte auto"), this);
    layoutMain->addWidget(buttonCancel);

    layoutSearch->hide();

    connect(buttonSearch, SIGNAL(clicked()), this, SLOT(showSearchLayout()));
    connect(buttonRicerca, SIGNAL(clicked()), this, SLOT(showTEST()));
    connect(buttonInsert, SIGNAL(clicked()), this, SLOT(showInsertLayout()));
    connect(buttonInserimento, SIGNAL(clicked()), this, SLOT(insertControlDialog()));
    connect(buttonInserimento, SIGNAL(clicked()), this, SLOT(insertNewAuto()));
    connect(buttonCancel, SIGNAL(clicked()), this, SLOT(showAllAuto()));

    setLayout(layoutMain);
    resize(QSize(600,500));
}

QMenuBar* View::addMenuBar(QWidget* parent) const { // const QWidget*&
    QMenuBar* menuBar=new QMenuBar(parent);
    QMenu* menuFile=new QMenu("File", menuBar);
    QMenu* menuSave=new QMenu("Save", menuBar);
    menuBar->addMenu(menuFile);
    menuBar->addMenu(menuSave);
    return menuBar;
}

QLabel* View::addLabelInsert(QWidget *parent){
    QLabel* labelInsert=new QLabel(tr("ISERISCI NUOVA AUTO"), parent);
    labelInsert->setAlignment(Qt::AlignCenter);
    labelInsert->setMargin(5);
    return labelInsert;
}

QTabWidget* View::addTabInsert(QWidget *parent){
    QTabWidget* tabInsert=new QTabWidget(parent);
    tabInsert->insertTab(1, new TabInsertMoto(tabInsert), tr("MOTO"));
    tabInsert->insertTab(2, new TabInsertCar(tabInsert), tr("AUTO"));
    tabInsert->insertTab(3, new TabInsertCamper(tabInsert), tr("CAMPER"));
    tabInsert->insertTab(4, new TabInsertTruck(tabInsert), tr("TRUCK"));
    tabInsert->setMovable(true);
    tabInsert->setTabPosition(QTabWidget::West);
    return tabInsert;
}

void View::showSearchLayout(){
    labelInsert->hide();
    tabInsert->hide();
    layoutSearch->show();
}

void View::showInsertLayout(){
    layoutSearch->hide();
    labelInsert->show();
    tabInsert->show();
}

void View::insertControlDialog(){
    QDialog* dialog=new QDialog(this);
    dialog->setModal(true);

    QVBoxLayout* mainLayout=new QVBoxLayout(dialog);
    QString make=((dynamic_cast<TabInsertMoto*>(tabInsert->currentWidget()))->getMake())->text();
    QHBoxLayout* makeLayout=new QHBoxLayout();
    QLabel* labelMake1=new QLabel(tr("Marka:"));
    QLabel* labelMake2=new QLabel(make);
    makeLayout->addWidget(labelMake1);
    makeLayout->addWidget(labelMake2);
    mainLayout->addLayout(makeLayout);

    QString model=((dynamic_cast<TabInsertMoto*>(tabInsert->currentWidget()))->getModel())->text();
    QHBoxLayout* modelLayout=new QHBoxLayout();
    QLabel* labelModel1=new QLabel(tr("Modello:"));
    QLabel* labelModel2=new QLabel(model);
    modelLayout->addWidget(labelModel1);
    modelLayout->addWidget(labelModel2);
    mainLayout->addLayout(modelLayout);

    QString year=((dynamic_cast<TabInsertMoto*>(tabInsert->currentWidget()))->getYear())->text();
    QHBoxLayout* yearLayout=new QHBoxLayout();
    QLabel* labelYear1=new QLabel(tr("Anno:"));
    QLabel* labelYear2=new QLabel(year);
    yearLayout->addWidget(labelYear1);
    yearLayout->addWidget(labelYear2);
    mainLayout->addLayout(yearLayout);

    QString mileage=((dynamic_cast<TabInsertMoto*>(tabInsert->currentWidget()))->getMileage())->text();
    QHBoxLayout* mileageLayout=new QHBoxLayout();
    QLabel* labelMileage1=new QLabel(tr("Km:"));
    QLabel* labelMileage2=new QLabel(mileage);
    mileageLayout->addWidget(labelMileage1);
    mileageLayout->addWidget(labelMileage2);
    mainLayout->addLayout(mileageLayout);

    QString price=((dynamic_cast<TabInsertMoto*>(tabInsert->currentWidget()))->getPrice())->text();
    QHBoxLayout* priceLayout=new QHBoxLayout();
    QLabel* labelPrice1=new QLabel(tr("Prezzo:"));
    QLabel* labelPrice2=new QLabel(price);
    priceLayout->addWidget(labelPrice1);
    priceLayout->addWidget(labelPrice2);
    mainLayout->addLayout(priceLayout);

    dialog->show();
}

void View::insertNewAuto(){
    VehiclePROBA a=VehiclePROBA(
       (((dynamic_cast<TabInsertMoto*>(tabInsert->currentWidget()))->getMake())->text()).QString::toStdString(),
       ((dynamic_cast<TabInsertMoto*>(tabInsert->currentWidget()))->getModel())->text().QString::toStdString(),
       ((dynamic_cast<TabInsertMoto*>(tabInsert->currentWidget()))->getYear())->text().QString::toStdString(),
       ((dynamic_cast<TabInsertMoto*>(tabInsert->currentWidget()))->getMileage())->text().QString::toStdString(),
       ((dynamic_cast<TabInsertMoto*>(tabInsert->currentWidget()))->getPrice())->text().QString::toStdString());
    controller->insertNewVehicle(a);
}

void View::showAllAuto(){
    controller->showAllAuto();
}

/*void View::showAllAuto(){
    QDialog* dialog=new QDialog(this);
    dialog->setModal(true);

    QVBoxLayout* mainLayout=new QVBoxLayout(dialog);
    mainLayout->setContentsMargins(0,0,0,0);

    QListWidget* searchList=new QListWidget(dialog);
    searchList->setGeometry(100,100,100,100);
    mainLayout->addWidget(searchList);

//    if(!it){} controllo se non è vuoto
//    else{}
    for(std::list<VehiclePROBA>::iterator it=controller->list.begin(); it !=controller->list.end(); ++it){

        ItemPROBA* itemProba=new ItemPROBA(QString::fromStdString(it->make), QString::fromStdString(it->model),
                                           QString::fromStdString(it->year), QString::fromStdString(it->mileage),
                                           QString::fromStdString(it->price), searchList);
        QListWidgetItem* lwi=new QListWidgetItem(searchList);
        lwi->setSizeHint(itemProba->sizeHint());
        searchList->setItemWidget(lwi, itemProba);
    }

    setLayout(mainLayout);
    dialog->show();
}*/

void View::showTEST(){
    TEST s(/*"TEST TEST TEST",*/ this);
}

void View::setController(Controller* _controller){
    controller=_controller;
    //!!!!!!fare connessioni qui con controller: connect(Name->actions()[0,1..], SIGNAL(triggered()),
    //!  controller, SLOT(slotName())

    //!  bottoni clicced connect(buttonName, SIGNAL(clicked()), controller, SLOT(slotName())
}
