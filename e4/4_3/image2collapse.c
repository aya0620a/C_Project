#include <stdio.h>
#include "image2.h"


/* 画像全体を「涼しげ」にする関数 */
void bmp_cool(bmp_data_t *hd); 


int main(void)
{
   bmp_data_t hd;

   bmp_read("in.bmp", &hd);    /* in.bmp から読み込む */
   bmp_cool(&hd);              /* 処理の呼び出し */
   bmp_write("out.bmp", &hd);  /* out.bmp への書き出し */

   return 0;
}


/* 画像処理の関数の本体 */
void bmp_cool(bmp_data_t *hd)
{
  int i, j;

  //ヘッダの値の更新
  hd->header.biHeight = hd->header.biHeight / 2;

  /**** 以下 (現状は画像を全体に暗くする処理になっている) を書き換えて完成させよ ****/
  for (i=0; i< (hd->header.biHeight); i++) {  /* biHeight は画像の高さ */
    for (j=0; j< hd->header.biWidth; j++) {  /* biWidth  は画像の幅 */
        int ave_r = (hd->img[2*i][j].r + hd->img[2*i + 1][j].r) / 2;
        int ave_b = (hd->img[2*i][j].b + hd->img[2*i + 1][j].b) / 2;
        int ave_g = (hd->img[2*i][j].g + hd->img[2*i + 1][j].g) / 2;

        hd->img[i][j].r = ave_r;
        hd->img[i][j].g = ave_g;
        hd->img[i][j].b = ave_b;
    }
  }

}