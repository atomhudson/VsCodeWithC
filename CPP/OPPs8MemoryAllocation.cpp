#include<iostream>
using namespace std;
class Shop {
    private: 
        int itemId[100];
        int itemPrice[100];
        int counter;
    public:
        void initCounter(void) { counter = 0; }
        void setPrice(void);
        void getPrice(void);
};

void Shop::setPrice(void) {
    cout << "Enter Id of your item: ";
    cin >> itemId[counter];
    cout << endl;
    cout << "Enter Price of your item: ";
    cin >> itemPrice[counter];
    counter++;
    cout << endl;
}

void Shop::getPrice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main() {
    Shop dukkan;
    dukkan.initCounter(); 
    for (int i = 0; i < 10; i++) {
        dukkan.setPrice();
    }
    dukkan.getPrice();
    return 0;
}
