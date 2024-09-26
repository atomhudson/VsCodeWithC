#include<iostream>
using namespace std;

class Base {
    public:
        int var_base = 1;
        virtual void display() { // virtual keyword is used to achieve runtime polymorphism 
            cout << "1 Displaying Base class variable var_base: " << var_base << endl;
        }
};

class Derived : public Base {
    public:
        int var_derived = 2;
        void display() { // Overrides Base class display method
            cout << "2 Displaying Base class variable var_base: " << var_base << endl;
            cout << "2 Displaying Derived class variable var_derived: " << var_derived << endl;
        }
};

int main()
{   
    Base *baseptr;
    Derived objder;
    // virtual keyword is used to override the default behaviour of the program.
    // I want to run the derived class display not base class diplay using base class pointer.
    baseptr = &objder;
    baseptr->display();
   // --------------------------------------------------------------------------------------------------
    Derived *derivedptr;
    Base objbase;
    // derivedptr = objbase; // error: we can not point the derived class pointer to base class object.

    return 0;
}