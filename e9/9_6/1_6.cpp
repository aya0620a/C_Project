#include <iostream>
#include <assert.h>

class stack {
    private:
        static const int max = 100;
        int data[max];
        int sp;
    public:
        void push(int);
        void pop();
        bool empty() const;
        int top() const;
        int size() const;
        friend bool equal(const stack&, const stack&);
        stack();
        ~stack();
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

class Complex {
    private:
        double real; // 実部
        double imag; // 虚部
    public:
        Complex() {real = 0.0; imag = 0.0;}
        Complex(double r, double i) {real = r; imag = i;}
        Complex(double r) { real = r; imag = 0.0; } 
        ~Complex() {}
        double re() const {return real;} // 実部を取り出す
        double im() const {return imag;} // 虚部を取り出す
        void set_re(double r) {real = r;} // 実部を設定
        void set_im(double i) {imag = i;} // 虚部を設定
        void print(std::ostream& os) const { // 出力
        os << real << "+" << imag << "i";
    }
};



int main(void) {
    Complex a; // 値の設定の仕方その 1
    a.set_re(1.11);
    a.set_im(2.22);
    Complex b(3.33,4.44); // 値の設定の仕方その 2
    Complex c; // 値の設定の仕方その 3
    c = Complex(9.99, 88.88);
    Complex d(5.55);
    a.print(std::cout); std::cout << std::endl;
    b.print(std::cout); std::cout << std::endl;
    c.print(std::cout); std::cout << std::endl;
    d.print(std::cout); std::cout << std::endl;

    c = a; // 普通の代入も行える
    c.print(std::cout); std::cout << std::endl;
    return 0;
}

