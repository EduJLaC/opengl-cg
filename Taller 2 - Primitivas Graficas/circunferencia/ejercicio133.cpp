#include <iostream>
#include "GL/glut.h"
#include "../headerFiles/algcircun.h"

extern int radio;
int x, y;

void origin() {
    std::cout << "Ingrese el punto de inicio de la circunferencia: ";
    std::cin >> x >> y;
}

void ej133() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.1);
    circunferenciaPuntoMedioConOrigen(radio, x, y);
    glPopMatrix();
    glFlush();
}

