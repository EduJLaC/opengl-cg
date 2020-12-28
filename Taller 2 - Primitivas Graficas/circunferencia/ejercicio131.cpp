#include "GL/glut.h"
#include "../headerFiles/algcircun.h"

extern int radio;


void ej131() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.1);
    circunferenciaExplicita(radio);
    circunferenciaParametrica(radio + 10);
    circunferenciaPuntoMedio(radio + 20);
    glPopMatrix();
    glFlush();
}