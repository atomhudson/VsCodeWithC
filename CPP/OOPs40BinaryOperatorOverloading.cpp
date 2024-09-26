#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        void input(){
            cout<<"Enter Real and Imaginary parts respectivley: "<<endl;
            cin >> real;
            cin >> img;
            cout<<"You have enter the complex number: "<<real<<"+"<<img<<"i;"<<endl;
        }
        Complex operator+(Complex obj)
        {
            Complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
        }
        void output()
        {
            cout << "Output is: "<< real << "+"<<img <<"i;"<<endl;
        }
};
int main()
{
    Complex com1, com2, res;

    cout<<"Enter first complex number "<<endl;
    com1.input();
    cout<<"Enter Second complex number "<<endl;
    com2.input();

    res = com1 + com2;
    res.output();
    return 0;
}