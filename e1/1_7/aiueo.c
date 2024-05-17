#include<stdio.h>
#include<string.h>

#define W_LEN 31
#define W_FIT "%31s"

int main(void){
    int i;
    char w[W_LEN + 1];

    for(;;){
        fprintf(stderr, "英単語を入力してください (qqで終了):");
        scanf(W_FIT, w);
        if(strcmp(w, "qq" )== 0){ break;}

        for(i = 0; w[i] != '\0'; i++){
            if(w[i] == 'a' || w[i] == 'i' || w[i] == 'u' || w[i] == 'e' || w[i] == 'o') {
            }

            else{
                w[i] = '*'; 
            }
        }
        printf("%s\n", w);
    }
        return 0;
}