#include <iostream>
using namespace std;


int main(){
    for(float x = -100; x <= 100; x += 4){
        if(x > -1)
            cout << "x = " << x << ", y(x) = " << (((1 / 2) * (x * x)) + 1) << "\n";
        else
            cout << "x = " << x << ", y(x) = " << (((1 / 2) * (x * x)) + 8) << "\n";
    }
    return 0;
}
