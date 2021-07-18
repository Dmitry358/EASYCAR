#ifndef SEARCHRESULTLISTITEM_H
#define SEARCHRESULTLISTITEM_H

#include<QListWidgetItem>
#include<QPushButton>
#include<QVBoxLayout>
#include<QWidget>

class SearchResultListItem: public QListWidgetItem{
private:

public:
    SearchResultListItem(QListWidget* parent, QWidget* dialog);
    QPushButton* button;
};

#endif // SEARCHRESULTLISTITEM_H
