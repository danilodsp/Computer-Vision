/********************************************************************************
** Form generated from reading UI file 'pdi.ui'
**
** Created: Tue 27. Nov 23:48:38 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDI_H
#define UI_PDI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PDI
{
public:
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionSair;
    QAction *actionNegativa;
    QAction *actionLog;
    QAction *actionPotencia;
    QAction *actionEqlHist;
    QAction *actionAjuda;
    QAction *actionSobre;
    QAction *actionOpcoes;
    QAction *actionMedia;
    QAction *actionSubtracao;
    QAction *actionMediaVC;
    QAction *actionMediana;
    QAction *actionRoberts;
    QAction *actionSobel;
    QAction *actionLaplaciano;
    QAction *actionCam;
    QAction *actionButterworth;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *imagem;
    QGroupBox *groupBox_2;
    QLabel *imagem2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPlainTextEdit *console;
    QWidget *tab_2;
    QCheckBox *checkBox_showHistCons;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_larg;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLabel *label_alt;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QLabel *label_depth;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QLabel *label_numCores;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout;
    QPushButton *visImg1;
    QPushButton *visHist1;
    QPushButton *remImg1;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_2;
    QPushButton *visImg2;
    QPushButton *visHist2;
    QSlider *slider_t1;
    QSlider *slider_t2;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuOpera_es;
    QMenu *menuTransforma_es_b_sicas;
    QMenu *menuFiltros;
    QMenu *menuAritm_tica;
    QMenu *menuDetec_o_de_bordas;
    QMenu *menuFiltros_Frequ_ncia;
    QMenu *menuAjuda;
    QMenu *menuConfigura_es;
    QMenu *menuVis_o_Computacional;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PDI)
    {
        if (PDI->objectName().isEmpty())
            PDI->setObjectName(QString::fromUtf8("PDI"));
        PDI->resize(861, 573);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/PDI.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PDI->setWindowIcon(icon);
        PDI->setIconSize(QSize(48, 48));
        actionAbrir = new QAction(PDI);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionSalvar = new QAction(PDI);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionSair = new QAction(PDI);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionNegativa = new QAction(PDI);
        actionNegativa->setObjectName(QString::fromUtf8("actionNegativa"));
        actionLog = new QAction(PDI);
        actionLog->setObjectName(QString::fromUtf8("actionLog"));
        actionPotencia = new QAction(PDI);
        actionPotencia->setObjectName(QString::fromUtf8("actionPotencia"));
        actionEqlHist = new QAction(PDI);
        actionEqlHist->setObjectName(QString::fromUtf8("actionEqlHist"));
        actionAjuda = new QAction(PDI);
        actionAjuda->setObjectName(QString::fromUtf8("actionAjuda"));
        actionSobre = new QAction(PDI);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        actionOpcoes = new QAction(PDI);
        actionOpcoes->setObjectName(QString::fromUtf8("actionOpcoes"));
        actionOpcoes->setEnabled(false);
        actionMedia = new QAction(PDI);
        actionMedia->setObjectName(QString::fromUtf8("actionMedia"));
        actionSubtracao = new QAction(PDI);
        actionSubtracao->setObjectName(QString::fromUtf8("actionSubtracao"));
        actionMediaVC = new QAction(PDI);
        actionMediaVC->setObjectName(QString::fromUtf8("actionMediaVC"));
        actionMediana = new QAction(PDI);
        actionMediana->setObjectName(QString::fromUtf8("actionMediana"));
        actionRoberts = new QAction(PDI);
        actionRoberts->setObjectName(QString::fromUtf8("actionRoberts"));
        actionSobel = new QAction(PDI);
        actionSobel->setObjectName(QString::fromUtf8("actionSobel"));
        actionLaplaciano = new QAction(PDI);
        actionLaplaciano->setObjectName(QString::fromUtf8("actionLaplaciano"));
        actionCam = new QAction(PDI);
        actionCam->setObjectName(QString::fromUtf8("actionCam"));
        actionButterworth = new QAction(PDI);
        actionButterworth->setObjectName(QString::fromUtf8("actionButterworth"));
        centralWidget = new QWidget(PDI);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 371, 331));
        imagem = new QLabel(groupBox);
        imagem->setObjectName(QString::fromUtf8("imagem"));
        imagem->setGeometry(QRect(30, 30, 321, 281));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(460, 20, 371, 331));
        imagem2 = new QLabel(groupBox_2);
        imagem2->setObjectName(QString::fromUtf8("imagem2"));
        imagem2->setGeometry(QRect(30, 30, 321, 281));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 409, 861, 111));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        console = new QPlainTextEdit(tab);
        console->setObjectName(QString::fromUtf8("console"));
        console->setGeometry(QRect(0, 0, 851, 81));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        checkBox_showHistCons = new QCheckBox(tab_2);
        checkBox_showHistCons->setObjectName(QString::fromUtf8("checkBox_showHistCons"));
        checkBox_showHistCons->setGeometry(QRect(160, 30, 201, 18));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 111, 16));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_larg = new QLabel(layoutWidget);
        label_larg->setObjectName(QString::fromUtf8("label_larg"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_larg->sizePolicy().hasHeightForWidth());
        label_larg->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_larg, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 111, 16));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        label_alt = new QLabel(layoutWidget1);
        label_alt->setObjectName(QString::fromUtf8("label_alt"));
        sizePolicy.setHeightForWidth(label_alt->sizePolicy().hasHeightForWidth());
        label_alt->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_alt, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 50, 111, 16));
        gridLayout_5 = new QGridLayout(layoutWidget2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        label_depth = new QLabel(layoutWidget2);
        label_depth->setObjectName(QString::fromUtf8("label_depth"));
        sizePolicy.setHeightForWidth(label_depth->sizePolicy().hasHeightForWidth());
        label_depth->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_depth, 0, 1, 1, 1);

        layoutWidget3 = new QWidget(tab_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(160, 10, 171, 16));
        gridLayout_6 = new QGridLayout(layoutWidget3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        label_numCores = new QLabel(layoutWidget3);
        label_numCores->setObjectName(QString::fromUtf8("label_numCores"));
        sizePolicy.setHeightForWidth(label_numCores->sizePolicy().hasHeightForWidth());
        label_numCores->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label_numCores, 0, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(21, 360, 331, 25));
        gridLayout = new QGridLayout(layoutWidget4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(15);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        visImg1 = new QPushButton(layoutWidget4);
        visImg1->setObjectName(QString::fromUtf8("visImg1"));
        visImg1->setEnabled(false);

        gridLayout->addWidget(visImg1, 0, 0, 1, 1);

        visHist1 = new QPushButton(layoutWidget4);
        visHist1->setObjectName(QString::fromUtf8("visHist1"));
        visHist1->setEnabled(false);

        gridLayout->addWidget(visHist1, 0, 1, 1, 1);

        remImg1 = new QPushButton(layoutWidget4);
        remImg1->setObjectName(QString::fromUtf8("remImg1"));
        remImg1->setEnabled(false);

        gridLayout->addWidget(remImg1, 0, 2, 1, 1);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(462, 360, 221, 25));
        gridLayout_2 = new QGridLayout(layoutWidget5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(15);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        visImg2 = new QPushButton(layoutWidget5);
        visImg2->setObjectName(QString::fromUtf8("visImg2"));
        visImg2->setEnabled(false);

        gridLayout_2->addWidget(visImg2, 0, 0, 1, 1);

        visHist2 = new QPushButton(layoutWidget5);
        visHist2->setObjectName(QString::fromUtf8("visHist2"));
        visHist2->setEnabled(false);

        gridLayout_2->addWidget(visHist2, 0, 1, 1, 1);

        slider_t1 = new QSlider(centralWidget);
        slider_t1->setObjectName(QString::fromUtf8("slider_t1"));
        slider_t1->setGeometry(QRect(400, 120, 16, 160));
        slider_t1->setMaximum(255);
        slider_t1->setSliderPosition(40);
        slider_t1->setOrientation(Qt::Vertical);
        slider_t2 = new QSlider(centralWidget);
        slider_t2->setObjectName(QString::fromUtf8("slider_t2"));
        slider_t2->setGeometry(QRect(430, 120, 16, 160));
        slider_t2->setMaximum(255);
        slider_t2->setSliderPosition(20);
        slider_t2->setOrientation(Qt::Vertical);
        PDI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PDI);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 861, 18));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuOpera_es = new QMenu(menuBar);
        menuOpera_es->setObjectName(QString::fromUtf8("menuOpera_es"));
        menuTransforma_es_b_sicas = new QMenu(menuOpera_es);
        menuTransforma_es_b_sicas->setObjectName(QString::fromUtf8("menuTransforma_es_b_sicas"));
        menuFiltros = new QMenu(menuOpera_es);
        menuFiltros->setObjectName(QString::fromUtf8("menuFiltros"));
        menuAritm_tica = new QMenu(menuOpera_es);
        menuAritm_tica->setObjectName(QString::fromUtf8("menuAritm_tica"));
        menuDetec_o_de_bordas = new QMenu(menuOpera_es);
        menuDetec_o_de_bordas->setObjectName(QString::fromUtf8("menuDetec_o_de_bordas"));
        menuFiltros_Frequ_ncia = new QMenu(menuOpera_es);
        menuFiltros_Frequ_ncia->setObjectName(QString::fromUtf8("menuFiltros_Frequ_ncia"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QString::fromUtf8("menuAjuda"));
        menuConfigura_es = new QMenu(menuBar);
        menuConfigura_es->setObjectName(QString::fromUtf8("menuConfigura_es"));
        menuVis_o_Computacional = new QMenu(menuBar);
        menuVis_o_Computacional->setObjectName(QString::fromUtf8("menuVis_o_Computacional"));
        PDI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PDI);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PDI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PDI);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PDI->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuOpera_es->menuAction());
        menuBar->addAction(menuVis_o_Computacional->menuAction());
        menuBar->addAction(menuConfigura_es->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuOpera_es->addAction(menuTransforma_es_b_sicas->menuAction());
        menuOpera_es->addAction(actionEqlHist);
        menuOpera_es->addAction(menuAritm_tica->menuAction());
        menuOpera_es->addAction(menuFiltros->menuAction());
        menuOpera_es->addAction(menuDetec_o_de_bordas->menuAction());
        menuOpera_es->addAction(actionCam);
        menuOpera_es->addAction(menuFiltros_Frequ_ncia->menuAction());
        menuTransforma_es_b_sicas->addAction(actionNegativa);
        menuTransforma_es_b_sicas->addAction(actionLog);
        menuTransforma_es_b_sicas->addAction(actionPotencia);
        menuFiltros->addAction(actionMedia);
        menuFiltros->addAction(actionMediana);
        menuAritm_tica->addAction(actionSubtracao);
        menuDetec_o_de_bordas->addAction(actionRoberts);
        menuDetec_o_de_bordas->addAction(actionSobel);
        menuDetec_o_de_bordas->addAction(actionLaplaciano);
        menuFiltros_Frequ_ncia->addAction(actionButterworth);
        menuAjuda->addAction(actionAjuda);
        menuAjuda->addAction(actionSobre);
        menuConfigura_es->addAction(actionOpcoes);
        menuVis_o_Computacional->addAction(actionMediaVC);

        retranslateUi(PDI);
        QObject::connect(actionSair, SIGNAL(triggered(bool)), PDI, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PDI);
    } // setupUi

    void retranslateUi(QMainWindow *PDI)
    {
        PDI->setWindowTitle(QApplication::translate("PDI", "PDI", 0, QApplication::UnicodeUTF8));
        actionAbrir->setText(QApplication::translate("PDI", "Abrir...", 0, QApplication::UnicodeUTF8));
        actionSalvar->setText(QApplication::translate("PDI", "Salvar...", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("PDI", "Sair", 0, QApplication::UnicodeUTF8));
        actionNegativa->setText(QApplication::translate("PDI", "Negativa", 0, QApplication::UnicodeUTF8));
        actionLog->setText(QApplication::translate("PDI", "Log", 0, QApplication::UnicodeUTF8));
        actionPotencia->setText(QApplication::translate("PDI", "Pot\303\252ncia", 0, QApplication::UnicodeUTF8));
        actionEqlHist->setText(QApplication::translate("PDI", "Equaliza\303\247\303\243o do histograma", 0, QApplication::UnicodeUTF8));
        actionAjuda->setText(QApplication::translate("PDI", "Ajuda", 0, QApplication::UnicodeUTF8));
        actionSobre->setText(QApplication::translate("PDI", "Sobre", 0, QApplication::UnicodeUTF8));
        actionOpcoes->setText(QApplication::translate("PDI", "Op\303\247\303\265es...", 0, QApplication::UnicodeUTF8));
        actionMedia->setText(QApplication::translate("PDI", "M\303\251dia", 0, QApplication::UnicodeUTF8));
        actionSubtracao->setText(QApplication::translate("PDI", "Subtra\303\247\303\243o...", 0, QApplication::UnicodeUTF8));
        actionMediaVC->setText(QApplication::translate("PDI", "M\303\251dia", 0, QApplication::UnicodeUTF8));
        actionMediana->setText(QApplication::translate("PDI", "Mediana", 0, QApplication::UnicodeUTF8));
        actionRoberts->setText(QApplication::translate("PDI", "Roberts", 0, QApplication::UnicodeUTF8));
        actionSobel->setText(QApplication::translate("PDI", "Sobel", 0, QApplication::UnicodeUTF8));
        actionLaplaciano->setText(QApplication::translate("PDI", "Laplaciano", 0, QApplication::UnicodeUTF8));
        actionCam->setText(QApplication::translate("PDI", "Cam", 0, QApplication::UnicodeUTF8));
        actionButterworth->setText(QApplication::translate("PDI", "Butterworth", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PDI", "Imagem de entrada", 0, QApplication::UnicodeUTF8));
        imagem->setText(QString());
        groupBox_2->setTitle(QApplication::translate("PDI", "Imagem de sa\303\255da", 0, QApplication::UnicodeUTF8));
        imagem2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PDI", "Console", 0, QApplication::UnicodeUTF8));
        checkBox_showHistCons->setText(QApplication::translate("PDI", "Mostrar no console valores dos pixels", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PDI", "Largura:", 0, QApplication::UnicodeUTF8));
        label_larg->setText(QString());
        label_2->setText(QApplication::translate("PDI", "Altura:", 0, QApplication::UnicodeUTF8));
        label_alt->setText(QString());
        label_3->setText(QApplication::translate("PDI", "Depth:", 0, QApplication::UnicodeUTF8));
        label_depth->setText(QString());
        label_4->setText(QApplication::translate("PDI", "N\303\272mero de cores:", 0, QApplication::UnicodeUTF8));
        label_numCores->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PDI", "Propriedades", 0, QApplication::UnicodeUTF8));
        visImg1->setText(QApplication::translate("PDI", "Visualizar imagem", 0, QApplication::UnicodeUTF8));
        visHist1->setText(QApplication::translate("PDI", "Visualizar Histograma", 0, QApplication::UnicodeUTF8));
        remImg1->setText(QApplication::translate("PDI", "Remover imagem", 0, QApplication::UnicodeUTF8));
        visImg2->setText(QApplication::translate("PDI", "Visualizar imagem", 0, QApplication::UnicodeUTF8));
        visHist2->setText(QApplication::translate("PDI", "Visualizar Histograma", 0, QApplication::UnicodeUTF8));
        menuArquivo->setTitle(QApplication::translate("PDI", "Arquivo", 0, QApplication::UnicodeUTF8));
        menuOpera_es->setTitle(QApplication::translate("PDI", "Opera\303\247\303\265es", 0, QApplication::UnicodeUTF8));
        menuTransforma_es_b_sicas->setTitle(QApplication::translate("PDI", "Transforma\303\247\303\265es b\303\241sicas", 0, QApplication::UnicodeUTF8));
        menuFiltros->setTitle(QApplication::translate("PDI", "Filtros", 0, QApplication::UnicodeUTF8));
        menuAritm_tica->setTitle(QApplication::translate("PDI", "Aritm\303\251tica", 0, QApplication::UnicodeUTF8));
        menuDetec_o_de_bordas->setTitle(QApplication::translate("PDI", "Detec\303\247\303\243o de bordas", 0, QApplication::UnicodeUTF8));
        menuFiltros_Frequ_ncia->setTitle(QApplication::translate("PDI", "Filtros Frequ\303\252ncia", 0, QApplication::UnicodeUTF8));
        menuAjuda->setTitle(QApplication::translate("PDI", "Ajuda", 0, QApplication::UnicodeUTF8));
        menuConfigura_es->setTitle(QApplication::translate("PDI", "Configura\303\247\303\265es", 0, QApplication::UnicodeUTF8));
        menuVis_o_Computacional->setTitle(QApplication::translate("PDI", "Vis\303\243o Computacional", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PDI: public Ui_PDI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDI_H
