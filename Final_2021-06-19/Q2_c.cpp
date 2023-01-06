#include <iostream>
using namespace std;


int main(){
    for(int i = 980; i >= 666; i--){
        cout << i;
        if(i % 6 == 3)  cout << "\n";
        else            cout << ",";
    }
    return 0;
}
