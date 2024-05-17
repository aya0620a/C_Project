#include<stdio.h>
#include<math.h>
#include"dist3.h"

int main(void){
    double x1, y1, x2, y2;

    for(int i = 0; i < 3; i++){
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    printf("%.4f\n", dist(x1, y1, x2, y2));
    }

    return 0;
}