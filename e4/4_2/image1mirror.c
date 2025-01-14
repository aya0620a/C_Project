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
  double tmp;

  /**** 以下 (現状は画像を全体に暗くする処理になっている) を書き換えて完成させよ ****/
  for (i=0; i< (hd->biHeight)/2; i++) {  /* biHeight は画像の高さ */
    for (j=0; j< hd->biWidth; j++) {  /* biWidth  は画像の幅 */
            tmp = img[i][j].r;
            img[i][j].r = img[hd->biHeight-i-1][j].r;
            img[hd->biHeight-i-1][j].r = tmp;

            tmp = img[i][j].b;
            img[i][j].b = img[hd->biHeight-i-1][j].b;
            img[hd->biHeight-i-1][j].b = tmp;

            tmp = img[i][j].g;
            img[i][j].g = img[hd->biHeight-i-1][j].g;
            img[hd->biHeight-i-1][j].g = tmp;     

    }
  }
  /************** ここまで *************************************************/

}