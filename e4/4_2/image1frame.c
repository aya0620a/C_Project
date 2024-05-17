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

  /**** 以下 (現状は画像を全体に暗くする処理になっている) を書き換えて完成させよ ****/
    for (i = 0; i < hd->biHeight; i++){
        for (j = 0; j < hd->biWidth; j++){
            if (i <= 8 - 1 || i >= hd->biHeight - 8){
                img[i][j].r = 255;
                img[i][j].g = 127;
                img[i][j].b = 127;
            }
            if (j <= 8 - 1 || j >= hd->biWidth - 8){
                img[i][j].r = 255;
                img[i][j].g = 127;
                img[i][j].b = 127;
            }
        }
    }
  ///色が違うのでdiffが通らないのは当たり前ではないんですか？？


  /************** ここまで *************************************************/

}