#include <iostream>
using namespace std;
class Asum{
    public:
    int arr[5];
    int sum;
    public:
    Asum(){
        int tempArr[]={1,2,3,4,5};
        for(int i=0;i<5;i++){
            arr[i]=tempArr[i];
        }
        sum=0;
    }
    Asum(const Asum &s){
        sum=s.sum;
        for(int i=0;i<5;i++){
            arr[i]=s.arr[i];
        }
    }
    void asum(){
        for(int i=0;i<5;i++){
            sum+=arr[i];
        }
    }
    void display(){
        cout<<"sum of all positive numbers is "<<sum;
    }
};
int main() {
    Asum s;
    Asum s1=s;
    s.asum();
    s1.asum();
    s1.display();
    return 0;
}