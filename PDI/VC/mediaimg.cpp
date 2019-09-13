#include "mediaimg.h"
#include "ui_mediaimg.h"

MediaImg::MediaImg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MediaImg)
{
    ui->setupUi(this);

    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setRowHeight(0, 20);
    ui->tableWidget->setColumnWidth(0, ui->tableWidget->width());

    numImgs = 1;
    isValid = false;

    texto.setNum(numImgs);
    ui->label_numeroImgs->setText(texto);
}

MediaImg::~MediaImg()
{
    delete ui;
}

void MediaImg::on_pushButton_cancelar_clicked()
{
    this->close();
}

void MediaImg::on_tableWidget_cellDoubleClicked(int row, int column)
{
    QImage imagemTest;
    QString fn = QFileDialog::getOpenFileName(this, tr("Abrir imagem"), "C:\\", "Imagens (*.jpg *.png *.pgm)", NULL);
    imagemTest.load(fn);
    M[row] = imagemTest.width();
    N[row] = imagemTest.height();

    if(!imagemTest.isNull()){
        if(row>0){
            if((M[row]==M[0])&(N[row]==N[0])){
                isValid = true;
                ui->tableWidget->setItem(row,column,new QTableWidgetItem());
                ui->tableWidget->item(row,column)->setText(fn);
                fileNames[row] = fn;
            }
            else{
                QMessageBox::critical(this,"Erro","As imagens possuem tamanhos dieferentes.",QMessageBox::Ok);
            }
        }
        else{ // Primeira imagem
            isValid = true;
            ui->tableWidget->setItem(row,column,new QTableWidgetItem());
            ui->tableWidget->item(row,column)->setText(fn);
            fileNames[row] = fn;
        }


    }
}

void MediaImg::on_pushButton_add_clicked()
{
    ui->tableWidget->insertRow(numImgs);
    ui->tableWidget->setRowHeight(numImgs, 20);
    numImgs++;
    ui->label_numeroImgs->setText(texto.setNum(numImgs));
    isValid = false;
}

void MediaImg::on_pushButton_rem_clicked()
{
    if(numImgs>0){
        numImgs--;
        ui->label_numeroImgs->setText(texto.setNum(numImgs));
        ui->tableWidget->removeRow(numImgs);
    }
}

void MediaImg::on_pushButton_ok_clicked()
{
    emit terminou();
}
