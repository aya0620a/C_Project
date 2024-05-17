#include<stdio.h>

void triple(int *p, int *q){
    *p = 3 * *p;
    *q = 3 * *q;
}

int main(void){
    int x = 1, y = 2;
    
    //変数ではなく、番地を渡す。
    triple(&x, &y);

    printf("x = %d, y = %d\n", x, y);


    return 0;
}