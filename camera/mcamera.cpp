#include "mcamera.h"
#include "ui_mcamera.h"

mCamera::mCamera(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mCamera)
{
    ui->setupUi(this);

    cap = new captura;

    connect(cap,SIGNAL(fimCaptura(QImage)),this,SLOT(mostrar(QImage)));

    cap->start();
    //cap->run();

//    CvCapture *capture = cvCaptureFromCAM(CV_CAP_ANY);
//    IplImage *frame = cvQueryFrame(capture);

//    if(capture==NULL)
//        qDebug("ops");
//    if(frame==NULL)
//        qDebug("ops");

//    ui->label->setPixmap(QPixmap::fromImage(cap->IplImageToQImage(frame)));
}

mCamera::~mCamera()
{
    delete ui;
}

void mCamera::mostrar(QImage image)
{
    ui->label->setPixmap(QPixmap::fromImage(image));
}
