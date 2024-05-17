#include <stdio.h>
#include <stdlib.h>

int* new_array_scan(int *pn){
    int n;
    fprintf(stderr, "n=");
    scanf("%d", &n);

    int *p = NULL;
    p = malloc(sizeof(int) * n);
    if(p == NULL){
        fprintf(stderr, "malloc失敗");
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &p[i]);
    }

    *pn = n;

    return p;
}