/********************************************************************************
** Form generated from reading UI file 'simplepuremvcexample.ui'
**
** Created: Sun Feb 12 14:58:58 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEPUREMVCEXAMPLE_H
#define UI_SIMPLEPUREMVCEXAMPLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_simplePureMVCExampleClass
{
public:
    QWidget *centralWidget;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *simplePureMVCExampleClass)
    {
        if (simplePureMVCExampleClass->objectName().isEmpty())
            simplePureMVCExampleClass->setObjectName(QString::fromUtf8("simplePureMVCExampleClass"));
        simplePureMVCExampleClass->resize(455, 332);
        centralWidget = new QWidget(simplePureMVCExampleClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 220, 201, 21));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 50, 191, 52));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(170, 150, 77, 54));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        simplePureMVCExampleClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(simplePureMVCExampleClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 455, 23));
        simplePureMVCExampleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(simplePureMVCExampleClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        simplePureMVCExampleClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(simplePureMVCExampleClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        simplePureMVCExampleClass->setStatusBar(statusBar);

        retranslateUi(simplePureMVCExampleClass);

        QMetaObject::connectSlotsByName(simplePureMVCExampleClass);
    } // setupUi

    void retranslateUi(QMainWindow *simplePureMVCExampleClass)
    {
        simplePureMVCExampleClass->setWindowTitle(QApplication::translate("simplePureMVCExampleClass", "simplePureMVCExample", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label->setText(QApplication::translate("simplePureMVCExampleClass", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("simplePureMVCExampleClass", "\345\257\206  \347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("simplePureMVCExampleClass", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("simplePureMVCExampleClass", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class simplePureMVCExampleClass: public Ui_simplePureMVCExampleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEPUREMVCEXAMPLE_H
