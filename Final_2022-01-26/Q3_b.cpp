#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    //reverse(arr, arr+n);
    for(int i = n-1; i >= 0; i--){
        cout << (sum / n) - arr[i] << " ";
    }
    /*
    ---------------------Output--------------------
    19
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
    -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9
    */
    return 0;
}
