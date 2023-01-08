#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 8, k = 20;
    n = (160 % k ? k+1 : k-1);
    cout << "n = " << n << " k = " << k << endl;
    // n = 19 k = 20
    return 0;
}
