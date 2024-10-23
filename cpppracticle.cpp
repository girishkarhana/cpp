#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int sum;
    A(){
        a=10;
        sum=0;
    }
    void calcsum(int a)
    {
        for(int i=1;i<=a;i++)
        {
            sum+=i;
        }
    }
    void display()
    {
        cout<<sum<<endl;
    }
};
int main()
{
    A obj;
    obj.calcsum(obj.a);
    obj.display();

   return 0;
}