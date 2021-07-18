#ifndef TEST_H
#define TEST_H

#include<QWidget>
#include<QDialog>
#include<QLabel>
#include<QString>
#include<string>
using std::string;


class TEST: public QWidget{
public:
    TEST(/*string s,*/ QWidget* parent): QWidget(parent){
        QDialog* dialog=new QDialog();
        //QLabel* labelMake1=new QLabel(QString::fromStdString(s), dialog);
//        dialog->addWidget(labelMake1);
        dialog->show();
// SISTEMATO CONFLITTO

    }
};

#endif // TEST_H
