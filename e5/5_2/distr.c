#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int* new_array_scan(int *pn);

int main(void)
{
  int *a = NULL;
  int *count = NULL;
  int i, n;
  int max = INT_MIN;
  int min = INT_MAX;

  //new_array_scan を使って, 標準入力から数値を読み取った配列を取得する.
  a = new_array_scan(&n);

  //配列中のデータの最大値 max と最小値 min を求める.
  for(i=0; i<n; i++){
    if(max < a[i]){
      max = a[i];
    }
    if(min > a[i]){
      min = a[i];
    }
  }

  //サイズmax-min-1のint型配列のcountを割り当てる
  count = malloc(sizeof(int)*(max-min+1));

  //初期化
  for (i=0; i<max-min+1; i++) {
    count[i] = 0;
  }
  
  //データの出現回数を数える
  for(i=0; i<n; i++){
    count[a[i]-min]++;
  }

  //出現回数が 1 以上のものだけを表示する
  for(i=0; i<max-min+1; i++){
    if(count[i] >= 1){
      printf("%d: %d\n", i+min, count[i]);
    }
  }


  
  //解放
  free(a);
  free(count);
  
  //freeした後の後にNULLを代入する習慣をつける
  a = NULL;
  count = NULL;

  return 0;
}
