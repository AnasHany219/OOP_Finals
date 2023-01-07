#include <iostream>
using namespace std;

class mycalss{
private:
    int a, b;
public:
    mycalss(int i, int j){
        a = i++;
        b = a + j;
    }
    void show(){
        cout << a << " " << b;
    }
};
int main(){
    mycalss ob(3, 5);
    ob.show();
    return 0;
}
