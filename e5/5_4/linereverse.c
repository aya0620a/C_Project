#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINELEN 128
#define MAX_LINES 100

int main() {
    char *line[MAX_LINES+1];
    char s[LINELEN+1];
    int line_num = 0;


    // 行ごとに配列に格納
    while (fgets(s, LINELEN, stdin) != NULL) {

        // 配列のサイズを超えた場合、エラーメッセージを出力
        if (line_num >= MAX_LINES) {
            fprintf(stderr, "行数が多すぎます\n");
            exit(1);
        }

        // 文字列をコピーしてメモリを割り当て
        line[line_num] = (char *)malloc((strlen(s)));
        if (line[line_num] == NULL) {
            fprintf(stderr, "lineのmallocが失敗\n");
            exit(1);
        }
        strcpy(line[line_num], s);

        line_num++;

    }


    // // 行を出力
    for (int i = line_num-1; i>= 0; i--) {
        printf("%s", line[i]);
        free(line[i]); // メモリを解放
    }

    return 0;
}

