#ifndef VIEW_H
#define VIEW_H

//#include<QMetaObject>
//#include<QWidget> ?????????????????
#include<QMenu>
#include<QMenuBar>
#include<QTabWidget>
#include<QPushButton>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QDialog>
#include<QLabel>
#include<QListWidget>
#include<QListWidgetItem>
#include<QString>/////////////////////////////////

#include"view/LayoutSearch.h"
#include"view/tabs_for_LayoutSearch/TabSearchMoto.h"
#include"view/tabs_for_LayoutSearch/TabSearchCar.h"
#include"view/tabs_for_LayoutSearch/TabSearchCamper.h"
#include"view/tabs_for_LayoutSearch/TabSearchTruck.h"

#include"view/LayoutInsert.h"
#include"view/tabs_for_LayoutInsert/TabInsertMoto.h"
#include"view/tabs_for_LayoutInsert/TabInsertCar.h"
#include"view/tabs_for_LayoutInsert/TabInsertCamper.h"
#include"view/tabs_for_LayoutInsert/TabInsertTruck.h"

#include<TEST.h>
#include<VehiclePROBA.h>
#include<ItemPROBA.h>
#include"Vehicleitem.h"
#include"view/SearchResultListItem.h"


class Controller;
//INSERIRE tr() PER ISTANZIARE NOMI DEI OGGETTI
//INSERIRE EXPLICIT NEI COSTRUTTORI

class View: public QWidget{
    Q_OBJECT
private:
    Controller* controller;

    QPushButton* buttonInsert;
    QPushButton* buttonSearch;
    QLabel* labelInsert; //QGROUP BOX
    QTabWidget* tabInsert;
    LayoutSearch* layoutSearch;
    QPushButton* buttonInserimento;
    QPushButton* buttonRicerca;
    QListWidget* searchResult;

    QMenuBar* addMenuBar(QWidget* parent) const;
    QLabel* addLabelInsert(QWidget* parent);
    QTabWidget* addTabInsert(QWidget* parent);


public:
    explicit View(QWidget *parent = nullptr);

    void setController(Controller*);

public slots:
    void showSearchLayout();
    void showInsertLayout();
    void insertControlDialog();
    void insertNewAuto();
    void showAllAuto();
    void showTEST();

};

#endif // VIEW_H