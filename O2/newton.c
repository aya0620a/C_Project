#include <stdio.h>
#include <math.h>
#include "newton.h"

double func(double a, double b, double c, double x){
    return a * x * x + b * x + c;
}

double func_differental(double a, double b, double c, double x){
    return 2 * a * x + b;
}

double newton(double a, double b, double c, double x0, double eps, int max_repeat){

    int i;
    double x1;

    fprintf(stderr, "%2s %20s %20s %20s\n", "i", "x0", "f(x0)", "x1");

    for (i = 0; i < max_repeat; i++){

        double f_x0 = func(a, b, c, x0);
        
        double f_dif_x0 = func_differental(a, b, c, x0);

        x1 = x0 - f_x0 / f_dif_x0;

        fprintf(stderr, "%2d %20.10f %20.10f %20.10f\n", i, x0, f_x0, x1);

        if(fabs(x1 - x0) < eps){
            return x1;
        }
        x0 = x1;
    }

    return x1;
}
