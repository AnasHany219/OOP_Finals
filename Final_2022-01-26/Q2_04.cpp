#include <iostream>
using namespace std;

int main(){
    int x = 0;
    do{
        x += 7;                     // 7    | 14
        cout << x << " ";           // 7 14
    }
    while(x <= 10 || x % 2 != 0);   // true | false
    return 0;
}
