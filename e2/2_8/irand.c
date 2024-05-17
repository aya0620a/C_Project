#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int irand(int a, int b){
    return rand() % (b - a + 1) + a;
}

int main() {
    int a, b, n;
    printf("a, b, n: ");
    scanf("%d %d %d", &a, &b, &n);

    // 乱数生成のシード値の初期化
    srand(time(NULL));

    int counts[b - a + 1];

    for (int i = 0; i <= b - a; i++) {
        counts[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int random_num = irand(a, b);
        printf("%d ", random_num);
        counts[random_num - a]++;
    }

    printf("\n");

    for (int i = a; i <= b; i++) {
        printf("%d: %d\n", i, counts[i - a]);
    }

    return 0;
}


