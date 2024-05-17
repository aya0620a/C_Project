#include <stdio.h>
#include "string_sort.h"
#include <string.h>
// 単純選択法
void string_sort(int n, char (*a)[STRLEN + 1])
{     
    int k, i, num;
    char tmp[STRLEN + 1];
    for (k = 0; k <= n - 2; k++)
    {
        num = k;
        for (i = k + 1; i < n; i++)
            if (strcmp(a[num], a[i]) > 0)
                num = i;

        strcpy(tmp, a[k]);
        strcpy(a[k], a[num]);
        strcpy(a[num], tmp);
    }
}