#include <iostream>
#include <cmath>
using namespace std;
class PrimeChecker {
private:
    bool isPrime(int n) const {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        
        for (int i = 5; i <= std::sqrt(n); i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }
public:
    friend class PrimeTester;
};
class PrimeTester {
public:
    bool checkPrime(const PrimeChecker& checker, int n) const {
        return checker.isPrime(n);
    }
};
int main() {
    PrimeChecker checker;
    PrimeTester tester;
    int num;
    cout<<"Enter a number to check if it's prime: ";
    cin>>num;
    if (tester.checkPrime(checker, num)) {
        cout<<num<<" is a prime number."<<endl;
    } else {
        cout<<num<<" is not a prime number."<<endl;
    }

    return 0;
}