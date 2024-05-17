#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char *strdouble(char s[]){
    char *str = NULL;
    str = malloc(sizeof(char) * strlen(s) * 2 + 1);

    for(int i  = 0; i < 2; i++){
        for(int j = 0; s[j] != '\0'; j++){
            str[i * strlen(s) + j] = s[j];
        }
    }

    return str;
}
