#include<stdio.h>
#include<math.h>
#include"qeq3.h"

int qeq(double a, double b, double c, double *x1, double *x2){
    double dis;
    int count;
    double x_1, x_2;
    dis = b * b - 4 * a * c;

    if(dis > 0){
        x_1 = (-b + sqrt(dis)) / (2 * a);
        x_2 = (-b - sqrt(dis)) / (2 * a);

        if(x_1 > x_2){
            *x1 = x_2;
            *x2 = x_1;
        }
        else{
            *x1 = x_1;
            *x2 = x_2;
        }
        count = 2;
    }

    if(dis == 0){
        x_1 = (-b + sqrt(dis)) / (2 * a);
        *x1 = x_1;
        count = 1;
    }

    if(dis < 0){
        count = 0;
    }

    return count;
}


