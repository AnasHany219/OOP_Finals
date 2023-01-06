#include <iostream>
using namespace std;

class Area{
private:
    float width, length, area;
public:
    Area(float w = 0, float l = 0){
        width = w;
        length = l;
        area = 0;
    }
    float GetLength(){
        return length;
    }
    void AreaCalculation(){
        area = width * length;
    }
    void displayArea(){
        cout << "\nArea = " << area;
    }
};
int main(){
    int w, l;
    try{
        cout << "Enter width: ";    cin >> w;
        if(w <= 0)          throw "Width Not Larger than 0.0";
        else if(w > 100)    throw "Width  Not Less than 100.0";

        cout << "Enter Length: ";   cin >> l;
        if(w <= 0)          throw "Width Not Larger than 0.0";
        else if(w > 100)    throw "Width  Not Less than 100.0";

        Area a(w, l);
        a.AreaCalculation();
        a.displayArea();
    }
    catch(const char *str){
        cout << "Exception : " << str;
    }

    return 0;
}
