#include <stdio.h>
#include <stdlib.h>  /* malloc と exit を使うのに必要 */

//int型の配列
int* create_iarray_n_d(int n, int d)
{
    int *a = NULL;  //配列の戦闘要素を指すポインタの宣言
    int i;

    //動的割り当て
    a = (int *)malloc(sizeof(int)*n);   //malloc(sizeof(int)*n)

    //mallocが失敗するとNULLが変えるので、エラー処理
    if(a == NULL){
        fprintf(stderr, "aのmallocが失敗\n");
        exit(1);
    }

    //値のセット
    for(i = 0; i < n; i++){
        a[i] = d;
    }

    return a;
}

//double型の配列
double* create_darray_n_d(int n, double d)
{
    double *x = NULL;
    int i;

    //動的割り当て
    x = (double *)malloc(sizeof(double)*n);
    if(x == NULL){
        fprintf(stderr, "xのmallocが失敗\n");
        exit(1);
    }

    for(i = 0; i < n; i++){
        x[i] = d;
    }

    return x;
}