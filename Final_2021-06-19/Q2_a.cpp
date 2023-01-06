#include <iostream>
using namespace std;


int main(){
    int width, length, height;
    cout << "Enter width (inches) : ";      cin >> width;
    cout << "Enter length (inches) : ";     cin >> length;
    cout << "Enter height (inches) : ";     cin >> height;
    cout << "The volume : " << width * length * height;
    return 0;
}
