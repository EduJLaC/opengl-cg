#include "../headerFiles/algrecta.h"

void draw(int x, int y, float size, float red, float green, float blue);

void simple(int x0, int y0, int x1, int y1) {
    int x, y;
    int dx, dy, m, b;

    dx = x1 - x0;
    dy = y1 - y0;
    m = dx / dy;
    b = y0 - m * x0;
    x = x0;
    y = y0;

    while (x <= x1) {
        draw(x, y, DEFAULT_SIZE, DEFAULT_RED, DEFAULT_GREEN, DEFAULT_BLUE);
        y = m * x + b;
        x += 1;
    }
}

void dda(int x0, int y0, int x1, int y1) {
    int y;
    int dx, dy, m;
    dx = x1 - x0;
    dy = y1 - y0;
    m = dy / dx;
    y = y0;

    for (int x = x0; x < x1; ++x) {
        draw(x, y, DEFAULT_SIZE, DEFAULT_RED, DEFAULT_GREEN, DEFAULT_BLUE);
        y += m;
    }
}

void punto_medio(int x0, int y0, int x1, int y1) {
    int dx, dy, dE, dNE, d, x, y;
    dx = x1 - x0;
    dy = y1 - y0;
    d = 2 * dy - dx;
    dE = 2 * dy;
    dNE = 2 * (dy - dx);
    x = x0;
    y = y0;

    draw(x, y, DEFAULT_SIZE, DEFAULT_RED, DEFAULT_GREEN, DEFAULT_BLUE);
    while (x < x1) {
        if (d <= 0) {
            d += dE;
            x++;
        } else {
            d += dNE;
            x++;
            y++;
        }
        draw(x, y, DEFAULT_SIZE, DEFAULT_RED, DEFAULT_GREEN, DEFAULT_BLUE);
    }
}


