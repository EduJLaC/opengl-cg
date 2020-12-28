#include <GL/glut.h>
#include <iostream>

void ej2() {
    GLfloat L;
    GLint N;

    std::cout << "Ingrese la longitud del cuadrado (Max 400): ";
    std::cin >> L;

    std::cout << "Ingrese la cantidad de cuadrados: ";
    std::cin >> N;

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 1.0);
    glPushMatrix();

    GLfloat x = -100.0, y = -100.0;
    while (N > 0) {

        glBegin(GL_LINE_LOOP);
        glVertex2f(x, y);
        glVertex2f(x + L, y);
        glVertex2f(x + L, y + L);
        glVertex2f(x, y + L);
        glEnd();

        N--;

        if (N == 0) continue;

        glBegin(GL_LINE_LOOP);
        glVertex2f(x + (L / 2), y);
        glVertex2f(x + L, y + (L / 2));
        glVertex2f(x + (L / 2), y + L);
        glVertex2f(x, y + (L / 2));
        glEnd();

        N--;

        x += L / 4;
        y += L / 4;
        L = L / 2;

    }

    glPopMatrix();
    glFlush();
}