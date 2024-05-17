#include<stdlib.h>
#include<string.h>

char *strdouble(char s[]){
    char *clone = NULL;
    int i, j;

    /* s の長さ (strlen(s)) を2倍して1足した文字配列を割り当てる */
    clone = (char *)malloc(sizeof(char) * ((strlen(s) * 2) + 1));

    //コピーを二週行う
    for(i = 0; i < 2; i++){
        for(j = 0; s[j] != '\0'; j++){
            clone[(i*strlen(s)) + j] = s[j];
        }
    }
    
    clone[((strlen(s) * 2))] = '\0';

    return clone;
}