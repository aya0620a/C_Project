#include <stdio.h>

void divrem(int x, int y, int *q, int *r)
{
  /* この関数の本体を完成させよ */
  *q = x / y;
  *r = x % y;
}

int main(void)
{
  int x = 10, y = 3;
  int q, r;
  divrem( x, y, &q, &r);
  printf("x / y = %d ... %d\n", q, r);
  return 0;
}