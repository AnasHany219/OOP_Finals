#include <bits/stdc++.h>
using namespace std;

class Circle{
private:
    double radius;
    string color;
public:
    Circle(){
        radius = 0;
        color = "NoColor";
    }
    Circle(double r){
        radius = r;
        color = "NoColor";
    }
    Circle(double r, string c){
        radius = r;
        color = c;
    }
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
    Circle C1, C2(7), C3(7, "Black");
    cout << "C1 : " << C1.getRadius() << ", " << C1.getColor() << "\n";
    cout << "C2 : " << C2.getRadius() << ", " << C2.getColor() << "\n";
    cout << "C3 : " << C3.getRadius() << ", " << C3.getColor() << "\n";
    return 0;
}
