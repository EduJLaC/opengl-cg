#include <iostream>
#include <GL/glut.h>
#include "taller.h"

void init();
void display_ej(int);
void reshape(int, int);

int main(int argc, char **argv) {

    int n;
    std::cout << "Ingrese el numero de ejercicio: ";
    std::cin >> n;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);

    init();
    display_ej(n);
    glutReshapeFunc(reshape);

    glutMainLoop();
    return 0;
}

void display_ej(int n) {
    switch (n) {
        case 1:
            glutDisplayFunc(ej1);
            break;
        case 2:
            glutDisplayFunc(ej2);
            break;
        case 3:
            char opc;
            std::cout << "a. sen(t) + sen^3(2.5t) " << std::endl;
            std::cout << "b. -Ncos(t) + cos(5t) " << std::endl;
            std::cout << "c. e^(cos(t)) - 2cos(4t)" << std::endl;

            std::cout << "Seleccione opcion: " << std::endl;
            std::cin >> opc;

            switch (opc) {
                case 'a':
                    glutDisplayFunc(ej3A); break;
                case 'b':
                    glutDisplayFunc(ej3B); break;
                case 'c':
                    glutDisplayFunc(ej3C); break;
                default:
                    glutDisplayFunc(ej3A);
            }
            break;
        default:
            glutDisplayFunc(ej1);
    }
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glShadeModel(GL_FLAT);
    glPointSize(1.0f);
    glLineWidth(1.0f);
}


void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei) w, (GLsizei) h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // -x, +x, -y, +y, -z (negative val), +z (negative val)
    glOrtho(-400.0, 400.0, -400.0, 400.0, -200.0, 200.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}