/********************************************************************************
** Form generated from reading UI file 'klasaglowna.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KLASAGLOWNA_H
#define UI_KLASAGLOWNA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KlasaGlowna
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KlasaGlowna)
    {
        if (KlasaGlowna->objectName().isEmpty())
            KlasaGlowna->setObjectName(QString::fromUtf8("KlasaGlowna"));
        KlasaGlowna->resize(685, 449);
        KlasaGlowna->setProperty("przycisk", QVariant(true));
        KlasaGlowna->setProperty("test", QVariant(QByteArray("")));
        centralWidget = new QWidget(KlasaGlowna);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 70, 75, 23));
        KlasaGlowna->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KlasaGlowna);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 685, 18));
        KlasaGlowna->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KlasaGlowna);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        KlasaGlowna->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KlasaGlowna);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        KlasaGlowna->setStatusBar(statusBar);

        retranslateUi(KlasaGlowna);
        QObject::connect(pushButton, SIGNAL(clicked()), KlasaGlowna, SLOT(close()));

        QMetaObject::connectSlotsByName(KlasaGlowna);
    } // setupUi

    void retranslateUi(QMainWindow *KlasaGlowna)
    {
        KlasaGlowna->setWindowTitle(QApplication::translate("KlasaGlowna", "KlasaGlowna", nullptr));
        KlasaGlowna->setProperty("szxcz", QVariant(QString()));
        pushButton->setText(QApplication::translate("KlasaGlowna", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KlasaGlowna: public Ui_KlasaGlowna {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KLASAGLOWNA_H
