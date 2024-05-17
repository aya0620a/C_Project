#include<stdio.h>

int main(void){
    int k;
    fprintf(stderr, "k:");
    scanf("%d", &k);
    int a[k];

    fprintf(stderr, "%d個の整数:", k);
    printf("\n");

    for(int i = 0; i < k; i++){
        scanf("%d", &a[i]);
    }
    printf("\n");

    int n;
    fprintf(stderr, "n:");
    scanf("%d", &n);
    printf("\n");

    int m;
    fprintf(stderr, "m:");
    scanf("%d", &m);
    printf("\n");

    int b[n];

    for(int l = 0; l < m; l++){
        fprintf(stderr, "%d個の整数:", n);
        for(int j = 0; j < n; j++){
            scanf("%d", &b[j]);
        }
        
        int result = 1;
        for (int i = 0; i <= n - k; i++) {
            result = 1;
            for(int j = 0; j < k; j++){
                if (b[i+j] != a[j]) {
                    result = 0;
                    break;
                }
            }
            if(result == 1){
                break;
            }
            
        }
        printf("%d\n", result);
    }
    return 0;
}