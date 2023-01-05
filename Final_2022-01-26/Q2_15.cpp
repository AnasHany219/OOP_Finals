#include <iostream>
using namespace std;

class Person{
public:
    string m_name;
    int m_age;
    string getName() const{
        return m_name;
    }
    int getAge() const{
        return m_age;
    }
    Person(string name = "", int age = 0) : m_name(name), m_age(age){}
};
class Employee : public Person{
public:
    double m_hourlySalary;
    long m_employeeID;
    Employee(double hourlySalary = 0.0, long employeeID = 0) : m_hourlySalary(hourlySalary), m_employeeID(employeeID){}

    void printNameAndSalary() const{
        cout << m_name << ": " << m_hourlySalary + 8.5 << '\n';
    }
};
int main(){
    Employee Ahmed(80.25, 12345);
    Ahmed.m_name = "Mohamed";
    Ahmed.printNameAndSalary();
    return 0;
}
