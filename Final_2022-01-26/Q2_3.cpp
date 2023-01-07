#include <iostream>
using namespace std;

int main(){

    int x = 9;
    int y = 44;
    if(x >= 9){                 // True
        if(y > 40){             // True
            y++;                // y = 45;
        }
        else{
            y--;
        }
        cout << x << " " << y;  // 9 45
    }
    return 0;
}
