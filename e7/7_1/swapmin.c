#include<stdio.h>

#define MAX_N 64

void swapmin(int n, double *a, int k){
    int num;
    double tmp;
    double min = MAX_N;
    for(int i = k; i < n; i++){
        if(a[i] < min){
            min = a[i];
            num = i;
        }
    }
    tmp = a[num];
    a[num] = a[k];
    a[k] = tmp;
}