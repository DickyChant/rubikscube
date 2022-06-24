/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QAction *actionAa;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QString::fromUtf8("game"));
        game->resize(800, 600);
        actionAa = new QAction(game);
        actionAa->setObjectName(QString::fromUtf8("actionAa"));
        centralwidget = new QWidget(game);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(84, 230, 101, 101));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(470, 150, 261, 61));
        lcdNumber->setDigitCount(8);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(640, 40, 75, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(630, 440, 75, 23));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(200, 230, 101, 101));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 200, 131, 20));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(30, 40, 421, 441));
        label_2->setFocusPolicy(Qt::NoFocus);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(640, 80, 75, 23));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(510, 300, 75, 23));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(640, 240, 75, 23));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(640, 280, 75, 23));
        game->setCentralWidget(centralwidget);
        label_2->raise();
        pushButton->raise();
        lcdNumber->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        label->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        menubar = new QMenuBar(game);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        game->setMenuBar(menubar);
        statusbar = new QStatusBar(game);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        game->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionAa);

        retranslateUi(game);

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QMainWindow *game)
    {
        game->setWindowTitle(QApplication::translate("game", "game", 0, QApplication::UnicodeUTF8));
        actionAa->setText(QApplication::translate("game", "\345\205\263\344\272\216\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("game", "\345\244\215\345\216\237", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("game", "\345\233\236\345\210\260\344\270\273\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QString());
        label->setText(QApplication::translate("game", "\347\202\271\345\207\273\351\255\224\346\226\271\345\274\200\345\247\213\346\270\270\346\210\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        pushButton_5->setText(QApplication::translate("game", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("game", "\350\257\273\346\241\243", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("game", "\346\232\202\345\201\234", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("game", "\345\274\200\345\247\213\350\256\241\346\227\266", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("game", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
