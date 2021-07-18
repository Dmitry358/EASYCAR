#include "LayoutSearch.h"

LayoutSearch::LayoutSearch(QWidget *parent) : QWidget(parent),
            labelSearch(new QLabel("FAI RICERCA",this)), tabSearch(new QTabWidget(this)){
    QVBoxLayout* mainLayout=new QVBoxLayout(this);
    //setSizePolicy

    labelSearch->setAlignment(Qt::AlignCenter);
    labelSearch->setMargin(5);
    mainLayout->addWidget(labelSearch);

    tabSearch->insertTab(1, new TabSearchMoto(), "MOTO");
    tabSearch->insertTab(2, new TabSearchCar(), "AUTO");
    tabSearch->insertTab(3, new TabSearchCamper, "CAMPER");
    tabSearch->insertTab(4, new TabSearchTruck, "TRUCK");
    tabSearch->setMovable(true);
    tabSearch->setTabPosition(QTabWidget::West);
    mainLayout->addWidget(tabSearch);

    setLayout(mainLayout);
}

void LayoutSearch::hide(){
    labelSearch->hide();
    tabSearch->hide();
}

void LayoutSearch::show(){
    labelSearch->show();
    tabSearch->show();
}
