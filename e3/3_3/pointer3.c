#include<stdio.h>

int main(void){
  int a = 11, b = 22;
  double x = 3.1, y = 4.1;

  int *i;
  double *d;

  printf("番地の表示\n");
  printf("a: %p, b: %p\n", &a, &b);
  printf("x: %p, y: %p\n", &x, &y);
  printf("\n");

  i = &b;
  d = &x;

  *i = *i + 4;
  *d = *d * 2;
  printf("b内容 = %d\n", *i);
  printf("x内容 = %g\n", *d);
  printf("\n");

  /* 入力した番地の内容を表示 */

  for (;;) {
    printf("番地を入力 : ");
    scanf("%p",&d);
    if (d==0) { break; }
      printf("%p 番地の内容は %f\n", d, *d);
    }

    return 0;
}