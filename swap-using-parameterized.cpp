#include<iostream>
using namespace std;
class A{
    public:
    int num1;
    int num2;
    A(int a,int b){
        num1=a;
        num2=b;
    }
    void swap()
    {
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    void display()
    {
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
};
int main()
{
    A obj(5,7);
    cout<<"before swap"<<endl;
    obj.display();
    cout<<"after swap"<<endl;
    obj.swap();
    obj.display();

   return 0;
}