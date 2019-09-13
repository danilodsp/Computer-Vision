#ifndef PDI_H
#define PDI_H

#include <QtGui/QMainWindow>
#include <QLabel>
#include <QMovie>
#include <QImage>
#include <QPixmap>
#include <QColor>

#include <qfiledialog>

namespace Ui
{
    class pdi;
}

class pdi : public QMainWindow
{
    Q_OBJECT

public:
    pdi(QWidget *parent = 0);
    ~pdi();

    QLabel *label;
    QLabel *label_2;
    QMovie *movie;
    QString filename;

    QImage image1;
    QImage image2;

    QImage m1;
    QImage result;


private:
    Ui::pdi *ui;

public slots:
    void on_actionSair_activated();

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_actionAbrir_activated();
};

#endif // PDI_H
