#include <cmath>
#include <GL/glut.h>

void init_ej_3() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    glBegin(GL_LINE_LOOP);
    GLUquadricObj *pt;
    pt = gluNewQuadric();
    gluQuadricDrawStyle(pt, GLU_LINE);
    glColor3f(1.0, 0.0, 0.0);
    gluDisk(pt, 0, 200, 15, 6);
    glEnd();

}

void ej3A() {
    init_ej_3();
    glColor3f(0.0, 0.0, 1.0);

    GLint ang = 0;
    GLfloat scale = 100, x, y;

    while (ang < 7200) { // 4 * 180 * 10

        GLfloat theta = ((ang * 0.1) * M_PI) / 180, f;

        glBegin(GL_POINTS);
        f = sin(theta) + pow(sin(2.5 * theta), 3);
        x = f * cos(theta);
        y = f * sin(theta);

        glVertex2f(scale * x, scale * y);
        glEnd();

        ang += 1;
    }

    glPopMatrix();
    glFlush();
}

void ej3B() {
    init_ej_3();
    glColor3f(0.0, 0.0, 1.0);
    GLint ang = 0;
    GLfloat scale = 50, x, y;

    while (ang < 3600) {

        GLfloat theta = ((ang * 0.1) * M_PI) / 180, f;

        glBegin(GL_POINTS);
        GLfloat N = 0.0;
        while (N < 6) {
            f = (-N * cos(theta)) + cos(5.0 * theta);
            x = f * cos(theta);
            y = f * sin(theta);

            glVertex2f(scale * x, scale * y);
            N += 1.0;
        }
        glEnd();

        ang += 1;
    }

    glPopMatrix();
    glFlush();
}

void ej3C() {
    init_ej_3();
    glColor3f(0.0, 0.0, 1.0);

    GLint ang = 0;
    GLfloat scale = 50, x, y;

    while (ang < 3600) {

        GLfloat theta = ((ang * 0.1) * M_PI) / 180, f;

        glBegin(GL_POINTS);
        f = pow(M_E, cos(theta)) - 2 * cos(4.0 * theta);
        x = f * cos(theta);
        y = f * sin(theta);

        glVertex2f(scale * x, scale * y);
        glEnd();

        ang += 1;
    }

    glPopMatrix();
    glFlush();
}