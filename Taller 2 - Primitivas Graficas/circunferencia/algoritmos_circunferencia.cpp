#include <cmath>
#include "../headerFiles/algcircun.h"

void draw(int x, int y, float size, float red, float green, float blue);


void customCircunferenciaParametrica(int R, float size, float red, float green, float blue) {
    double x, y, delta = 0.1;
    double theta = M_PI_4;

    while (theta < M_PI_2) {
        x = R * cos(theta);
        y = R * sin(theta);
        theta += delta;

        int x_p = (int) round(x + 0.5);
        int y_p = (int) round(y + 0.5);

        draw(x_p, y_p, size, red, green, blue);
        draw(x_p, -y_p, size, red, green, blue);
        draw(-x_p, -y_p, size, red, green, blue);
        draw(-x_p, y_p, size, red, green, blue);
    }
}


void circunferenciaParametrica(int R) {
    customCircunferenciaParametrica(R, DEFAULT_SIZE, DEFAULT_RED, DEFAULT_GREEN, DEFAULT_BLUE);
}


void customCircunferenciaExplicita(int R, float size, float red, float green, float blue) {
    double x = 0, y = R;

    while (x < y) {
        y = sqrt(pow(R, 2) - pow(x, 2));

        int x_p = (int)x;
        int y_p = (int) round(y);

        draw(x_p, y_p, size, red, green, blue);
        draw(x_p, -y_p, size, red, green, blue);
        draw(-x_p, -y_p, size, red, green, blue);
        draw(-x_p, y_p, size, red, green, blue);

        x += 1.0;
    }
}


void circunferenciaExplicita(int R) {
    customCircunferenciaExplicita(R, DEFAULT_SIZE, DEFAULT_RED, DEFAULT_GREEN, DEFAULT_BLUE);
}


void customCircunferenciaPuntoMedio(int R, float size, float red, float green, float blue) {
    int x = 0, y = R;
    int d = 1 - R;

    draw(x, y, size, red, green, blue);
    while (x < y) {

        if (d < 0)
            d += 2 * x + 3;
        else {
            d += 2 * (x - y) + 5;
            y--;
        }

        x++;
        draw(x, y, size, red, green, blue);
        draw(x, -y, size, red, green, blue);
        draw(-x, -y, size, red, green, blue);
        draw(-x, y, size, red, green, blue);
    }
}


void circunferenciaPuntoMedio(int R) {
    customCircunferenciaPuntoMedio(R, DEFAULT_SIZE, DEFAULT_RED, DEFAULT_GREEN, DEFAULT_BLUE);
}


void customCircunferenciaPuntoMedioConOrigen(int R, int x_inicial, int y_inicial, float size,
                                    float red, float green, float blue) {
    int x = x_inicial, y = R + y_inicial;
    int d = 1 - R;

    draw(x, y, size, red, green, blue);
    while (x < y) {

        if (d < 0)  // E
            d += 2 * x + 3 + (2 * x_inicial);
        else {      // SE
            d += 2 * (x - y + x_inicial + y_inicial) + 5;
            y--;
        }

        x++;
        draw(x, y, size, red, green, blue);
        draw(x, -y, size, red, green, blue);
        draw(-x, -y, size, red, green, blue);
        draw(-x, y, size, red, green, blue);
    }
}


void circunferenciaPuntoMedioConOrigen(int R, int x_inicial, int y_inicial) {
    customCircunferenciaPuntoMedioConOrigen(R, x_inicial, y_inicial,
                                            DEFAULT_SIZE, DEFAULT_RED, DEFAULT_GREEN, DEFAULT_BLUE);
}
