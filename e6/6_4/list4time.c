#include<stdio.h>
#include<time.h>
#include "myrand.h"
#include "list.h"



int main(void){
    int n;
    int rand;

    clock_t clk_start, clk_end;

    list_node_t *head_p = create_node(0); /* ヘッダ (ダミー) */

    fprintf(stderr, "n=");
    scanf("%d", &n);


    myrand_init();

    //n個の乱数を発生させ,list_insert_uniqを行う
    clk_start = clock();
    for(int i = 0; i < n; i++){
        rand = myrand();
        list_insert_uniq(head_p,rand);
    }
    clk_end = clock();
    printf("cpu = %g [sec]\n", (double) (clk_end-clk_start)/CLOCKS_PER_SEC);
    
    //n個の乱数を発生させ,list_findを行う
    myrand_init();
    clk_start = clock();
    for(int i = 0; i < n; i++){
        rand = myrand();
        list_find(head_p,rand);
    }
    clk_end = clock();
    printf("cpu = %g [sec]\n", (double) (clk_end-clk_start)/CLOCKS_PER_SEC);
    

    //n個の異なる乱数を発生させ,list_findを行う

    clk_start = clock();
    for(int i = 0; i < n; i++){
        rand = myrand();
        list_find(head_p,rand);
    }
    clk_end = clock();
    printf("cpu = %g [sec]\n", (double) (clk_end-clk_start)/CLOCKS_PER_SEC);
    
    return 0;
}