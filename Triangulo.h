#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Figura.h"
class Triangulo : public Figura {
private:
    double base;
    double altura;
public:
    Triangulo(double b, double h) : base(b), altura(h) {}
    double forma() override {
        return (base * altura) / 2;
    }
};



#endif