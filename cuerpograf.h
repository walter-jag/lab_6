#ifndef CUERPOGRAF_H
#define CUERPOGRAF_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "cuerpo.h"
#include <fstream>
#include <string>

using namespace std;

class cuerpograf: public QGraphicsItem
{
public:
    cuerpograf(float x, float y, float vx, float vy, float m, float r);
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
    void setEscala(float s);
    void actualizar(float dt);
    void guardar_datos (string datos, string nombre);
    cuerpo* getEsf();

private:
    cuerpo *esf;
    float escala;

};


#endif // CUERPOGRAF_H
