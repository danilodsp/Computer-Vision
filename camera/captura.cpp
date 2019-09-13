#include "captura.h"

void captura::run()
{
    CvCapture *capture = cvCaptureFromCAM(CV_CAP_ANY);
    qDebug("capture");

    while(1){
        IplImage *frame = cvQueryFrame(capture);

        sleep(2);

        if(capture==NULL){
            qDebug("null cap");
        }
        if(frame==NULL){
            qDebug("null frame");
        }

        //imagem = IplImageToQImage(frame);
//        int h = frame->height;
//        int w = frame->width;
//        int channels = frame->nChannels;
//        QImage *qimg = new QImage(w, h, QImage::Format_ARGB32);
//        char *data = frame->imageData;

//        for (int y = 0; y < h; y++, data += frame->widthStep)
//        {
//            for (int x = 0; x < w; x++)
//            {
//                char r, g, b, a = 0;
//                if (channels == 1){
//                    r = data[x * channels];
//                    g = data[x * channels];
//                    b = data[x * channels];
//                }
//                else if (channels == 3 || channels == 4){
//                    r = data[x * channels + 2];
//                    g = data[x * channels + 1];
//                    b = data[x * channels];
//                }

//                if (channels == 4){
//                    a = data[x * channels + 3];
//                    qimg->setPixel(x, y, qRgba(r, g, b, a));
//                }
//                else{
//                    qimg->setPixel(x, y, qRgb(r, g, b));
//                }
//            }
//        }

//        imagem = *qimg;
        ///emit fimCaptura(imagem);
    }

    cvReleaseCapture(&capture);
    qDebug("release");
}

QImage captura::IplImageToQImage(IplImage *frame)
{
    int h = frame->height;
    int w = frame->width;
    int channels = frame->nChannels;
    QImage *qimg = new QImage(w, h, QImage::Format_ARGB32);
    char *data = frame->imageData;

    for (int y = 0; y < h; y++, data += frame->widthStep)
    {
        for (int x = 0; x < w; x++)
        {
            char r, g, b, a = 0;
            if (channels == 1){
                r = data[x * channels];
                g = data[x * channels];
                b = data[x * channels];
            }
            else if (channels == 3 || channels == 4){
                r = data[x * channels + 2];
                g = data[x * channels + 1];
                b = data[x * channels];
            }

            if (channels == 4){
                a = data[x * channels + 3];
                qimg->setPixel(x, y, qRgba(r, g, b, a));
            }
            else{
                qimg->setPixel(x, y, qRgb(r, g, b));
            }
        }
    }

    QImage image = *qimg;
    return image;
}
