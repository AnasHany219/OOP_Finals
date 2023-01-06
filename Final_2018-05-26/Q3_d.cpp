#include <iostream>
using namespace std;

int add(int j, int k){
    return j + k;
}
int main(){
    int x, y;
    cout << "Enter Number 1: ";     cin >> x;
    cout << "Enter Number 2: ";     cin >> y;

    cout << "Number 1 + Number 2 = " << add(x, y);
    /*
    --------Output---------
    Enter Number 1: 3
    Enter Number 2: 3
    Number 1 + Number 2 = 6
    */
    return 0;
}
