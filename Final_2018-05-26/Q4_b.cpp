#include <iostream>
using namespace std;

class Account{
private:
    int balance;
    int rate;
public:
    Account(int a = 0){
        balance = a;
        rate = 0;
    }
    void add(int n){
        balance += n;

        if(balance > 100000)
            balance += balance * 0.2;
        else if(balance > 10000)
            balance += balance * 0.15;
        else if(balance > 100000)
            balance += balance * 0.1;
    }
    void withdraw(int n){
        if (balance < n)
            cout << "Your penalty is: $20";
        else
            balance -= n;
    }
    void Inquire(){
        cout << "The current balance: " << balance << "\n";
    }
};
int main(){
    Account A(10000);
    A.add(2000);
    A.Inquire();        // The current balance: 13800
    return 0;
}
