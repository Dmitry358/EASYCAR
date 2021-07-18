#ifndef LAYOUTSEARCH_H
#define LAYOUTSEARCH_H

#include<QWidget>
#include<QTabWidget>
#include<QVBoxLayout>
#include<QLabel>
#include"tabs_for_LayoutSearch/TabSearchMoto.h"
#include"tabs_for_LayoutSearch/TabSearchCar.h"
#include"tabs_for_LayoutSearch/TabSearchCamper.h"
#include"tabs_for_LayoutSearch/TabSearchTruck.h"

class LayoutSearch : public QWidget{
private:
    QLabel* labelSearch;//QGROUP BOX
    QTabWidget* tabSearch;
public:
    explicit LayoutSearch(QWidget *parent = nullptr);

    void hide();
    void show();
};

#endif // LAYOUTSEARCH_H
