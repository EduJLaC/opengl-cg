#include <iostream>
#include "GL/glut.h"
#include "cmath"

extern int px0, py0, px1, py1;

void ej73() {
    // TODO finish
    float points[7][2];
    int i = 0;
    GLfloat ang = 0.0f, radio = 100.0f, x, y;

    while (ang < 2 * M_PI) {

        x = radio * sin(ang);
        y = radio * cos(ang);
        glVertex2f(x, y);
        ang += 2 * M_PI / 7;

        points[i][0] = x;
        points[i][1] = y;

        if (i < 7) i++;
    }

    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    for (int k = 0; k < 7; ++k) {
        std::cout << "(" << points[i][0] << ", " << points[i][1] << ")" << std::endl;
    }

}

