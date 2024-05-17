 #include <iostream>

void swap(int& x, int& y) { // 参照渡しを宣言
    int tmp; 
    std::cout << "before" << std::endl;
    std::cout << "a = " << x << std::endl;
    std::cout << "b = " << y << std::endl;
    std::cout << "\n";

    tmp = x;
    x = y;
    y = tmp;


}

int main(void) {
    int a = 5;
    int b = 10;
    swap(a, b); // 呼び出し時にも & は不要
    std::cout << "after" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}
