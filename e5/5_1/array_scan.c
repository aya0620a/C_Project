#include <stdio.h>
#include <stdlib.h>

int* new_array_scan(int *pn){
    int n, i;
    int *a = NULL;

    //nを標準入力から読み込む
    fprintf(stderr, "n =");
    scanf("%d", &n);

    //サイズnのint型配列のaを割り当てる
    a = malloc(sizeof(int)*n);
    //エラー処理
    if(pn == NULL){
        fprintf(stderr, "aのmallocが失敗\n");
        exit(1);
    }

    //n個の要素を読み込む
    fprintf(stderr, "n個の要素を入力してください");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    //*pnにnをセットする
    *pn = n;

    //その配列の先頭要素へのポインタを返す
    return a;
}