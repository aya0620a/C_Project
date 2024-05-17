#include <stdio.h>
#include<math.h>
#include "dist5.h"

int point_scan(point_t *p){
    if(scanf("%lf", &p->x) == EOF)
    return EOF;
    if(scanf("%lf", &p->y) == EOF)
    return EOF;
    
    return 1;
}

double dist(point_t *p1, point_t *p2){
    double dis;

    dis = sqrt(pow((p2->x - p1->x), 2) + pow((p2->y - p1->y), 2));

    return dis;
}
