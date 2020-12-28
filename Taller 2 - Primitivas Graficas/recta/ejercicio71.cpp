#include "GL/glut.h"
#include "../headerFiles/algrecta.h"

extern int px0, py0, px1, py1;

void ej71() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.1);
    simple(px0, py0, px1, py1);
    dda(px0 + 10, py0, px1 + 10, py1);
    punto_medio(px0 + 20, py0, px1 + 20, py1);
    glPopMatrix();
    glFlush();
}
