#include<stdio.h>

int main(void){
    int a = 11, b = 22;
    double x = 3.0, y = 4.0;

    printf("a: %p, b: %p\n", &a, &b);
    printf("x: %p, y: %p\n", &x, &y);

    return 0;
}

