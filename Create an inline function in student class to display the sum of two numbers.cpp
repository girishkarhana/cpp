#include <iostream>
using namespace std;
class Student {
public:
    inline void displaySum(int a, int b) {
        cout<<"The sum is: "<<(a + b)<<endl;
    }
};
int main() {
    Student student;
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    student.displaySum(num1, num2);
    return 0;
}