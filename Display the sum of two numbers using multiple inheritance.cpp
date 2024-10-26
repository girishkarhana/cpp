#include <iostream>
using namespace std;
class Sum{
    public:
    Sum(int a,int b){
        int isum=a+b;
        cout<<"Sum of integers: "<<isum<<endl;
    }
    Sum(float a,float b){
        float fsum=a+b;
        cout<<"sum of float num: "<<fsum<<endl;
    }
    Sum(char a,char b){
        int csum=a+b;
        cout<<"sum of character: "<<csum<<endl;
    }
};
int main() {
    Sum s(5,8);
    Sum s1(4.8f,8.9f);
    Sum s2('a','n');

    return 0;
}