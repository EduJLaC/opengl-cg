#include <iostream>
#include "GL/glut.h"
#include "../headerFiles/algcircun.h"

extern int radio;
float sizePoint, redC, greenC, blueC;


void attributes() {
    std::cout << "Ingrese el grosor del punto : ";
    std::cin >> sizePoint;

    std::cout << "Ingrese el color CMY : ";
    std::cin >> redC >> greenC >> blueC;
}


void ej132() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.1);
    customCircunferenciaPuntoMedio(radio, sizePoint, redC, greenC, blueC);
    glPopMatrix();
    glFlush();
}
