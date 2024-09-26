#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is: "<<id<<endl;
            cout<<"Price of this item is: "<<price<<endl;
        }
};
int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size]; // We have allocated the memory for 3 shop object
    ShopItem *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item "<<i+1<<": ";
        cin >> p >> q;
        ptr->setData(p,q);
        ptr++;
    }

    // After the complete execution of above for loop ptr is pointing to last shopitem instead of starting shopitem.

    ptr = ptrTemp;

    // This above line help us to point it to first shopitem

    for (int i = 0; i < size; i++)
    {
        cout << "Item number: "<<i+1<<endl;
        ptr->getData();
        ptr++;
    }
    return 0;
}