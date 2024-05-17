#include <stdlib.h>
#include<stdio.h>
#include "pref.h"

#define PRENUM 48

int main(void)
{
   pref_t *p[PRENUM];
   int c = 0;

    // 標準入力からデータを読み込み
    while (c < PRENUM) {
      p[c] = pref_new_scan();
      if (p[c] == NULL) {
         break;
      }
      c++;
    }


   for(int i = c - 1; i >= 0; i--){
       pref_print(p[i]);
       free(p[i]);
       p[i] = NULL;
    }


   return 0;
}