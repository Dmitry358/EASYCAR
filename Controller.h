#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "Container.h"
#include "View.h"
//#include "hierarchy/Vehicle.h"
#include "DeepPtr.h"

#include <list>
#include "ItemPROBA.h"
#include "VehiclePROBA.h"


class Controller: public QObject{
    Q_OBJECT

private:
    View* view;
    Container<DeepPtr>* container;

    std::list<VehiclePROBA> list; ///////////////////////////
    //metodi techici si mettono privati

public:
    Controller(); //EXPLICIT??

    void setView(View* _view);
    void setContainer(Container<DeepPtr>* _container);

    void insertNewVehicle(VehiclePROBA);
    void showAllAuto();
    //////// fare try/catch quando si restituisce elenco delle auto cercate

public slots:

};

#endif // CONTROLLER_H
