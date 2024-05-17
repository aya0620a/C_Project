#include<stdio.h>
#include<math.h>
#include "bisection.h"

double bisection(double x1, double x2, double a, double b, double c, double eps){
    double mid;
    double f1, f2, fmid;
    int i = 0;

    while(1){
        mid = (x1 + x2) / 2.0;
        f1 = a * x1 * x1 + b * x1 + c;
        f2 = a * x2 * x2 + b * x2 + c;
        fmid  = a * mid * mid + b * mid + c;

        ///fprintf(stderr, "%d\t %.8f\t %.8f\t %.8f\t %.8f\t %.8f\t %.8f\t\n", i, x1, x2, mid, f1, f2, fmid);

        if(f1 * fmid < 0){
            x2 = mid;
            f2 = fmid;
        }

        if(f2 * fmid < 0){
            x1 = mid;
            f1 = fmid;
        }

    {
        if(fabs(f1) < eps){
            return x1;
        }
        else if(fabs(f2) < eps){
            return x2;
        }
        else if(fabs(x1 - x2) < eps){
            return x1;
        }
    }

        i++;
    } 
}