#include <iostream>
using namespace std;

class Fraction{
public:
    Fraction(int n = 0, int d = 1) : num(n), den(d){
        reduce();
        cout << "Object born";
    }
    ~Fraction(){
        cout << "\nObject dies";
    }
    void print(){
        cout << num << '/' << den;
    }
private:
    int num, den;
    int gcd(int j, int k){
        if(k == 0)
            return j;
        return gcd(k, j%k);
    }
    void reduce(){
        int g = gcd(num, den);
        num /= g;
        den /= g;
    }
};
int main(){
    {
        Fraction x(22, 7);
        cout << "\nx i alive and = ";
        x.print();
    }
    cout << "\nNow we are between blocks.\n";
    {
        Fraction y;
        cout << "\ny is alive and = ";
        y.print();
    }

    return 0;
}
