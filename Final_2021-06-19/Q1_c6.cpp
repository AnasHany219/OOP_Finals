#include <iostream>
using namespace std;


int main(){
    int X[] = {3, 5, 8, 13, 21}, *p = X;
    while(*p < 100){
        if(*p % 3 != 0)
            *p = *p + 1;
        else
            *p = *p * 2;
        p++;
    }
    for(int i = 4; i >= 1; i--){
        cout << X[i] << "*";
        if(i % 3 == 0)
            cout << "\n";
    }
    cout << X[0] * 3 << "\n";
    return 0;
}
