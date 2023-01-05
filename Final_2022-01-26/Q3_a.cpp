#include <iostream>
using namespace std;

int main(){
    double r, h, v;
    cout << "Enter The Radius (feet): ";
    cin >> r;
    cout << "Enter The Height (feet): ";
    cin >> h;

    v = ((22 / 7) * (r * r) * h) / 3;
    cout << "V = " << v;

    /*
    ----------OutPut----------
    Enter The Radius (feet): 7
    Enter The Height (feet): 3
    V = 147
    */
    return 0;
}
