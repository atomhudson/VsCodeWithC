#include<iostream>
using namespace std;

class Complex{
    int real , imaginary;
    public:
        void getData(){
            cout << "The real part is "<< real << endl;
            cout << "The imaginary part is "<< imaginary << endl;
        }
        void setData(int a,int b){
            real = a;
            imaginary = b;
        }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(1,53); // or 
    ptr->setData(2,45);

    // (*ptr).getData(); // or
    ptr->getData();

    Complex *ptrr = new Complex[4];
    ptrr->setData(2,45);
    ptrr->getData();
    
    return 0;
}