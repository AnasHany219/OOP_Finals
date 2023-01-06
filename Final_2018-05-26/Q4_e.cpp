#include <iostream>
using namespace std;

class ComplexNumber{
private:
    float real;
    float imag;
public:
    ComplexNumber(float r = 0, float i = 0){
        real = r;
        imag = i;
    }
    ComplexNumber operator - (ComplexNumber CN2){
        ComplexNumber CN3;
        CN3.real = real - CN2.real;
        CN3.imag = imag - CN2.imag;

        return CN3;
    }
    void Display(){
        cout << real << " " << imag;
    }
};
int main(){
    ComplexNumber CN1(4, 3), CN2(25, 12), CN3;
    CN3 = CN2 - CN1;
    CN3.Display();

    return 0;
}
