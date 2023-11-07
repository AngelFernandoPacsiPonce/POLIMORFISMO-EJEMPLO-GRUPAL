#include <iostream>
#include "Figura.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main() {
    Figura* figuras[3];
    figuras[0] = new Circulo(5.0);
    figuras[1] = new Rectangulo(4.0, 6.0);
    figuras[2] = new Triangulo(3.0, 7.0);

    for (int i = 0; i < 3; i++) {
        std::cout << "Forma de la figura " << i + 1 << ": " << figuras[i]->forma() << std::endl;
        delete figuras[i];
    }

    return 0;
}
