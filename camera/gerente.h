#ifndef GERENTE_H
#define GERENTE_H

#include <QApplication>
#include "captura.h"

class gerente : public QApplication
{
public:
    void gerencia();

public:
    captura *cap;
};

#endif // GERENTE_H
