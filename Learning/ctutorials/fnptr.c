#include <stdio.h>
#include <math.h>
#define square(a) a *a

double  euclidan(double  x1, double  y1, double  x2, double  y2)
{
    double  a;
    a = (square((x1 - x2))) + (square((y1 - y2)));

    return sqrt(a);
}
double  circle(double  x1, double  y1, double  x2, double  y2, double  (*ftr)(double , double , double , double ))
{
    double  f, t;

    f = (*ftr)(x1, x2, y1, y2);
    t =  3.14*f*f;
    return t;
}

int main()
{
    double  x1, x2, y1, y2;
    x1 = 8;
    x2 = 4;
    y1 = 3;

    y2 = 6;
    double  g;
    double  (*tp)(double , double , double , double );

    tp = &euclidan;
    g = circle(x1, x2, y1, y2, tp);

    printf("%lf", g);

    return 0;
}