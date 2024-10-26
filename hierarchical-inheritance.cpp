#include<iostream>
using namespace std;

class B{
protected:
    int n1,n2;
public:
    void setN(int a,int b) {
        n1=a;
        n2=b;
    }
};
class FD:public B{
public:
    void displayFN() {
        cout<<"First no.: "<<n1<<endl;
    }
};
class SD : public B{
public:
    void displaySN() {
        cout<<"Second no.: "<<n2<<endl;
    }
};
int main() {
    FD obj1;
    SD obj2;
    obj1.setN(35, 150);
    obj2.setN(53, 105);
    obj1.displayFN();
    obj2.displaySN();
    return 0;
}