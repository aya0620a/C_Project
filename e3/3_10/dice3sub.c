#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "dice3sub.h"
#define N_MAX 1024

//1〜6 の整数の一様乱数を n 個発生し, d[0]〜d[n-1] に格納する.
void dice_throw(int d[ ], int n){
    int i;
    for(i = 0; i < n; i++)
    {   
        int irand = rand() % 6 + 1;
        assert(irand >= 1 && irand <= 6);
        d[i] = irand;
    }
}

void dice3_distr(int n, int d1[ ], int d2[ ], int d3[ ], int c[ ]){
    int i;
    int sum = 0;
    for(i = 0; i < D3_MAX + 1; i++)
    {
        c[i] = 0;
    }
    for(i = 0; i < n; i++)
    {
        sum = d1[i] + d2[i] + d3[i];
        c[sum]++;
    }
}