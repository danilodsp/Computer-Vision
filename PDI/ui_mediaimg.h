/********************************************************************************
** Form generated from reading UI file 'mediaimg.ui'
**
** Created: Tue 27. Nov 23:48:38 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIAIMG_H
#define UI_MEDIAIMG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaImg
{
public:
    QLabel *label_2;
    QTableWidget *tableWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_numeroImgs;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancelar;
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_add;
    QPushButton *pushButton_rem;

    void setupUi(QDialog *MediaImg)
    {
        if (MediaImg->objectName().isEmpty())
            MediaImg->setObjectName(QString::fromUtf8("MediaImg"));
        MediaImg->resize(357, 388);
        label_2 = new QLabel(MediaImg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 51, 16));
        tableWidget = new QTableWidget(MediaImg);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 90, 291, 211));
        widget = new QWidget(MediaImg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 142, 15));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_numeroImgs = new QLabel(widget);
        label_numeroImgs->setObjectName(QString::fromUtf8("label_numeroImgs"));

        gridLayout->addWidget(label_numeroImgs, 0, 1, 1, 1);

        widget1 = new QWidget(MediaImg);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(150, 330, 171, 27));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(15);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_ok = new QPushButton(widget1);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));

        gridLayout_2->addWidget(pushButton_ok, 0, 0, 1, 1);

        pushButton_cancelar = new QPushButton(widget1);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        gridLayout_2->addWidget(pushButton_cancelar, 0, 1, 1, 1);

        widget2 = new QWidget(MediaImg);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(220, 50, 101, 27));
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_add = new QPushButton(widget2);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_add->setFont(font);

        gridLayout_3->addWidget(pushButton_add, 0, 0, 1, 1);

        pushButton_rem = new QPushButton(widget2);
        pushButton_rem->setObjectName(QString::fromUtf8("pushButton_rem"));
        pushButton_rem->setFont(font);

        gridLayout_3->addWidget(pushButton_rem, 0, 1, 1, 1);


        retranslateUi(MediaImg);

        QMetaObject::connectSlotsByName(MediaImg);
    } // setupUi

    void retranslateUi(QDialog *MediaImg)
    {
        MediaImg->setWindowTitle(QApplication::translate("MediaImg", "M\303\251dia de imagens", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MediaImg", "Imagens:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MediaImg", "N\303\272mero de imagens:", 0, QApplication::UnicodeUTF8));
        label_numeroImgs->setText(QApplication::translate("MediaImg", "numero", 0, QApplication::UnicodeUTF8));
        pushButton_ok->setText(QApplication::translate("MediaImg", "Ok", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("MediaImg", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_add->setText(QApplication::translate("MediaImg", "+", 0, QApplication::UnicodeUTF8));
        pushButton_rem->setText(QApplication::translate("MediaImg", "-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MediaImg: public Ui_MediaImg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIAIMG_H
