#ifndef SIMPLEPUREMVCEXAMPLE_H
#define SIMPLEPUREMVCEXAMPLE_H

#include "LoginMediator.h"

#include <QtGui/QMainWindow>
#include "ui_simplepuremvcexample.h"

class simplePureMVCExample : public QMainWindow
{
    Q_OBJECT

    friend class LoginMediator;

public:
    simplePureMVCExample(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~simplePureMVCExample();

private:
    Ui::simplePureMVCExampleClass ui;
};

#endif // SIMPLEPUREMVCEXAMPLE_H
