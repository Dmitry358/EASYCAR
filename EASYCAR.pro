#-------------------------------------------------
#
# Project created by QtCreator 2021-07-13T23:06:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EASYCAR
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        View.cpp \
    hierarchy/Auto.cpp \
    hierarchy/Camper.cpp \
    hierarchy/Car.cpp \
    hierarchy/Moto.cpp \
    hierarchy/Truck.cpp \
    hierarchy/Vehicle.cpp \
    view/tabs_for_LayoutInsert/TabInsertCamper.cpp \
    view/tabs_for_LayoutInsert/TabInsertCar.cpp \
    view/tabs_for_LayoutInsert/TabInsertMoto.cpp \
    view/tabs_for_LayoutInsert/TabInsertTruck.cpp \
    view/tabs_for_LayoutSearch/TabSearchCamper.cpp \
    view/tabs_for_LayoutSearch/TabSearchCar.cpp \
    view/tabs_for_LayoutSearch/TabSearchMoto.cpp \
    view/tabs_for_LayoutSearch/TabSearchTruck.cpp \
    view/LayoutInsert.cpp \
    view/LayoutSearch.cpp \
    view/SearchResultListItem.cpp \
    Controller.cpp \
    ItemPROBA.cpp \
    Vehicleitem.cpp

HEADERS += \
        View.h \
    hierarchy/Auto.h \
    hierarchy/Camper.h \
    hierarchy/Car.h \
    hierarchy/Fuel.h \
    hierarchy/Moto.h \
    hierarchy/Truck.h \
    hierarchy/Vehicle.h \
    view/tabs_for_LayoutInsert/TabInsertCamper.h \
    view/tabs_for_LayoutInsert/TabInsertCar.h \
    view/tabs_for_LayoutInsert/TabInsertMoto.h \
    view/tabs_for_LayoutInsert/TabInsertTruck.h \
    view/tabs_for_LayoutSearch/TabSearchCamper.h \
    view/tabs_for_LayoutSearch/TabSearchCar.h \
    view/tabs_for_LayoutSearch/TabSearchMoto.h \
    view/tabs_for_LayoutSearch/TabSearchTruck.h \
    view/LayoutInsert.h \
    view/LayoutSearch.h \
    view/SearchResultListItem.h \
    Container.h \
    Controller.h \
    DeepPtr.h \
    ItemPROBA.h \
    TEST.h \
    Vehicleitem.h \
    VehiclePROBA.h

DISTFILES += \
    images/new img/3-1024x1024.jpg \
    images/new img/i.jpeg \
    images/new img/kisspng-car-computer-icons-sedan-auto-detailing-auto-vector-5adb8f31845cb4.3836226215243384815422.jpg \
    images/new img/kisspng-caravan-campervans-computer-icons-5af764b13b0f70.7856040915261626092419.jpg \
    images/new img/unnamed.jpg \
    images/a.jpg \
    images/new img/118-1187597_nouvelle-porsche-911-icon-avto-podbor-bel-clipart.png \
    images/new img/186-1862379_medium-image-motorcycle-icon-png-clipart.png \
    images/new img/camping-car-icon-png-16.png \
    images/new img/car-icon-png-3.png \
    images/save.png
