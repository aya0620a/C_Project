#include<stdio.h>

int main(void){
    int n;
    fprintf(stderr,"nを入力して下さい: ");
    scanf("%d", &n);
    int x;

    for(int i = 1; i <= n; i++){
        x = i;
        if(x % 3 == 0 || x % 10 == 3 || (x / 10) == 3){
          printf("%d\n", i);  
        } 
    }

    return 0;
}