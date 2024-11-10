#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }

    friend Number operator-(const Number& num1, const Number& num2) {
        return Number(num1.value - num2.value);
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(10), num2(5);

    Number sum = num1 + num2;
    cout << "Sum: ";
    sum.display();

    Number difference = num1 - num2;
    cout << "Difference: ";
    difference.display();

    return 0;
}
