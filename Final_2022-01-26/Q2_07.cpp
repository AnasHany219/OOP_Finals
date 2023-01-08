#include<bits/stdc++.h>
using namespace std;

int main(){
    int space, rows = 2;
    for(int i = 1, k = 0; i <= rows; ++i, k = 0){   // i = 1, k = 0      | i = 2, k = 0                                                     | i = 3 > rows  
        for(space = 1; space <= rows - i; ++space){ // 1 <= 1 | 2 > 2    | 1 > 0                                                            |
            cout << " ";                            // " ",              | ""                                                               |
        }
        while(k != 2 * i - 1){       // 2*1-1 = 1 != k | 2*1-1 = 1 = k   | 2*2-1 = 3 != k | 2*2-1 = 3 != k | 2*2-1 = 3 != k | 2*2-1 = 3 = k |
            cout << "* ";            // "* "                             | "* "           | "* "           | "* "           |               |
            ++k;                     // k = 1                            | k = 1          | k = 2          | k = 3          |               |
        }
        cout << endl;                // |                                |                                                                  |
    }
    
    return 0;
}
/*
output:
 * 
* * *
*/
