#include <iostream>
using namespace std;

class BankDeposite {
    private: 
        int principal;
        int years;
        float interestRate;
        float returnValue;

    public: 
        BankDeposite() {}

        // Constructor with float interest rate
        BankDeposite(int p, int y, float r);

        // Constructor with int interest rate
        BankDeposite(int p, int y, int r);

        void show();
};

// Constructor with float interest rate
BankDeposite::BankDeposite(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + r);
    }
}

// Constructor with int interest rate
BankDeposite::BankDeposite(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = (float)r / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

// Display the details of the deposit
void BankDeposite::show() {
    cout << endl << "Principal amount was " << principal << endl
         << "Return value after " << years << " years is " << returnValue << endl;
}

int main() {
    BankDeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y, and r: " << endl;
    // You can add code here to capture inputs and utilize the objects
    cin >> p >> y >> R;
    bd1 = BankDeposite(p,y,R);
    bd1.show();
    return 0;
}
