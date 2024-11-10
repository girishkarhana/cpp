#include <iostream>
using namespace std;
class A;
class B;
class C;
class FriendClass {
public:
    void accessData(A& a);
    void accessData(B& b);
    void accessData(C& c);
};
class A {
private:
    int privateA=10;
protected:
    int protectedA=20;
public:
    friend class FriendClass;
};
class B {
private:
    int privateB=30;
protected:
    int protectedB=40;
public:
    friend class FriendClass;
};
class C {
private:
    int privateC=50;
protected:
    int protectedC=60;
public:
    friend class FriendClass;
};
void FriendClass::accessData(A& a) {
    cout<<"Class A - Private: "<<a.privateA<<", Protected: "<<a.protectedA<<endl;
}
void FriendClass::accessData(B& b) {
    cout<<"Class B - Private: "<<b.privateB<<", Protected: "<<b.protectedB<<endl;
}
void FriendClass::accessData(C& c) {
    cout<<"Class C - Private: "<<c.privateC<<", Protected: "<<c.protectedC<<endl;
}
int main() {
    A a;
    B b;
    C c;
    FriendClass friendObj;
    friendObj.accessData(a);
    friendObj.accessData(b);
    friendObj.accessData(c);
    return 0;
}