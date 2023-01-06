#include <iostream>
using namespace std;

class Student{
private:
    string Rollno;
    string Name;
    int Number_Of_subjects;
    int Marks[];
public:
    Student(){
        Rollno = "Empty";
        Name = "NoName";
        Number_Of_subjects = 7;
        for(int i = 0; i < Number_Of_subjects; i++){
            Marks[i] = 0;
        }
    }
    void displayDetails(){
        cout << "Rollno: " << Rollno
             << "\nName: " << Name
             << "\nNumber Of subjects" << Number_Of_subjects
             << "\nMarks : [ " << Marks[0] << ", "
                             << Marks[1] << ", "
                             << Marks[2] << ", "
                             << Marks[3] << ", "
                             << Marks[4] << ", "
                             << Marks[5] << ", "
                             << Marks[6] << "]";
    }
};

int main(){
    Student S;
    S.displayDetails();

    return 0;
}
