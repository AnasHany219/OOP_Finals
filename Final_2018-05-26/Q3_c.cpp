#include <iostream>
using namespace std;

int main(){
    for(int x = -40; x <= 40; x += 2){
        if(x < 2)
            cout << "x = " << x << ", y(x) = " << x * x - 5 << "\n";
        else
            cout << "x = " << x << ", y(x) = " << 4 * x - 9 << "\n";
    }
    return 0;
}
