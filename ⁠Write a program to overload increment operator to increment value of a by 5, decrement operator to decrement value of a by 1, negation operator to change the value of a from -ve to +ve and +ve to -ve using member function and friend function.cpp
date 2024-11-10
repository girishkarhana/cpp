#include <iostream>
using namespace std;

class Number {
private:
    int a;
public:
    Number(int value = 0) : a(value) {}
    Number& operator++() {
        a += 5;
        return *this;
    }
    Number& operator--() {
        a -= 1;
        return *this;
    }
    Number operator-() const {
        return Number(-a);
    }
    friend Number operator++(Number& num, int) {
        Number temp = num;
        num.a += 5;
        return temp;
    }
    friend Number operator--(Number& num, int) {
        Number temp = num;
        num.a -= 1;
        return temp;
    }
    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

int main() {
    Number num(-10);
    cout << "Initial value: "; num.display();
    ++num;
    cout << "After prefix increment (++a): "; num.display();
    num++;
    cout << "After postfix increment (a++): "; num.display();
    --num;
    cout << "After prefix decrement (--a): "; num.display();
    num--;
    cout << "After postfix decrement (a--): "; num.display();
    num = -num;
    cout << "After negation (-a): "; num.display();

    return 0;
}
