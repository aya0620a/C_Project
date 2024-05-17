#include <stdio.h>
#include <math.h>


double function(double a, double b, double c, double d, double x) {
    return (a * x * x * x) + (b * x * x )+ (c * x )+ d;
}

int main(void){
    int a, b, c, d;

    while(a != 0){
        fprintf(stderr, "a, b, c, dを入力せよ\n");
        scanf("%d %d %d %d", &a, &b, &c, &d);

        double D = (4 * b * b) - (12 * a * c);
        printf("D = %lf\n", D);

        if(D < 0){
            printf("実数解なし\n");
        }

        else if(D == 0){
            double r = -b / (3.0 * a);
            printf("3つの実数解\n");
        }
        else{
            double r1 = (-2.0 * b + sqrt(D)) / (6.0 * a);
            double r2 = (-2.0 * b - sqrt(D)) / (6.0 * a);

            double f_rb;
            double f_rs;

            if(a > 0){
                f_rb = function(a, b, c, d, r2);
                f_rs = function(a, b, c, d, r1);
            }

            else{
                f_rb = function(a, b, c, d, r1);
                f_rs = function(a, b, c, d, r2);
            }



            // printf("r1 = %lf r2 = %lf\n", r1, r2);
            // printf("f_rb = %lf f_rs = %lf\n", f_rb, f_rs);


            if((f_rb > 0) && (f_rs > 0)){
                printf("1つの実数解\n");
            }
            else if((f_rb == 0) || (f_rs == 0)){
                printf("2つの実数解\n");
            }
            else if((f_rb > 0 && f_rs < 0) || (f_rb < 0 && f_rs > 0)){
                printf("3つの実数解\n");
            }
        }
    }
}