#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura.h"

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double forma() override {
        return 3.14159265359 * radio * radio;
    }
};



#endif