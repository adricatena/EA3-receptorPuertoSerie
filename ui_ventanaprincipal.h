/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created: Thu 1. Sep 11:28:46 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPAL_H
#define UI_VENTANAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaPrincipal
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *labTitulo;
    QLabel *labTitulo_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labTitulo_3;
    QLabel *labEstado;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labTitulo_4;
    QLabel *labDNI;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConectar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSalir;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QString::fromUtf8("VentanaPrincipal"));
        VentanaPrincipal->resize(228, 163);
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 206, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labTitulo = new QLabel(widget);
        labTitulo->setObjectName(QString::fromUtf8("labTitulo"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labTitulo->setFont(font);
        labTitulo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labTitulo);

        labTitulo_2 = new QLabel(widget);
        labTitulo_2->setObjectName(QString::fromUtf8("labTitulo_2"));
        labTitulo_2->setFont(font);
        labTitulo_2->setFrameShape(QFrame::NoFrame);
        labTitulo_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labTitulo_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labTitulo_3 = new QLabel(widget);
        labTitulo_3->setObjectName(QString::fromUtf8("labTitulo_3"));

        horizontalLayout_3->addWidget(labTitulo_3);

        labEstado = new QLabel(widget);
        labEstado->setObjectName(QString::fromUtf8("labEstado"));

        horizontalLayout_3->addWidget(labEstado);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labTitulo_4 = new QLabel(widget);
        labTitulo_4->setObjectName(QString::fromUtf8("labTitulo_4"));

        horizontalLayout_2->addWidget(labTitulo_4);

        labDNI = new QLabel(widget);
        labDNI->setObjectName(QString::fromUtf8("labDNI"));

        horizontalLayout_2->addWidget(labDNI);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnConectar = new QPushButton(widget);
        btnConectar->setObjectName(QString::fromUtf8("btnConectar"));

        horizontalLayout->addWidget(btnConectar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSalir = new QPushButton(widget);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));

        horizontalLayout->addWidget(btnSalir);


        verticalLayout->addLayout(horizontalLayout);

        VentanaPrincipal->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(VentanaPrincipal);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        VentanaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VentanaPrincipal);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VentanaPrincipal->setStatusBar(statusBar);

        retranslateUi(VentanaPrincipal);

        QMetaObject::connectSlotsByName(VentanaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaPrincipal)
    {
        VentanaPrincipal->setWindowTitle(QApplication::translate("VentanaPrincipal", "VentanaPrincipal", 0, QApplication::UnicodeUTF8));
        labTitulo->setText(QApplication::translate("VentanaPrincipal", "Electr\303\263nica Aplicada III", 0, QApplication::UnicodeUTF8));
        labTitulo_2->setText(QApplication::translate("VentanaPrincipal", "Trabajo Pr\303\241ctico N\302\2602", 0, QApplication::UnicodeUTF8));
        labTitulo_3->setText(QApplication::translate("VentanaPrincipal", "Estado:", 0, QApplication::UnicodeUTF8));
        labEstado->setText(QApplication::translate("VentanaPrincipal", "Desconectado", 0, QApplication::UnicodeUTF8));
        labTitulo_4->setText(QApplication::translate("VentanaPrincipal", "\303\232ltimo DNI:", 0, QApplication::UnicodeUTF8));
        labDNI->setText(QApplication::translate("VentanaPrincipal", "-", 0, QApplication::UnicodeUTF8));
        btnConectar->setText(QApplication::translate("VentanaPrincipal", "Conectar", 0, QApplication::UnicodeUTF8));
        btnSalir->setText(QApplication::translate("VentanaPrincipal", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
