#include<stdio.h>
#include<math.h>
#include"qeq2.h"

void qeq(double a, double b, double c){
    double x1, x2;
    double dis;
    dis = b * b - 4 * a * c;

    if(dis > 0){
        x1 = (-b + sqrt(dis)) / (2 * a);
        x2 = (-b - sqrt(dis)) / (2 * a);

        if(x1 > x2){
            printf("%.5f %.5f\n", x2, x1);
        }
        else{
            printf("%.5f %.5f\n", x1, x2);
        }
    }

    if(dis == 0){
        x1 = (-b + sqrt(dis)) / (2 * a);
        printf("%.5f\n", x1);
    }

    if(dis < 0){
        printf("\n");
    }
}


