#include "Controller.h"

#include <QDialog>
#include <QListWidget>


Controller::Controller(){}

void Controller::setView(View* _view){
    view=_view;
}

void Controller::setContainer(Container<DeepPtr>* _container){
    container=_container;
}

void Controller::insertNewVehicle(VehiclePROBA vehicle){
    list.push_back(vehicle);
}

void Controller::showAllAuto(){
    QDialog* dialog=new QDialog(/*view*/);
    dialog->setModal(true);

    QVBoxLayout* mainLayout=new QVBoxLayout(dialog);
    mainLayout->setContentsMargins(0,0,0,0);

    QListWidget* searchList=new QListWidget(dialog);
    searchList->setGeometry(100,100,100,100);
    mainLayout->addWidget(searchList);

//    if(!it){} controllo se non è vuoto
//    else{}
    for(std::list<VehiclePROBA>::iterator it=list.begin(); it !=list.end(); ++it){

        ItemPROBA* itemProba=new ItemPROBA(QString::fromStdString(it->make), QString::fromStdString(it->model),
                                           QString::fromStdString(it->year), QString::fromStdString(it->mileage),
                                           QString::fromStdString(it->price), searchList);
        QListWidgetItem* lwi=new QListWidgetItem(searchList);
        lwi->setSizeHint(itemProba->sizeHint());
        searchList->setItemWidget(lwi, itemProba);
    }

    dialog->setLayout(mainLayout);
    dialog->show();
}
