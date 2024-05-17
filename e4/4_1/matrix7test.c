#include <stdio.h>
#include "matrix.h"

int main(void)
{
    int n;
    double x[N];
    double A[N][N], y[N];
    int i;

    fprintf(stderr, "n = ");
    scanf("%d", &n);
    fprintf(stderr, "x\n");

    matrix_scan(n, A);
    printf("A\n");
    matrix_print(n, A);

    vector_scan(n, x);
    printf("x\n");
    vector_print(n, x);

    matrix_vector_prod(n, A, x, y);

    printf("\n");

    printf("y\n");
    vector_print(n, y);

    return 0;
}