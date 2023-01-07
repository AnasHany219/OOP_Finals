#include <bits/stdc++.h>
using namespace std;

class Circle{
private:
    double radius = 1.0;
    string color = "red";
public:
    double getRadius(){
        return radius;
    }
    string getColor(){
        return color;
    }
    double getArea(){
        return 22.0 / 7.0 * radius * radius;
    }
};
int main(){
    Circle Ci;
    cout << Ci.getRadius() << "\n";
    cout << Ci.getColor() << "\n";
    cout << Ci.getArea();
    return 0;
}
