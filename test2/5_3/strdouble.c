#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strdouble(char s[ ]){
//二倍の文字配列を格納するarrayを作成
    char *array = NULL;

//sの長さの二倍の文字配列を割り当てる
    array = malloc(sizeof(char) * strlen(s) * 2 );
    //エラー処理
    if(array == NULL){
        fprintf(stderr, "arrayのmallocが失敗");
        exit(1);
    }

//コピーを二週行う
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < strlen(s); j++){
            array[(i * strlen(s)) + j] = s[j];
        }
    }

    return array;
}