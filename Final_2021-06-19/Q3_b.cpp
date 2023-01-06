#include <bits/stdc++.h>
using namespace std;

int main(){
    int hh, mm, ss;
    char c;
    cout << "Enter time as HH:MM:SS format : ";
    cin >> hh >> c >> mm >> c >> ss;

    mm += hh * 60;
    ss += mm * 60;
    cout << "Total seconds = " << ss;
    return 0;
}
