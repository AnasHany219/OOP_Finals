#include <bits/stdc++.h>
using namespace std;
class LargeN{
private:
    long long num1;
    long long num2;
public:
    LargeN(long long n1 = 0, long long n2 = 0){
        num1 = n1;
        num2 = n2;
    }
    long long Max(){
        return (num1 >= num2? num1 : num2);
    }

};
int main(){
    long long number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    LargeN m(number1, number2);
    cout << "The Largest number: " << m.Max();
    return 0;
}
