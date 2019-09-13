#ifndef CAPTURA_H
#define CAPTURA_H

#include <QThread>
#include <QImage>
#include <QObject>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cv.h>

using namespace cv;

class captura : public QThread
{
    Q_OBJECT

public:
    void run();
    QImage IplImageToQImage(IplImage *frame);

public:
    QImage imagem;

signals:
    void fimCaptura(QImage image);

};

#endif // CAPTURA_H
