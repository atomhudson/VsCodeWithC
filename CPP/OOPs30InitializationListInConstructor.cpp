/*
    Syntax for initializztion lis tin construuctor:
    constructor (argument-list) : initilization-section
    {
        assignment + other code;
    }

    class test{
        int a;
        int b;
        public:
            test(int i, int j): a(i),b(j){body......}
    }

*/

#include<iostream>
using namespace std;
class Test{
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(i+j)
        // Test(int i, int j) : a(i), b(a+j)
        // Test(int i, int j) : b(j), a(i+b)   //Problem will arries here because a is declared first and than b is declared.
        Test(int i, int j) : a(i)
        {
            b = j;
            cout << "Constructor executed" <<endl;
            cout << "Value of a is "<< a <<endl;
            cout << "Value of b is "<< b <<endl;
        }
};

int main()
{
    Test t(4,6);
   return 0;
}