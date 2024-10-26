#include<iostream>
using namespace std;
class Base {
protected:
    int n1,n2;
public:
    Base(){
        n1=5;
        n2=4;
    }
};
class Derived:public Base {
public:
    void product() {
        int p=n1*n2;
        cout<<"Product of numbers: "<<p<<endl;
    }
};
int main() {
    Derived obj;
    obj.product();
    return 0;
}