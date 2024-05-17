#include <stdlib.h>
#include<stdio.h>
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

pref_t *pref_new_scan() {
   pref_t *p = (pref_t *)malloc(sizeof(pref_t));
   if (p == NULL) {
      fprintf(stderr, "pのmallocが失敗\n");
      exit(1);
   }

   if (scanf("%s", p->name) == EOF) {
      return NULL;
   }

   if (scanf("%lf", &p->area) == EOF) {
      return NULL;
   }

   if (scanf("%d", &p->population) == EOF) {
      return NULL;
   }

   return p;
}

void pref_print(pref_t* p){
   printf("%-10s %9.2f %9d\n", p->name, p->area, p->population);
}

