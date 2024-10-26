#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"Constructor A"<<endl;
        }
        void funcA(){
            cout<<"Function A"<<endl;
        }
};
class B : public A{
    public:
        B(){
            cout<<"Constructor B"<<endl;
        }
        void funcB(){
            cout<<"Function B"<<endl;
        }
};
class C : public A{
    public:
        C(){
            cout<<"Constructor C"<<endl;
        }
        void funcC(){
            cout<<"Function C"<<endl;
        }
};
class D : public A{
    public:
        D(){
            cout<<"Constructor D"<<endl;
        }
        void funcD(){
            cout<<"Function D"<<endl;
        }
};
class E : public B{
    public:
        E(){
            cout<<"Constructor E"<<endl;
        }
        void funcE(){
            cout<<"Function E"<<endl;
        }
};
int main(){
    A objA;
    B objB;
    C objC;
    D objD;
    E objE;
    objE.funcA();
    objE.funcB();
    objE.funcE();

    return 0;
}