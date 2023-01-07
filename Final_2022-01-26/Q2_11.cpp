#include <iostream>
using namespace std;

class Aroundus{
    int Place, Humidity, Temp;
public:
    Aroundus(int P = 2){
        Place = P, Humidity = 60, Temp = 20;
    }
    void Hot(int T){
        Temp += T;
    }
    void Humid(int H){
        Humidity += H;
    }
    void JustSee(){
        cout << Place << ";" << Temp << "&";
        cout << Humidity << "%" << endl;
    }
};
int main(){
    Aroundus A, B(5);
    A.Hot(10);
    A.JustSee();
    B.Humid(15);
    B.Hot(2);
    B.JustSee();
    A.Humid(5);
    A.JustSee();
    return 0;
}
