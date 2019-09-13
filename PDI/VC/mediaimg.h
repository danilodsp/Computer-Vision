#ifndef MEDIAIMG_H
#define MEDIAIMG_H

#include <QDialog>
#include <QTableWidgetItem>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
    class MediaImg;
}

class MediaImg : public QDialog
{
    Q_OBJECT

public:
    explicit MediaImg(QWidget *parent = 0);
    ~MediaImg();

public:
    int numImgs;
    QString texto;
    QString fileNames[64];
    int M[64];
    int N[64];
    //Flags
    bool isValid;

signals:
    void terminou();

private:
    Ui::MediaImg *ui;

private slots:
    void on_pushButton_ok_clicked();
    void on_pushButton_rem_clicked();
    void on_pushButton_add_clicked();
    void on_tableWidget_cellDoubleClicked(int row, int column);
    void on_pushButton_cancelar_clicked();
};

#endif // MEDIAIMG_H
