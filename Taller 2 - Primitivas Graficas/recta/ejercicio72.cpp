#include "GL/glut.h"

void punto_medio(int, int, int, int);
void linea(int[], int[]);

extern int px0, py0, px1, py1;

void ej72() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    int p[] = {px0, py0};
    int q[] = {px1, py1};
    linea(p, q);
    glPopMatrix();
    glFlush();
}

void linea(int* p, int* q) {
    punto_medio(p[0], p[1], q[0], q[1]);
}
