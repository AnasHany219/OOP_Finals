#include <iostream>
using namespace std;

int sub(int &a, int &b){
    a *= 3;
    cout << "a = " << a << ", b = " << b << "\n";
    return -a * b;
}
int sum(int n){
    if(n < 2)
        return 1;
    else
        return sum(n-1) + sum(n/2);
}
int main(){
    int x = 4, y = 3;
    y = sub(x, x);
    cout << "x = " << x << ", y = " << y << "\n";
    y = sum(x);
    cout << "x = " << x << ", y = " << y << "\n";
    return 0;
}
