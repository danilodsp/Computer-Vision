/********************************************************************************
** Form generated from reading UI file 'sobre.ui'
**
** Created: Tue 27. Nov 23:48:38 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOBRE_H
#define UI_SOBRE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sobre
{
public:
    QLabel *logo;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *sobre)
    {
        if (sobre->objectName().isEmpty())
            sobre->setObjectName(QString::fromUtf8("sobre"));
        sobre->resize(454, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/PDI.ico"), QSize(), QIcon::Normal, QIcon::Off);
        sobre->setWindowIcon(icon);
        logo = new QLabel(sobre);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(40, 30, 61, 71));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/imagens/logo.jpg")));
        label_2 = new QLabel(sobre);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 40, 321, 151));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pushButton = new QPushButton(sobre);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 250, 75, 23));

        retranslateUi(sobre);

        QMetaObject::connectSlotsByName(sobre);
    } // setupUi

    void retranslateUi(QDialog *sobre)
    {
        sobre->setWindowTitle(QApplication::translate("sobre", "Sobre", 0, QApplication::UnicodeUTF8));
        logo->setText(QString());
        label_2->setText(QApplication::translate("sobre", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">UFRN</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">T\303\223PICOS ESPECIAIS EM PROCESSAMENTO DIGITAL DE IMAGENS</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-in"
                        "dent:0px;\"><span style=\" font-size:8pt;\">OBJETIVO: Analisar e implementar os algoritmos de processamento </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">de imagens.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">VERS\303\203O:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("sobre", "Fechar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class sobre: public Ui_sobre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOBRE_H
