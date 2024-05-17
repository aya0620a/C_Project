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
  double total_r, total_b, total_g;
  double ave_r, ave_b, ave_g;

  /**** 以下 (現状は画像を全体に暗くする処理になっている) を書き換えて完成させよ ****/
  for (i=0; i< hd->biHeight; i += 16) {  /* biHeight は画像の高さ */
    for (j=0; j < (hd->biWidth)/2; j += 16) {  /* biWidth  は画像の幅 */
      total_b = total_g = total_r = 0;
    //16画素ごとの画素値の平均をとる  
      for(int k = 0; k < 16; k++){
        for(int s = 0; s < 16 ; s++){
          total_r += img[i+k][j+s].r; 
          total_b += img[i+k][j+s].b;
          total_g += img[i+k][j+s].g;       
        }
      }
    //各色の256の平均を取る  
      ave_r = total_r / 256;
      ave_b = total_b / 256;
      ave_g = total_g / 256;

    //求めた16×16画素をそれぞれに代入
      for (int x = 0; x < 16; x++) {
        for (int y = 0; y < 16; y++) {
          img[i+x][j+y].r = ave_r;
          img[i+x][j+y].g = ave_g;
          img[i+x][j+y].b = ave_b;
        }
      }      
    }
  }
  /************** ここまで *************************************************/

}