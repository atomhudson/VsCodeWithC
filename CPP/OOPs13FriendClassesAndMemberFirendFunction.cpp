#include <iostream>
using namespace std;

// Forward Declaration
class complex;

class calculator
{
public:
    int add(int a, int b) { return (a + b); }
    int sumRealComplex(complex, complex);
    int sumImgComplex(complex, complex);
};

class complex
{
    int a, b;

    // Individually declaraing function as friends
    // friend int calculator :: sumRealComplex(complex, complex);
    // friend int calculator :: sumImgComplex(complex, complex);

    friend class calculator;

    // Alter : Declaring the entire calculator class a friend.

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

int calculator :: sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator :: sumImgComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    calculator cal;
    int res = cal.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is : " << res << endl;

    return 0;
}