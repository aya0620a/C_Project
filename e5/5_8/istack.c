#include <stdio.h>
#include <stdlib.h>
#include "istack.h"

/* サイズ size のスタックを新たに作り, そのポインタを返す */
istack_t *istack_new(int size){
    istack_t *p = NULL;
    p = (istack_t*)malloc(sizeof(istack_t));
    if(p == NULL){
        fprintf(stderr, "pのmallocが失敗");
        exit(1);
    }
    p->size = size;
    p->sp = 0;

    // 整数型配列を割り当て
    p->data = (int *)malloc(sizeof(int) * size);

    // malloc が失敗した場合
    if (p->data == NULL) {
        fprintf(stderr, "pのmallocが失敗\n");
        exit(1);
    }

    return p;
}

void istack_delete(istack_t* s){
    free(s->data);
    free(s);
}

void istack_push(istack_t*s, int d){

    // スタックが満杯の場合は何もせずに終了
    if (s->sp >= s->size) {
        s->size *= 2;

        // 新しいサイズのメモリを割り当て
        int *new_data = (int *)realloc(s->data, s->size * sizeof(int));

        if (new_data == NULL) {
            fprintf(stderr, "mallocが失敗\n");
            exit(1);
        }

        s->data = new_data;
    }
     
    s->data[s->sp] = d;
    s->sp++;  
}

void istack_pop(istack_t*s, int *d){
    if (s->sp > 0) {
        s->sp--;
        *d = s->data[s->sp];
    } 
    else {
        *d = 0;  
    }
}

int istack_empty(istack_t *s){
    if(s->sp == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int istack_full(istack_t *s){
    if(s->sp == s->size){
        return 1;
    }
    else{
        return 0;
    }
}