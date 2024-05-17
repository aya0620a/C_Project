#include <stdio.h>
#include "matrix.h"

int main(void)
{
   int n;
   double A[N][N], B[N], Y[N];

   fprintf(stderr, "n = ");
   scanf("%d", &n);
   fprintf(stderr, "A\n");
   matrix_scan(n, A);
   fprintf(stderr, "B\n");
   vector_scan(n, B);

   matrix_vector_prod(n, A, B, Y);

   printf("A\n");
   matrix_print(n, A);
   printf("B\n");
   vector_print(n, B);
   printf("Y\n");
   vector_print(n, Y);

   return 0;
}