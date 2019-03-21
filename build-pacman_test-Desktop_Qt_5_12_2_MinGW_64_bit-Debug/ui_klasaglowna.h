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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KlasaGlowna
{
public:
    QAction *actionnowa;
    QWidget *centralWidget;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuKlasaPierwsza;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KlasaGlowna)
    {
        if (KlasaGlowna->objectName().isEmpty())
            KlasaGlowna->setObjectName(QString::fromUtf8("KlasaGlowna"));
        KlasaGlowna->resize(400, 300);
        actionnowa = new QAction(KlasaGlowna);
        actionnowa->setObjectName(QString::fromUtf8("actionnowa"));
        centralWidget = new QWidget(KlasaGlowna);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(70, 30, 248, 169));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 210, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 210, 75, 23));
        KlasaGlowna->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KlasaGlowna);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 18));
        menuKlasaPierwsza = new QMenu(menuBar);
        menuKlasaPierwsza->setObjectName(QString::fromUtf8("menuKlasaPierwsza"));
        KlasaGlowna->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KlasaGlowna);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        KlasaGlowna->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KlasaGlowna);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        KlasaGlowna->setStatusBar(statusBar);

        menuBar->addAction(menuKlasaPierwsza->menuAction());

        retranslateUi(KlasaGlowna);

        QMetaObject::connectSlotsByName(KlasaGlowna);
    } // setupUi

    void retranslateUi(QMainWindow *KlasaGlowna)
    {
        KlasaGlowna->setWindowTitle(QApplication::translate("KlasaGlowna", "KlasaGlowna", nullptr));
        actionnowa->setText(QApplication::translate("KlasaGlowna", "nowa", nullptr));
        pushButton->setText(QApplication::translate("KlasaGlowna", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("KlasaGlowna", "PushButton", nullptr));
        menuKlasaPierwsza->setTitle(QApplication::translate("KlasaGlowna", "KlasaPierwsza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KlasaGlowna: public Ui_KlasaGlowna {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KLASAGLOWNA_H
