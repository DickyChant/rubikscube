/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow2
{
public:
    QAction *actionA;
    QAction *actionA_2;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainwindow2)
    {
        if (mainwindow2->objectName().isEmpty())
            mainwindow2->setObjectName(QString::fromUtf8("mainwindow2"));
        mainwindow2->resize(193, 237);
        mainwindow2->setStyleSheet(QString::fromUtf8("font: 12pt \"Adobe \344\273\277\345\256\213 Std R\";"));
        actionA = new QAction(mainwindow2);
        actionA->setObjectName(QString::fromUtf8("actionA"));
        actionA_2 = new QAction(mainwindow2);
        actionA_2->setObjectName(QString::fromUtf8("actionA_2"));
        centralwidget = new QWidget(mainwindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        mainwindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 193, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        mainwindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(mainwindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainwindow2->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionA);
        menu_2->addAction(actionA_2);

        retranslateUi(mainwindow2);

        QMetaObject::connectSlotsByName(mainwindow2);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow2)
    {
        mainwindow2->setWindowTitle(QApplication::translate("mainwindow2", "mainwindow", 0, QApplication::UnicodeUTF8));
        actionA->setText(QApplication::translate("mainwindow2", "\347\216\251\344\270\252\351\255\224\346\226\271\350\277\230\350\246\201\345\270\256\345\212\251\357\274\237", 0, QApplication::UnicodeUTF8));
        actionA_2->setText(QApplication::translate("mainwindow2", "\345\274\200\345\217\221\344\272\272\345\221\230", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("mainwindow2", "\345\215\225\346\234\272\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("mainwindow2", "\350\201\224\346\234\272\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("mainwindow2", "\346\233\264\346\224\271\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("mainwindow2", "\351\207\215\346\226\260\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("mainwindow2", "\351\200\200\345\207\272\346\270\270\346\210\217", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("mainwindow2", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("mainwindow2", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainwindow2: public Ui_mainwindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
