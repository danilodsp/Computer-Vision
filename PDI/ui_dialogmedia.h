/********************************************************************************
** Form generated from reading UI file 'dialogmedia.ui'
**
** Created: Tue 27. Nov 23:48:38 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMEDIA_H
#define UI_DIALOGMEDIA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogMedia
{
public:
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancelar;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_tamMask;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_ganho;

    void setupUi(QDialog *dialogMedia)
    {
        if (dialogMedia->objectName().isEmpty())
            dialogMedia->setObjectName(QString::fromUtf8("dialogMedia"));
        dialogMedia->resize(307, 327);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/PDI.ico"), QSize(), QIcon::Normal, QIcon::Off);
        dialogMedia->setWindowIcon(icon);
        pushButton_ok = new QPushButton(dialogMedia);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(120, 290, 75, 23));
        pushButton_cancelar = new QPushButton(dialogMedia);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));
        pushButton_cancelar->setGeometry(QRect(210, 290, 75, 23));
        label_3 = new QLabel(dialogMedia);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 51, 16));
        tableWidget = new QTableWidget(dialogMedia);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 110, 241, 161));
        layoutWidget = new QWidget(dialogMedia);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 231, 22));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_tamMask = new QLineEdit(layoutWidget);
        lineEdit_tamMask->setObjectName(QString::fromUtf8("lineEdit_tamMask"));

        gridLayout->addWidget(lineEdit_tamMask, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(dialogMedia);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 50, 153, 22));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_ganho = new QLineEdit(layoutWidget1);
        lineEdit_ganho->setObjectName(QString::fromUtf8("lineEdit_ganho"));

        gridLayout_2->addWidget(lineEdit_ganho, 0, 1, 1, 1);


        retranslateUi(dialogMedia);

        QMetaObject::connectSlotsByName(dialogMedia);
    } // setupUi

    void retranslateUi(QDialog *dialogMedia)
    {
        dialogMedia->setWindowTitle(QApplication::translate("dialogMedia", "Filtro da m\303\251dia", 0, QApplication::UnicodeUTF8));
        pushButton_ok->setText(QApplication::translate("dialogMedia", "Ok", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("dialogMedia", "Cancelar", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dialogMedia", "M\303\241scara:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialogMedia", "Tamanho da m\303\241scara:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dialogMedia", "Ganho:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialogMedia: public Ui_dialogMedia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMEDIA_H
