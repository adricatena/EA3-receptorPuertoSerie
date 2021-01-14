/********************************************************************************
** Form generated from reading UI file 'portcfg.ui'
**
** Created: Thu 1. Sep 12:10:01 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTCFG_H
#define UI_PORTCFG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_portCfg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labPuerto;
    QComboBox *cmbPuertos;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAceptar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancelar;

    void setupUi(QDialog *portCfg)
    {
        if (portCfg->objectName().isEmpty())
            portCfg->setObjectName(QString::fromUtf8("portCfg"));
        portCfg->resize(237, 85);
        verticalLayout = new QVBoxLayout(portCfg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labPuerto = new QLabel(portCfg);
        labPuerto->setObjectName(QString::fromUtf8("labPuerto"));

        horizontalLayout_2->addWidget(labPuerto);

        cmbPuertos = new QComboBox(portCfg);
        cmbPuertos->setObjectName(QString::fromUtf8("cmbPuertos"));

        horizontalLayout_2->addWidget(cmbPuertos);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAceptar = new QPushButton(portCfg);
        btnAceptar->setObjectName(QString::fromUtf8("btnAceptar"));

        horizontalLayout->addWidget(btnAceptar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancelar = new QPushButton(portCfg);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));

        horizontalLayout->addWidget(btnCancelar);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(portCfg);
        QObject::connect(btnAceptar, SIGNAL(clicked()), portCfg, SLOT(accept()));
        QObject::connect(btnCancelar, SIGNAL(clicked()), portCfg, SLOT(reject()));

        QMetaObject::connectSlotsByName(portCfg);
    } // setupUi

    void retranslateUi(QDialog *portCfg)
    {
        portCfg->setWindowTitle(QApplication::translate("portCfg", "Selecci\303\263n de puerto", 0, QApplication::UnicodeUTF8));
        labPuerto->setText(QApplication::translate("portCfg", "Puerto:", 0, QApplication::UnicodeUTF8));
        btnAceptar->setText(QApplication::translate("portCfg", "Aceptar", 0, QApplication::UnicodeUTF8));
        btnCancelar->setText(QApplication::translate("portCfg", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class portCfg: public Ui_portCfg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTCFG_H
