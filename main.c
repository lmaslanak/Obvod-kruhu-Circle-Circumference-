
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>

#ifndef M_PI
#define M_PI (3.14159265358979323846264338327950288)
#endif /* M_PI */

void circle_circumference(double *p, double circle ){
    circle = p[3];
    p[3] = 2 * M_PI * p[2];

    return ;
}



int main()
{
    double circle;
    double * p = (double*)malloc(4 * sizeof(double));
    scanf("%lf %lf %lf", &p[0], &p[1], &p[2]);
    circle_circumference(p, circle);
    printf("%.2f", p[3]);
    free (p);
    return 0;
}
