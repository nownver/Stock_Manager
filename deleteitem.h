#ifndef DELETEITEM_H
#define DELETEITEM_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class DeleteItem;
}

class DeleteItem : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteItem(QWidget *parent = nullptr);
    ~DeleteItem();

private slots:
    void on_btnDeleteItem_clicked();

private:
    Ui::DeleteItem *ui;
    void resetElements();
};

#endif // DELETEITEM_H
