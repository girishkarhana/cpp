#include <iostream>
using namespace std;
class Base {
public:
    virtual int sum(int a, int b, int c) {
        int result=a+b+c;
        cout<<"Sum calculated by Base class: "<<result<<endl;
        return result;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        int result=a+b+c;
        cout<<"Sum calculated by Derived class: "<<result<<endl;
        return result;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    Base* ptr=&derivedObj;
    ptr->sum(a,b,c);
    derivedObj.Base::sum(a,b,c);
    
    return 0;
}
