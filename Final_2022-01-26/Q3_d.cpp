#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cout << "Enter an integer number: ";
    cin >> n;
    cout << "The Number " << n << " has ";
    while(n > 0){
        if(n % 10 == 7)
            count++;
        n /= 10;
    }
    cout << count << " seven(s)";
    /*
    ------------Output------------
    Enter an integer number: 57357
    The Number 57357 has 2 seven(s)
    */
    return 0;
}
