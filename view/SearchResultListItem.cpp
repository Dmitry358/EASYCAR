#include "SearchResultListItem.h"

SearchResultListItem::SearchResultListItem(QListWidget* parent, QWidget* dialog):
    QListWidgetItem(parent), button(new QPushButton(dialog))
{
    QVBoxLayout* mainLayout=new QVBoxLayout(parent);
    mainLayout->addWidget(button);
    button->show();
//    setLayout(mainLayout);

}
