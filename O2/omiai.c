#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x_accept(int c, int y)
{
    return 1;
}

int main(void)
{

    srand(time(NULL)); // 乱数の初期化


    int total_num = 100;
    int success_marriage = 0;
    int total_level = 0;

    for (int num = 0; num < total_num; num++)
    {

        int x = 0;

        // 1～10までの乱数の作成
        int rand_x = rand() % 10 + 1;

        if (rand_x <= 1)
        {
            x = 1;
        }

        else if (rand_x <= 3)
        {
            x = 2;
        }

        else if (rand_x <= 7)
        {
            x = 3;
        }

        else if (rand_x <= 9)
        {
            x = 4;
        }

        else
        {
            x = 5;
        }

        int married = 0;

        for (int chance = 1; chance <= 15; chance++)
        {

            int y = 0;

            // 1～10までの乱数を作成
            int rand_y = rand() % 10 + 1;

            if (rand_y <= 1)
            {
                y = 1;
            }

            else if (rand_y <= 3)
            {
                y = 2;
            }

            else if (rand_y <= 7)
            {
                y = 3;
            }

            else if (rand_y <= 9)
            {
                y = 4;
            }

            else
            {
                y = 5;
            }

            int acceptance = x_accept(chance, y);

            // 結婚条件
            double p = 0.19 * x * (1.1 - 0.1 * y);

            // yesと言う確率よりも小さいとき
            if (acceptance && ((double)rand() / RAND_MAX) < p)
            {
                married = 1;
                total_level += y;
            }
        }

        if (married == 1)
        {
            success_marriage++;
        }

        else
        {
            // 結婚できなかった場合
            total_level +=  -5;
        }
    }

    double marriage_probability = (double)success_marriage / total_num;
    double average_level = (double)total_level / total_num;

    printf("結婚できる確率: %.2f\n", marriage_probability * 100);
    printf("結婚できる相手のレベルの期待値: %.2f\n", average_level);

    return 0;
}
