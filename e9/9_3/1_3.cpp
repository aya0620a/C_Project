#include <iostream>
#include <assert.h> // assert を使うためのヘッダ

class stack {
    private:
    static const int max = 100;
    int data[max];
    int sp;
    public:
    void push(int); // データをプッシュする
    void pop(); // データをポップする
    bool empty() const; // スタックが空のとき true を返す
    int top() const; // スタックトップのデータを返す
    int size() const; // 現在格納されているデータ数を返す
    stack(); // コンストラクタ
    ~stack(); // デストラクタ
};

void stack::push(int d) {
    assert(sp<max);
    data[sp++] = d;
}
 

void stack::pop() {
assert(0<sp);
--sp;
}
 

bool stack::empty() const {
    return sp==0;
}

int stack::top() const {
    return data[sp-1];
}

int stack::size() const {
    return sp;
}

stack::stack() {sp = 0;}

stack::~stack() {}


int main(void) {
    stack s; // stack 型変数の宣言
    s.push(5); // s = (5)
    s.push(8); // s = (5 8)
    s.push(9); // s = (5 8 9)
    std::cout << s.top() << std::endl; // 9 を表示
    s.pop(); // s = (5 8)
    std::cout << s.top() << std::endl; // 8 を表示
    s.pop(); // s = (5)
    s.push(3); // s = (5 3)
    std::cout << s.size() << std::endl; // s のサイズは 2
    while(!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}
