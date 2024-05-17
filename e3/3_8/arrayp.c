#include<stdio.h>

int main(void){
    int x[ ] = {0,10,20,30,40};
    /* x[0]=0, x[1]=10, x[2]=20, x[3]=30, x[4]=40 と初期化される */

    int k;
    int *p;
    k = sizeof(x) / sizeof(x[0]);
    printf("%d", k);
    printf("\n");

    for(int i = 0; i < k; i++){
        printf("x[%d]のアドレス:%p\n", i, &x[i]);
    }
    printf("\n");

    printf("xのアドレス:%p\n", &x);
    printf("\n");

    for (int i = 0; i < k; i++){
        printf("x+%dのアドレス:%p\n", i, x + i);
    }
    printf("\n");

    for(int i = 0; i < k; i++){
        printf("x+%dのアドレス:%p\n", i, x + i);
        printf("x+%dの値:%d\n", i, *(x + i));
    }
    printf("\n");

    p = &x[2];
    printf("p+2の値(アドレス):%p \n", p+2);
    printf("p+2の値:%d \n", p[2]);

    return 0;
}