#include <iostream>
using namespace std;

int main(){
    int width, length;
    cout << "Enter width (inches): ";
    cin >> width;
    cout << "Enter length (inches): ";
    cin >> length;

    cout << "Area = " << width * length;
    /*
    ---------Output---------
    Enter width (inches): 5
    Enter length (inches): 5
    Area = 25
    */
    return 0;
}
