#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    double weight[n];

    for(int i = 0; i < n; i++){
        scanf("%lf", &weight[i]);
    }
    int j;
    double total = 0;
    for(;;){
    if(scanf("%d", &j) == EOF){
        break;
    }

    total += weight[j];
    }

    printf("%.1f", total);

    return 0;
}