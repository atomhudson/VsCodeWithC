#include<iostream>
using namespace std;
class Complex{
    int a , b;
    public: 
        //  Constructor
        //  Constructor is a speacial member function with same name as of the class.
        //  It is used to initializ the objects of its class.
        Complex(void);  // constructor declaration
        void printNumber(){
            cout << "Your Number is " <<a<<" + "<<b<<"i"<<endl;
        }
};
Complex :: Complex(void){
    a = 10;
    b = 0;
}
int main()
{
    Complex c;
    c.printNumber();
    return 0;
}
// Constructor do not have any return type and also they not return any values
