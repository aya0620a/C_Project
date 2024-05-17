#include <stdio.h>
#include<time.h>
#include "iata_db.h"

#define MAX 100000

int main(void)
{
  clock_t clk_start, clk_end;
  db_t db;
  char key[KEY_LEN+1];
  char *data;

  db_init(&db);
  db_hash_load(&db);

  /* 空港コードを入力するとデータを出力; EOFまで繰り返し実行 */
  for (;;) {
    fprintf(stderr, "key = ");
    if (scanf(KEY_FMT, key)==EOF) { break; }

    //時間計測開始
    clk_start = clock();
    //10万回繰り返す
    for(int i = 0; i < MAX; i++){
        data = db_hash_search(&db, key);
    }
    //計測終了
    clk_end = clock();
    //時間の表示
    fprintf(stderr, "cpu = %11.6f [sec]\n", (double) (clk_end-clk_start)/CLOCKS_PER_SEC);

    if (data==NULL) { printf("NO RECORD\n"); }
    else { printf("%s => %s\n", key, data); }
  }

  db_delete(&db);
  return 0;
}