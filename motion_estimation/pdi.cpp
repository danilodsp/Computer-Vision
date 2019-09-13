#include "pdi.h"
#include "ui_pdi.h"

pdi::pdi(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::pdi)
{
    ui->setupUi(this);
    label = new QLabel();
    label_2 = new QLabel();
    movie = new QMovie("C:\\Documents and Settings\\Danilo\\My Documents\\esti\\anime.gif");


}

pdi::~pdi()
{
    delete ui;
}

void pdi::on_actionSair_activated()
{

}

void pdi::on_actionAbrir_activated()
{
    //QString fn = QFileDialog::getOpenFileName( QString::null, "Movies (*.gif)", NULL );
    movie->start();
    ui->label->setMovie(movie);
}

void pdi::on_pushButton_clicked()
{
    movie->stop();
}

void pdi::on_pushButton_2_clicked()
{
    movie->start();
}


void pdi::on_pushButton_3_clicked()
{
    movie->jumpToNextFrame();
}


void pdi::on_pushButton_4_clicked()
{
    image1 = movie->currentImage();

    int x = 20;
    int y = 20;
    if(image1.valid(x, y))
        m1 = image1.copy(x, y, 100, 100);
    int r, g, b, a;

    QImage *imageTeste = new QImage("C:\\Documents and Settings\\Danilo\\My Documents\\esti\\anime2.jpg");

    result = *imageTeste;
    for(x=20;x<70;x++){
        for(y=20;y<70;y++){
        result.setPixel(x,y,255);
        }
    }


    //ui->label_2->setPixmap(QPixmap::fromImage(QImage("C:\\Documents and Settings\\Danilo\\My Documents\\esti\\anime2.jpg")));
    ui->label_2->setPixmap(QPixmap::fromImage(result));


}
