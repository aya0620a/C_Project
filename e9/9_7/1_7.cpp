#include <iostream>
#include <assert.h>

class Complex
{
private:
    double real; // 実部
    double imag; // 虚部
public:
    Complex()
    {
        real = 0.0;
        imag = 0.0;
    }
    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }
    ~Complex() {}
    double re() const { return real; }  // 実部を取り出す
    double im() const { return imag; }  // 虚部を取り出す
    void set_re(double r) { real = r; } // 実部を設定
    void set_im(double i) { imag = i; } // 虚部を設定
    void print(std::ostream &os) const
    { // 出力
        os << real << "+" << imag << "i";
    }
};

Complex add(Complex a, Complex b)
{
    double r = a.re() + b.re();
    double i = a.im() + b.im();
    return Complex(r, i);
}

Complex operator+(Complex a, Complex b)
{
    double r = a.re() + b.re();
    double i = a.im() + b.im();
    return Complex(r, i);
}

// 減算の演算子
Complex operator-(Complex a, Complex b) 
{
    return Complex(a.re() - b.re(), a.im() - b.im());
}

// 乗算の演算子
Complex operator*(Complex a, Complex b)
{
    return Complex(
        a.re() * b.re() - a.im() * b.im(),
        a.re() * b.im() + a.im() * b.re()
    );
}

int main(void)
{
    Complex a(1.00, 2.00);
    Complex b(3.00, 4.00);
    Complex c(2.35, 5.32);
    Complex s = c - b;
    s.print(std::cout);
    std::cout << std::endl;
    Complex t = a * b;
    t.print(std::cout);
    std::cout << std::endl;
    return 0;
}
