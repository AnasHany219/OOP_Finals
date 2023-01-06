#include <iostream>
using namespace std;

class GredBook{
private:
    string courseName;
public:
    GredBook(string name){
        courseName = name;
    }
    void setCourseName(string name){
        courseName = name;
    }
    string getCourseName(){
        return courseName;
    }
    void displayMassage(){
        cout << "Course Name: " << courseName;
    }
};
int main(){
    GredBook GB("OOP");
    
    GB.setCourseName("Object-oriented programming");
    
    GB.displayMassage();
    return 0;
}
