#include <iostream>
using namespace std;

class Base{
    protected:
    float a;
    public:
    Base(){
        a=70.80;
    }
};
class Derived:public Base{
    protected:
    float b;
    public:
    Derived(){
        b=3.55;
    }
};
class Derived2:public Derived{
    protected:
    float c;
    public:
    Derived2(){
        c=1.86;
    }
};
class Derived3:public Derived2{
    public:
    void product(){
        cout <<"product"<<a*b*c;
    }
};
int main() {
    Derived3 ob;
    ob.product();
    return 0;
}