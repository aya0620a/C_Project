#include<stdio.h>
#include<math.h>

int main(void){
    double x1, y1, x2, y2;

    for(int i = 0; i < 3; i++){
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double dis;

    dis = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    printf("%.4f\n", dis);
    }

    return 0;
}