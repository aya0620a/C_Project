#include <iostream> // C の <stdin.h> に相当

int main(void) {

 std::cout << "円とウォンの為替" << std::endl; // 出力の構文
 int yen; // 宣言は, 使う前ならプログラム中のどこにあってもよい
 std::cout << "n = ";
 std::cin >> yen; // 入力の構文
 double s = 0;
 for (int i=1; i<=yen; i++) s = i * 8.93;
 std::cout << "yen = " <<yen<< "  won = " << s << std::endl;
 return 0;
}