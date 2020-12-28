#include <cmath>
#include <GL/glut.h>

void ej1() {

    GLfloat ang = 0.0f, radio = 100.0f, x, y;

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glPushMatrix();

    glBegin(GL_POLYGON);

    while (ang < 2 * M_PI) {
        x = radio * sin(ang);
        y = radio * cos(ang);
        glVertex2f(x, y);
        ang += 2 * M_PI / 7;
    }

    glEnd();

    glPopMatrix();
    glFlush();
}
