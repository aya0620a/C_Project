#include<stdio.h>
#include<stdlib.h>
#include <assert.h>
#include"dice3sub.h"

void dice_throw(int d[ ], int n){
    int irand;
    for(int i = 0; i < n; i++){
        irand = rand() % 6 + 1;
        assert(irand >= 1 && irand <= 6);
        d[i] = irand;
    }
}

void dice3_distr(int n, int d1[ ], int d2[ ], int d3[ ], int c[ ]){
    int total;

    for(int i = 0; i < D3_MAX + 1; i++){
        c[i] = 0;
    }

    for(int i = 0;i < n; i++){
        total = d1[i] + d2[i] + d3[i];
        c[total]++;
    }
}
