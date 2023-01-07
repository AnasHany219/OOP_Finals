#include <iostream>
using namespace std;

class Distance{
private:
    double feet, inch;
public:
    Distance(int f = 0, int i = 0){
        feet = f, inch = i;
    }
    double GetFeet(){
        return feet + inch / 12;
    }
    void display(){
        cout << "Distance = "
             << feet << " feet, "
             << inch << " inch.\n";
    }
};
string minDist(Distance D1, Distance D2){
    double feet1 = D1.GetFeet();
    double feet2 = D2.GetFeet();

    return (feet1 >= feet2? "D2" : "D1");
}
int main(){
    Distance D1(10, 13), D2(10, 14);
    cout << minDist(D1, D2);
    return 0;
}
