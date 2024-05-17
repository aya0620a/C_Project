#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include "pref.h"

pref_t *pref_new(char *name, double area, int population){
   /* 構造体へのポインタを格納する変数 */
   pref_t *a = NULL;

   /* 動的割当て */
   a = (pref_t *) malloc(sizeof(pref_t));

   strncpy(a->name, name, NAMELEN);
   a->area = area;
   a->population = population;

   return a;
}

void pref_print(pref_t* p){
   printf("%-10s %9.2f %9d\n", p->name, p->area, p->population);
}

