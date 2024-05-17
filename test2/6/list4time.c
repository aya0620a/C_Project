#include<stdio.h>
#include<time.h>
#include "myrand.h"
#include "list.h"

int main(void){
    int n;
    fprintf(stderr, "n=");
    scanf("%d", &n);

    list_node_t *head_p = create_node(0); /* ヘッダ (ダミー) */
    clock_t clk_start, clk_end;

    int rand;

    myrand_init();

    clk_start = clock();
    for(int i =0; i < n; i++){
        rand = myrand();
        list_insert_uniq(head_p, rand);
    }
    clk_end = clock();

    printf("cpu = %g [sec]\n", (double) (clk_end-clk_start)/CLOCKS_PER_SEC);

    
    myrand_init();
    
    clk_start = clock();
    for(int i =0; i < n; i++){
        rand = myrand();
        list_find(head_p, rand);
    }
    clk_end = clock();

    printf("cpu = %g [sec]\n", (double) (clk_end-clk_start)/CLOCKS_PER_SEC);
    

    clk_start = clock();
    for(int i =0; i < n; i++){
        rand = myrand();
        list_find(head_p, rand);
    }
    clk_end = clock();

    printf("cpu = %g [sec]\n", (double) (clk_end-clk_start)/CLOCKS_PER_SEC);
}