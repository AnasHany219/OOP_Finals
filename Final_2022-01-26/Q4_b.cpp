#include <bits/stdc++.h>
using namespace std;

class ITEM{
private:
    int ItCode;         // Item Code
    string ItName;      // Item Name
    float ItPrice;      // Price of each item
    int ItQty;          // Quantity of item in stock
    float ItOffer ;      // Offer percentage on the item
    void GetOffer(){
        if(ItQty <= 50)                     ItOffer = 0;
        else if(ItQty > 100)                ItOffer = 10;
        else                                ItOffer = 5;
    }
public:
    void GetStock(){
        cout << "Enter Item Code: ";        cin >> ItCode;
        cout << "Enter Item Name: ";        cin >> ItName;
        cout << "Enter Price of item: ";    cin >> ItPrice;
        cout << "Enter Quantity of item: "; cin >> ItQty;
        GetOffer();
    }
    void ShowItem(){
        cout << "\nItem Code: "             << ItCode
             << "\nItem Name: "             << ItName
             << "\nPrice of item: "         << ItPrice
             << "\nQuantity of item: "      << ItQty
             << "\nOffer percentage: "      << ItOffer;
    }
};
int main(){
    ITEM I;
    I.GetStock();
    I.ShowItem();

    /*
    ----------Output----------
    Enter Item Code: 42100
    Enter Item Name: BlaBlaBla
    Enter Price of item: 100
    Enter Quantity of item: 6

    Item Code: 42100
    Item Name: BlaBlaBla
    Price of item: 100
    Quantity of item: 6
    Offer percentage: 0
    */
    return 0;
}
