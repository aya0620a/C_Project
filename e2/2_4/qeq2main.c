#include<stdio.h>
#include<math.h>
#include"qeq2.h"

int main(void){
    double a, b, c;
    
    for(;;){

        fprintf(stderr, "a:");
        scanf("%lf", &a);

        fprintf(stderr, "b:");
        scanf("%lf", &b);

        fprintf(stderr, "c:");
        scanf("%lf", &c);

        if(a == 0){
            break;
        }

        qeq(a, b, c);

    }

    return 0;
}