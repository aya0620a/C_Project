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
//   int i, j;

//   /**** 以下 (現状は画像を全体に暗くする処理になっている) を書き換えて完成させよ ****/
// //   for (i=0; i< hd->header.biHeight; i++) {  /* biHeight は画像の高さ */
// //     for (j=0; j< hd->header.biWidth; j++) {  /* biWidth  は画像の幅 */
// //       hd->img[i][j].r = hd->img[i][j].r*0.5;
// //       hd->img[i][j].g = hd->img[i][j].g*0.5;
// //       hd->img[i][j].b = hd->img[i][j].b*0.5;
// //     }
// //   }
  /************** ここまで *************************************************/

}