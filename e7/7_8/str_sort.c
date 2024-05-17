#include <stdio.h>
#include "str_sort.h"
#include <string.h>

#define MAX_N 64
// 単純選択法
void str_sort(int n, record_t *a)
{
    int num;
    record_t tmp;
    int k;

    for (k=0; k<=n-1; k++) {
        num = k;
        for(int i = k+1; i < n; i++){
            if(a[i].age < a[num].age){
                num = i;
            }
            else if (a[num].age == a[i].age && a[num].height > a[i].height){
                num = i;
            }
        }
        tmp = a[num];
        a[num] = a[k];
        a[k] = tmp;
    }
}