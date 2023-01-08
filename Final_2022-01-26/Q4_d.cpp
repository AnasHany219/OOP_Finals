#include<iostream>
#define rows 5
#define cols 5
#define N    5
using namespace std;

class MATRIX{
private:
    int arr[rows][cols];
public:
// Set values
    void SetArray(){
        cout << "Enter element 5*5:\n";
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                cin >> arr[i][j];
        }
    }
// Compatibility of the two matrices
    bool operator == (MATRIX a2){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(arr[i][j] != a2.arr[i][j])
                    return 0;
            }
        }
        return 1;
    }
// Addition
    MATRIX operator + (MATRIX a2){
        MATRIX a3;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                a3.arr[i][j] = arr[i][j] + a2.arr[i][j];
            }
        }
        return a3;
    }
// Subtraction
    MATRIX operator - (MATRIX a2){
        MATRIX a3;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                a3.arr[i][j] = arr[i][j] - a2.arr[i][j];
            }
        }
        return a3;
    }
// Display The Elements
    friend ostream &operator << (ostream &output, MATRIX a);
};

ostream &operator << (ostream &output, MATRIX a){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            output << a.arr[i][j] << " ";
        output << "\n";
    }
    return output;
}

int main(){
    MATRIX a1, a2, a3, a4;
    a1.SetArray();
    a2.SetArray();

    if(a1 == a2)
        cout << "\nCompatibility\n\n";
    else
        cout << "\nNot Compatibility\n\n";

    cout << "First array + Second array:\n";
    a3 = a1 + a2;
    cout << a3;

    cout << "\nFirst array - Second array:\n";
    a4 = a1 - a2;
    cout << a4;

    /*
    --------------Output--------------
    Enter element 5*5:
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 6
    1 2 3 4 5
    Enter element 5*5:
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5

    Not Compatibility

    First array + Second array:2 4 6 8 10
    2 4 6 8 10
    2 4 6 8 10
    2 4 6 8 11
    2 4 6 8 10

    First array - Second array:0 0 0 0 0
    0 0 0 0 0
    0 0 0 0 0
    0 0 0 0 1
    0 0 0 0 0
    */
    return 0;
}
