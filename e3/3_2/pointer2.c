#include<stdio.h>

int main(void){
    int a = 11, b = 22;
    double x = 3.0, y = 4.0;

    printf("a: %p, b: %p\n", &a, &b);
    printf("x: %p, y: %p\n", &x, &y);

    printf("\n");

    printf("a の値 = %d\n", *((int*)0xffffcbfc));
    printf("b の値 = %d\n", *((int*)0xffffcbf8));
    printf("x の値 = %g\n", *((double*)0xffffcbf0));
    printf("y の値 = %g\n", *((double*)0xffffcbe8));

    *((int*)0xffffcbfc) = 1234;
    *((int*)0xffffcbf8) = 5678;
    *((double*)0xffffcbf0) = 99.9;
    *((double*)0xffffcbe8) = 12.3;

    printf("\n");

    printf("after\n");
    printf("a の値 = %d\n", a);
    printf("b の値 = %d\n", b);
    printf("x の値 = %g\n", x);
    printf("y の値 = %g\n", y);

    return 0;
}