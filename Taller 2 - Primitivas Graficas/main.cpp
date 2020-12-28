#include <iostream>
#include "GL/glut.h"
#include "headerFiles/taller.h"

void points();

void radius();

void display_ej(int, int, char **);

void reshape(int, int);

int px0, py0, px1, py1;
int radio;


int main(int argc, char **argv) {

    int n;
    std::cout << "Ingrese el numero de ejercicio: ";
    std::cin >> n;

    display_ej(n, argc, argv);
    glutReshapeFunc(reshape);
    glutMainLoop();

    return 0;
}


void init(int argc, char **argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);

    glClearColor(1.0, 1.0, 1.0, 0.0);
    glShadeModel(GL_FLAT);
    glPointSize(3);
}


void display_ej(int n, int argc, char **argv) {

    int c = (int) n / 10;

    if (c == 7) {
        points();
        init(argc, argv);

        switch (n) {
            case 71:
                glutDisplayFunc(ej71);
                break;
            case 72:
                glutDisplayFunc(ej72);
                break;
            case 73:
                glutDisplayFunc(ej73);
                break;
            default:
                std::cout << "El problema no existe";
                exit(1);
        }
    } else if (c == 13) {

        radius();

        switch (n) {
            case 131:
                init(argc, argv);
                glutDisplayFunc(ej131);
                break;
            case 132:
                attributes();
                init(argc, argv);
                glutDisplayFunc(ej132);
                break;
            case 133:
                origin();
                init(argc, argv);
                glutDisplayFunc(ej133);
                break;
            default:
                std::cout << "El problema no existe";
                exit(1);
        }
    }
}


void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50.0, 50.0, -50.0, 50, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


void draw(int x, int y, GLfloat size, GLfloat red, GLfloat green, GLfloat blue) {
    glPointSize(size);
    glBegin(GL_POINTS);
    glColor3f(red, green, blue);
    glPointSize(size);
    glVertex2i(x, y);
    glEnd();
}

void points() {
    std::cout << "Ingrese el punto x0" << std::endl;
    std::cin >> px0;

    std::cout << "Ingrese el punto y0" << std::endl;
    std::cin >> py0;

    std::cout << "Ingrese el punto x1" << std::endl;
    std::cin >> px1;

    std::cout << "Ingrese el punto y1" << std::endl;
    std::cin >> py1;
}


void radius() {
    std::cout << "Ingrese el radio" << std::endl;
    std::cin >> radio;
}