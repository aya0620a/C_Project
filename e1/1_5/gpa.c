#include<stdio.h>

int main(void){
    int x;
    int count = 0;
    double point, total, score;
    total = 0;
    for(;;){
        if (scanf("%d", &x)==EOF) {
            break;
        }


        if(90 <= x && x <= 100){
            point = 4.0;
        }

        if(85 <= x && x <= 89){
            point = 3.5;
        }

        if(80 <= x && x <= 84){
            point = 3.0;
        }

        if(75 <= x && x <= 79){
            point = 2.5;
        }      
    
        if(70 <= x && x <= 74){
            point = 2.0;
        }

        if(65 <= x && x <= 69){
            point = 1.5;
        }

        if(60 <= x && x <= 64){
            point = 1.0;
        }
    
        if((x >= 0 )&& (x <= 59)){
            point = 0.0;
        }
        total += point;

        printf("%2.1f\n", point);

       count++;

    }
    
    score = total / (double)count;
    printf("%.3f\n", score);

    

    return 0;
}