#ifndef MCAMERA_H
#define MCAMERA_H

#include <QMainWindow>
#include <QImage>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cv.h>
#include "captura.h"

namespace Ui {
    class mCamera;
}

class mCamera : public QMainWindow
{
    Q_OBJECT

public:
    explicit mCamera(QWidget *parent = 0);
    ~mCamera();

public:
    captura *cap;

public slots:
    void mostrar(QImage image);

private:
    Ui::mCamera *ui;
};

#endif // MCAMERA_H
