#include <iostream>
#include <assert.h> // assert を使うためのヘッダ

class stack {
    private:
        int max = 100;
        int *data;
        int sp;
    public:
        void push(int d) {assert(sp<max); data[sp++] = d;}   
        void pop() {assert(0<sp); --sp;}
        bool empty() const {return sp==0;}
        int top() const {return data[sp-1];}
        int size() const {return sp;}
        stack(int sz = 100) {
            sp = 0;
            max = sz;
            std::cout << "max = " << max << std::endl;
            data = new int[max];
        }
    ~stack() {delete [] data;}
};


int main(void) {
    stack* s = new stack; // stack関数sの動的割り当て
    s->push(5); // s = (5)
    s->push(8); // s = (5 8)
    s->push(9); // s = (5 8 9)
    std::cout << s->top() << std::endl; // 9 を表示
    s->pop(); // s = (5 8)
    std::cout << s->top() << std::endl; // 8 を表示
    s->pop(); // s = (5)
    s->push(3); // s = (5 3)
    std::cout << s->size() << std::endl; // s のサイズは 2
    while(!s->empty()) {
        std::cout << s->top() << std::endl;
        s->pop();
    }
    delete s;   //スタックの解放
    return 0;
}
