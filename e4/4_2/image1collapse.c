#include <stdio.h>
#include "image1.h"


/* 画像全体を「涼しげ」にする関数 */
void bmp_cool(bmp_header_t *hd, pixel_t img[MAX_Y][MAX_X]); 


int main(void)
{
   bmp_header_t hd;
   pixel_t img [MAX_Y][MAX_X];

   bmp_read("in.bmp", &hd, img);    /* in.bmp から読み込む */
   bmp_cool(&hd, img);              /* 処理の呼び出し */
   bmp_write("out.bmp", &hd, img);  /* out.bmp への書き出し */

   return 0;
}


/* 画像処理の関数の本体 */
void bmp_cool(bmp_header_t *hd, pixel_t img[MAX_Y][MAX_X])
{
  int i, j;

//ヘッダの値の更新
  hd->biHeight = hd->biHeight / 2;

  /**** 以下 (現状は画像を全体に暗くする処理になっている) を書き換えて完成させよ ****/
  for (i=0; i< (hd->biHeight); i++) {  /* biHeight は画像の高さ */
    for (j=0; j< hd->biWidth; j++) {  /* biWidth  は画像の幅 */
        int ave_r = (img[2*i][j].r + img[2*i + 1][j].r) / 2;
        int ave_b = (img[2*i][j].b + img[2*i + 1][j].b) / 2;
        int ave_g = (img[2*i][j].g + img[2*i + 1][j].g) / 2;

        img[i][j].r = ave_r;
        img[i][j].g = ave_g;
        img[i][j].b = ave_b;
    }
  }
  /************** ここまで *************************************************/

}