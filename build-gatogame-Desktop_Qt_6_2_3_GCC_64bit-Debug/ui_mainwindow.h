/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSair;
    QAction *actionJuego_Gatiano;
    QAction *actionQt_Framwork;
    QAction *actionFreepik;
    QAction *actionFreepik_2;
    QWidget *centralwidget;
    QFrame *frame_sel_opcion;
    QLabel *label_elige;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonO;
    QPushButton *pushButtonOK;
    QGraphicsView *graphicsView_gato;
    QLabel *label_tablero;
    QLabel *label_casilla_1;
    QLabel *label_casilla_2;
    QLabel *label_casilla_3;
    QLabel *label_casilla_4;
    QLabel *label_casilla_5;
    QLabel *label_casilla_6;
    QLabel *label_casilla_7;
    QLabel *label_casilla_8;
    QLabel *label_casilla_9;
    QMenuBar *menubar;
    QMenu *menuMenu_Gatiano;
    QMenu *menuAcerca;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(374, 424);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/gato-title.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionJuego_Gatiano = new QAction(MainWindow);
        actionJuego_Gatiano->setObjectName(QString::fromUtf8("actionJuego_Gatiano"));
        actionQt_Framwork = new QAction(MainWindow);
        actionQt_Framwork->setObjectName(QString::fromUtf8("actionQt_Framwork"));
        actionFreepik = new QAction(MainWindow);
        actionFreepik->setObjectName(QString::fromUtf8("actionFreepik"));
        actionFreepik_2 = new QAction(MainWindow);
        actionFreepik_2->setObjectName(QString::fromUtf8("actionFreepik_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame_sel_opcion = new QFrame(centralwidget);
        frame_sel_opcion->setObjectName(QString::fromUtf8("frame_sel_opcion"));
        frame_sel_opcion->setGeometry(QRect(20, 9, 331, 81));
        frame_sel_opcion->setFrameShape(QFrame::StyledPanel);
        frame_sel_opcion->setFrameShadow(QFrame::Raised);
        label_elige = new QLabel(frame_sel_opcion);
        label_elige->setObjectName(QString::fromUtf8("label_elige"));
        label_elige->setGeometry(QRect(20, 0, 131, 41));
        radioButtonX = new QRadioButton(frame_sel_opcion);
        radioButtonX->setObjectName(QString::fromUtf8("radioButtonX"));
        radioButtonX->setGeometry(QRect(190, 10, 41, 24));
        radioButtonO = new QRadioButton(frame_sel_opcion);
        radioButtonO->setObjectName(QString::fromUtf8("radioButtonO"));
        radioButtonO->setGeometry(QRect(190, 50, 41, 24));
        pushButtonOK = new QPushButton(frame_sel_opcion);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        pushButtonOK->setGeometry(QRect(20, 50, 80, 26));
        graphicsView_gato = new QGraphicsView(frame_sel_opcion);
        graphicsView_gato->setObjectName(QString::fromUtf8("graphicsView_gato"));
        graphicsView_gato->setGeometry(QRect(240, 0, 91, 81));
        graphicsView_gato->setStyleSheet(QString::fromUtf8("border-image: url(:/gato-negro.png);"));
        label_tablero = new QLabel(centralwidget);
        label_tablero->setObjectName(QString::fromUtf8("label_tablero"));
        label_tablero->setGeometry(QRect(40, 130, 291, 251));
        label_tablero->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);\n"
"border-image: url(:/cuadrado.png);\n"
""));
        label_casilla_1 = new QLabel(centralwidget);
        label_casilla_1->setObjectName(QString::fromUtf8("label_casilla_1"));
        label_casilla_1->setGeometry(QRect(60, 150, 61, 51));
        label_casilla_1->setLayoutDirection(Qt::LeftToRight);
        label_casilla_1->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Noto Sans\";"));
        label_casilla_1->setFrameShadow(QFrame::Plain);
        label_casilla_1->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_casilla_2 = new QLabel(centralwidget);
        label_casilla_2->setObjectName(QString::fromUtf8("label_casilla_2"));
        label_casilla_2->setGeometry(QRect(150, 150, 61, 51));
        label_casilla_2->setLayoutDirection(Qt::LeftToRight);
        label_casilla_2->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Noto Sans\";"));
        label_casilla_2->setFrameShadow(QFrame::Plain);
        label_casilla_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_casilla_3 = new QLabel(centralwidget);
        label_casilla_3->setObjectName(QString::fromUtf8("label_casilla_3"));
        label_casilla_3->setGeometry(QRect(250, 150, 61, 51));
        label_casilla_3->setLayoutDirection(Qt::LeftToRight);
        label_casilla_3->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Noto Sans\";"));
        label_casilla_3->setFrameShadow(QFrame::Plain);
        label_casilla_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_casilla_4 = new QLabel(centralwidget);
        label_casilla_4->setObjectName(QString::fromUtf8("label_casilla_4"));
        label_casilla_4->setGeometry(QRect(60, 230, 61, 51));
        label_casilla_4->setLayoutDirection(Qt::LeftToRight);
        label_casilla_4->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Noto Sans\";"));
        label_casilla_4->setFrameShadow(QFrame::Plain);
        label_casilla_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_casilla_5 = new QLabel(centralwidget);
        label_casilla_5->setObjectName(QString::fromUtf8("label_casilla_5"));
        label_casilla_5->setGeometry(QRect(150, 230, 71, 51));
        label_casilla_5->setLayoutDirection(Qt::LeftToRight);
        label_casilla_5->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Noto Sans\";"));
        label_casilla_5->setFrameShadow(QFrame::Plain);
        label_casilla_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_casilla_6 = new QLabel(centralwidget);
        label_casilla_6->setObjectName(QString::fromUtf8("label_casilla_6"));
        label_casilla_6->setGeometry(QRect(250, 230, 61, 51));
        label_casilla_6->setLayoutDirection(Qt::LeftToRight);
        label_casilla_6->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Noto Sans\";"));
        label_casilla_6->setFrameShadow(QFrame::Plain);
        label_casilla_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_casilla_7 = new QLabel(centralwidget);
        label_casilla_7->setObjectName(QString::fromUtf8("label_casilla_7"));
        label_casilla_7->setGeometry(QRect(60, 310, 61, 51));
        label_casilla_7->setLayoutDirection(Qt::LeftToRight);
        label_casilla_7->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Noto Sans\";"));
        label_casilla_7->setFrameShadow(QFrame::Plain);
        label_casilla_7->setAlignment(Qt::AlignCenter);
        label_casilla_8 = new QLabel(centralwidget);
        label_casilla_8->setObjectName(QString::fromUtf8("label_casilla_8"));
        label_casilla_8->setGeometry(QRect(150, 310, 71, 51));
        label_casilla_8->setLayoutDirection(Qt::LeftToRight);
        label_casilla_8->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Noto Sans\";"));
        label_casilla_8->setFrameShadow(QFrame::Plain);
        label_casilla_8->setAlignment(Qt::AlignCenter);
        label_casilla_9 = new QLabel(centralwidget);
        label_casilla_9->setObjectName(QString::fromUtf8("label_casilla_9"));
        label_casilla_9->setGeometry(QRect(250, 310, 61, 51));
        label_casilla_9->setLayoutDirection(Qt::LeftToRight);
        label_casilla_9->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Noto Sans\";"));
        label_casilla_9->setFrameShadow(QFrame::Plain);
        label_casilla_9->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 374, 23));
        menuMenu_Gatiano = new QMenu(menubar);
        menuMenu_Gatiano->setObjectName(QString::fromUtf8("menuMenu_Gatiano"));
        menuAcerca = new QMenu(menubar);
        menuAcerca->setObjectName(QString::fromUtf8("menuAcerca"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu_Gatiano->menuAction());
        menubar->addAction(menuAcerca->menuAction());
        menuMenu_Gatiano->addAction(actionSair);
        menuAcerca->addAction(actionJuego_Gatiano);
        menuAcerca->addAction(actionQt_Framwork);
        menuAcerca->addSeparator();
        menuAcerca->addAction(actionFreepik_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Juego Gatiano", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        actionJuego_Gatiano->setText(QCoreApplication::translate("MainWindow", "Juego Gatiano", nullptr));
        actionQt_Framwork->setText(QCoreApplication::translate("MainWindow", "Qt Framwork", nullptr));
        actionFreepik->setText(QCoreApplication::translate("MainWindow", "Freepik", nullptr));
        actionFreepik_2->setText(QCoreApplication::translate("MainWindow", "Freepik", nullptr));
        label_elige->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Elige sabiamente</span></p></body></html>", nullptr));
        radioButtonX->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        radioButtonO->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        label_tablero->setText(QString());
        label_casilla_1->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_casilla_2->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_casilla_3->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_casilla_4->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_casilla_5->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_casilla_6->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_casilla_7->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_casilla_8->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_casilla_9->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        menuMenu_Gatiano->setTitle(QCoreApplication::translate("MainWindow", "Menu Gatiano", nullptr));
        menuAcerca->setTitle(QCoreApplication::translate("MainWindow", "Acerca", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
