#include <iostream>
using namespace std;

int main() {
    start:
    int n;
    cout << "Enter a positive number : ";
    cin >> n;
    while(n < 1){
        cout << "Not positive. Enter another : ";
        cin >> n;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j >= i){
                if((j-i) % 2 == 0)
                    cout << '#';
                else
                    cout << 'o';
            }
        }
        if(i % 2 == 1)
            for(int k = 0; k < i; k++)
                cout << 'o';
        else
            for(int k = 0; k < i; k++)
                cout << '#';
        cout << "\n";
    }
    return 0;
}
/*
------------Output-------------
Enter a positive number : -5
Not positive. Enter another : 7
#o#o#o#
#o#o#oo
#o#o###
#o#oooo
#o#####
#oooooo
#######
*/
