#include <iostream>
using namespace std;
class A;
class B;
class C;
class Friend {
public:
    void showData(A& a, B& b, C& c);
};
class A {
private:
    int privateA=10;
protected:
    int protectedA=20;
    friend class Friend;
};
class B {
private:
    int privateB=30;
protected:
    int protectedB=40;
    friend class Friend;
};
class C {
private:
    int privateC=50;
protected:
    int protectedC=60;
    friend class Friend;
};
void Friend::showData(A& a, B& b, C& c) {
    cout<<"Class A private data: "<<a.privateA<<", protected data: "<<a.protectedA<<endl;
    cout<<"Class B private data: "<<b.privateB<<", protected data: "<<b.protectedB<<endl;
    cout<<"Class C private data: "<<c.privateC<<", protected data: "<<c.protectedC<<endl;
}
int main() {
    A a;
    B b;
    C c;
    Friend friendObj;
    friendObj.showData(a, b, c);
    return 0;
}