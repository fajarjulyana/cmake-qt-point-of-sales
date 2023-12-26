/********************************************************************************
** Form generated from reading UI file 'poswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSWINDOW_H
#define UI_POSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_POSWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *productTable;
    QLabel *totalLabel;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *payButton;

    void setupUi(QMainWindow *POSWindow)
    {
        if (POSWindow->objectName().isEmpty())
            POSWindow->setObjectName(QString::fromUtf8("POSWindow"));
        POSWindow->resize(800, 600);
        centralwidget = new QWidget(POSWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        productTable = new QTableWidget(centralwidget);
        if (productTable->columnCount() < 3)
            productTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        productTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        productTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        productTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        productTable->setObjectName(QString::fromUtf8("productTable"));
        productTable->setRowCount(0);
        productTable->setColumnCount(3);
        productTable->horizontalHeader()->setVisible(true);
        productTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(productTable);

        totalLabel = new QLabel(centralwidget);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));

        verticalLayout->addWidget(totalLabel);

        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        verticalLayout->addWidget(removeButton);

        payButton = new QPushButton(centralwidget);
        payButton->setObjectName(QString::fromUtf8("payButton"));

        verticalLayout->addWidget(payButton);

        POSWindow->setCentralWidget(centralwidget);

        retranslateUi(POSWindow);

        QMetaObject::connectSlotsByName(POSWindow);
    } // setupUi

    void retranslateUi(QMainWindow *POSWindow)
    {
        POSWindow->setWindowTitle(QCoreApplication::translate("POSWindow", "Point of Sale", nullptr));
        QTableWidgetItem *___qtablewidgetitem = productTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("POSWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = productTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("POSWindow", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = productTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("POSWindow", "Price", nullptr));
        totalLabel->setText(QCoreApplication::translate("POSWindow", "Total:", nullptr));
        addButton->setText(QCoreApplication::translate("POSWindow", "Add Product", nullptr));
        removeButton->setText(QCoreApplication::translate("POSWindow", "Remove Product", nullptr));
        payButton->setText(QCoreApplication::translate("POSWindow", "Pay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class POSWindow: public Ui_POSWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSWINDOW_H
