#include <stdio.h>

#define N 40

int main(void){
    int x;

    for(int i = 1; i <= N; i++){
        x = i;
        if(x % 3 == 0 || x % 10 == 3 || (x / 10) == 3){
          printf("%d\n", i);  
        } 
    }

    return 0;
}