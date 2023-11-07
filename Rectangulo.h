#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Figura.h"
class Rectangulo : public Figura {
private:
    double ancho;
    double alto;
public:
    Rectangulo(double a, double h) : ancho(a), alto(h) {}
    double forma() override {
        return ancho * alto;
    }
};


#endif