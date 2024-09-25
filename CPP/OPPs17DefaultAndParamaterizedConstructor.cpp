#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public: 
        //  Dafault Contructor 
        Complex(void);

        // Parameterized Constructor
        Complex(int a,int b);
        void printNumber()
        {
            cout << "Your Number is " <<a<< " + "<<b<<"i "<<endl;
        }
};
// Default Contructor
Complex :: Complex(void)
{
    a = 0;
    b = 0;
}


// Parameterized Constructor
Complex :: Complex(int x , int y)
{
    a = x;
    b = y;
}
int main()
{
    // Implicit Call
    Complex a(5,7);

    // Explicit Call
    Complex b = Complex(5,7);

    // Default Constructor Call 
    Complex c;
    a.printNumber();
    b.printNumber();
    c.printNumber();
    return 0;
}