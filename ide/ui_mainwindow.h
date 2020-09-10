/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_n;
    QAction *action_op;
    QAction *action_save;
    QAction *action_sava;
    QAction *action_redo;
    QAction *action_reg;
    QAction *action_cut;
    QAction *action_cpy;
    QAction *action_pst;
    QAction *action_sal;
    QAction *action_sdfs;
    QAction *action_cann;
    QAction *action_ind;
    QAction *action_cind;
    QAction *action_srh;
    QAction *action_display;
    QAction *action_fs;
    QAction *action_edit;
    QAction *action_4;
    QAction *actionyunxing;
    QAction *action_run;
    QAction *action_cpr;
    QAction *actioncmc;
    QAction *actionyyf;
    QAction *actionjcy;
    QAction *actionyjr;
    QAction *actionmmy;
    QAction *actionquanping_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;
    QTextEdit *textEdit;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menu_file;
    QMenu *menu_edit;
    QMenu *menu_search;
    QMenu *menu_view;
    QMenu *menu_run;
    QMenu *menu_aboutus;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(851, 704);
        action_n = new QAction(MainWindow);
        action_n->setObjectName(QStringLiteral("action_n"));
        action_op = new QAction(MainWindow);
        action_op->setObjectName(QStringLiteral("action_op"));
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QStringLiteral("action_save"));
        action_sava = new QAction(MainWindow);
        action_sava->setObjectName(QStringLiteral("action_sava"));
        action_redo = new QAction(MainWindow);
        action_redo->setObjectName(QStringLiteral("action_redo"));
        action_reg = new QAction(MainWindow);
        action_reg->setObjectName(QStringLiteral("action_reg"));
        action_cut = new QAction(MainWindow);
        action_cut->setObjectName(QStringLiteral("action_cut"));
        action_cpy = new QAction(MainWindow);
        action_cpy->setObjectName(QStringLiteral("action_cpy"));
        action_pst = new QAction(MainWindow);
        action_pst->setObjectName(QStringLiteral("action_pst"));
        action_sal = new QAction(MainWindow);
        action_sal->setObjectName(QStringLiteral("action_sal"));
        action_sdfs = new QAction(MainWindow);
        action_sdfs->setObjectName(QStringLiteral("action_sdfs"));
        action_cann = new QAction(MainWindow);
        action_cann->setObjectName(QStringLiteral("action_cann"));
        action_ind = new QAction(MainWindow);
        action_ind->setObjectName(QStringLiteral("action_ind"));
        action_cind = new QAction(MainWindow);
        action_cind->setObjectName(QStringLiteral("action_cind"));
        action_srh = new QAction(MainWindow);
        action_srh->setObjectName(QStringLiteral("action_srh"));
        action_display = new QAction(MainWindow);
        action_display->setObjectName(QStringLiteral("action_display"));
        action_fs = new QAction(MainWindow);
        action_fs->setObjectName(QStringLiteral("action_fs"));
        action_edit = new QAction(MainWindow);
        action_edit->setObjectName(QStringLiteral("action_edit"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        actionyunxing = new QAction(MainWindow);
        actionyunxing->setObjectName(QStringLiteral("actionyunxing"));
        action_run = new QAction(MainWindow);
        action_run->setObjectName(QStringLiteral("action_run"));
        action_cpr = new QAction(MainWindow);
        action_cpr->setObjectName(QStringLiteral("action_cpr"));
        actioncmc = new QAction(MainWindow);
        actioncmc->setObjectName(QStringLiteral("actioncmc"));
        actionyyf = new QAction(MainWindow);
        actionyyf->setObjectName(QStringLiteral("actionyyf"));
        actionjcy = new QAction(MainWindow);
        actionjcy->setObjectName(QStringLiteral("actionjcy"));
        actionyjr = new QAction(MainWindow);
        actionyjr->setObjectName(QStringLiteral("actionyjr"));
        actionmmy = new QAction(MainWindow);
        actionmmy->setObjectName(QStringLiteral("actionmmy"));
        actionquanping_2 = new QAction(MainWindow);
        actionquanping_2->setObjectName(QStringLiteral("actionquanping_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout->addWidget(treeWidget);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 6);

        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 2);

        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 851, 26));
        menu_file = new QMenu(menubar);
        menu_file->setObjectName(QStringLiteral("menu_file"));
        menu_file->setGeometry(QRect(339, 116, 137, 168));
        menu_edit = new QMenu(menubar);
        menu_edit->setObjectName(QStringLiteral("menu_edit"));
        menu_search = new QMenu(menubar);
        menu_search->setObjectName(QStringLiteral("menu_search"));
        menu_view = new QMenu(menubar);
        menu_view->setObjectName(QStringLiteral("menu_view"));
        menu_run = new QMenu(menubar);
        menu_run->setObjectName(QStringLiteral("menu_run"));
        menu_aboutus = new QMenu(menubar);
        menu_aboutus->setObjectName(QStringLiteral("menu_aboutus"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_file->menuAction());
        menubar->addAction(menu_edit->menuAction());
        menubar->addAction(menu_search->menuAction());
        menubar->addAction(menu_view->menuAction());
        menubar->addAction(menu_run->menuAction());
        menubar->addAction(menu_aboutus->menuAction());
        menu_file->addSeparator();
        menu_file->addAction(action_n);
        menu_file->addAction(action_op);
        menu_file->addAction(action_save);
        menu_file->addAction(action_sava);
        menu_file->addSeparator();
        menu_edit->addAction(action_redo);
        menu_edit->addAction(action_reg);
        menu_edit->addAction(action_cut);
        menu_edit->addAction(action_cpy);
        menu_edit->addAction(action_pst);
        menu_edit->addAction(action_sal);
        menu_edit->addAction(action_sdfs);
        menu_edit->addAction(action_cann);
        menu_edit->addAction(action_ind);
        menu_edit->addAction(action_cind);
        menu_search->addAction(action_srh);
        menu_search->addAction(action_display);
        menu_view->addAction(action_fs);
        menu_run->addAction(action_edit);
        menu_run->addAction(action_run);
        menu_run->addAction(action_cpr);
        menu_aboutus->addAction(actioncmc);
        menu_aboutus->addAction(actionyyf);
        menu_aboutus->addAction(actionjcy);
        menu_aboutus->addAction(actionyjr);
        menu_aboutus->addAction(actionmmy);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_n->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
        action_n->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
        action_op->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        action_op->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        action_save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        action_save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        action_sava->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", Q_NULLPTR));
        action_redo->setText(QApplication::translate("MainWindow", "\351\207\215\345\201\232", Q_NULLPTR));
        action_redo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", Q_NULLPTR));
        action_reg->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215", Q_NULLPTR));
        action_cut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
        action_cut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
        action_cpy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
        action_cpy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
        action_pst->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
        action_pst->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
        action_sal->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
        action_sal->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
        action_sdfs->setText(QApplication::translate("MainWindow", "\346\263\250\351\207\212", Q_NULLPTR));
        action_cann->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210\346\263\250\351\207\212", Q_NULLPTR));
        action_ind->setText(QApplication::translate("MainWindow", "\347\274\251\350\277\233", Q_NULLPTR));
        action_cind->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210\347\274\251\350\277\233", Q_NULLPTR));
        action_srh->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", Q_NULLPTR));
        action_srh->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
        action_display->setText(QApplication::translate("MainWindow", "\346\233\277\346\215\242", Q_NULLPTR));
        action_display->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
        action_fs->setText(QApplication::translate("MainWindow", "\345\205\250\345\261\217", Q_NULLPTR));
        action_edit->setText(QApplication::translate("MainWindow", "\347\274\226\350\257\221", Q_NULLPTR));
        action_4->setText(QString());
        actionyunxing->setText(QApplication::translate("MainWindow", "yunxing", Q_NULLPTR));
        action_run->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214", Q_NULLPTR));
        action_cpr->setText(QApplication::translate("MainWindow", "\347\274\226\350\257\221\350\277\220\350\241\214", Q_NULLPTR));
        actioncmc->setText(QApplication::translate("MainWindow", "\351\231\210\346\230\216\347\201\277", Q_NULLPTR));
        actionyyf->setText(QApplication::translate("MainWindow", "\346\235\250\351\200\270\351\243\236", Q_NULLPTR));
        actionjcy->setText(QApplication::translate("MainWindow", "\351\207\221\350\276\260\351\233\250", Q_NULLPTR));
        actionyjr->setText(QApplication::translate("MainWindow", "\351\227\253\346\206\254\347\235\277", Q_NULLPTR));
        actionmmy->setText(QApplication::translate("MainWindow", "\351\251\254\346\230\216\351\230\263", Q_NULLPTR));
        actionquanping_2->setText(QApplication::translate("MainWindow", "quanping", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "No.", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "\346\226\207\344\273\266\350\267\257\345\276\204", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\345\215\225\345\205\203", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\344\277\241\346\201\257", Q_NULLPTR));
        menu_file->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_edit->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_search->setTitle(QApplication::translate("MainWindow", "\346\220\234\347\264\242", Q_NULLPTR));
        menu_view->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276", Q_NULLPTR));
        menu_run->setTitle(QApplication::translate("MainWindow", "\350\277\220\350\241\214", Q_NULLPTR));
        menu_aboutus->setTitle(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\210\221\344\273\254", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
