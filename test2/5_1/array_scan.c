#include <stdio.h>
#include <stdlib.h>

int* new_array_scan(int *pn){

//1.標準入力からまず整数 n (これが読み込むデータの数を表わす) を読み込む.
    int n;
    fprintf(stderr, "n = ");
    scanf("%d", &n);

//2.サイズ n の int 型配列を割り当てる.
    int *array = NULL;
    array = (int *)malloc(sizeof(int) * n);
    //エラー処理
    if(array == NULL){
        fprintf(stderr, "arrayのmallocが失敗");
        exit(1);
    }

//3.n個の整数を標準入力からその配列に読み込む.
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

//4.*pn に n をセットする.
    *pn = n;

//5.その配列の先頭要素へのポインタを返す.
    return array;
}