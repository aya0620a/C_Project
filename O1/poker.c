#include <stdio.h>


int main() {
    int hand[5];
    int count[14] = {0};  // 1から13までの数の出現回数を格納する配列
    int check;
    int reach;
    int four;

    while(scanf("%d %d %d %d %d", &hand[0], &hand[1], &hand[2], &hand[3], &hand[4]) != EOF){
        
        //カウントの初期化
        for(int k = 1; k <= 13; ++k){
            count[k] = 0;
        }
        reach = 0;
        check = 0;
        four = 0;

        //与えられた数値の個数をカウントに格納する
        for (int i = 0; i < 5; ++i) {
            count[hand[i]]++;
        }

        for (int i = 1; i <= 13; ++i) {

            if (count[i] == 4) {
                four = 1;
            } else if (count[i] == 3) {
                reach = 1;
            } else if (count[i] == 2) {
                check++;
            }
        }

        if(four == 1){
            printf("four of a kind\n");
        }

        else if((reach == 1) && (check == 1)){
            printf("full house\n");
        }
        else if(reach == 1){
            printf("three of a kind\n");
        }
        else if(check == 2){
            printf("two pair\n");
        }
        else if(check == 1){
            printf("one pair\n");
        }
        else{
            printf("no pair\n");
        }
    }

    return 0;
}
