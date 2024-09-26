#include<iostream>
using namespace std;

class Base {
    public:
        int var_base;
        void display() { 
            cout << "Displaying Base class variable var_base: " << var_base << endl;
        }
};

class Derived : public Base {
    public:
        int var_derived;
        void display() { // Overrides Base class display method
            cout << "Displaying Derived class variable var_derived: " << var_derived << endl;
        }
};

int main()
{   
    Base *baseptr;
    Derived objder;

    // Late Binding
    baseptr = &objder; // Pointing Base Class Pointer to Derived class

    baseptr->var_base = 34;
    baseptr->display(); // This will call Derived class display function due to late binding

    // baseptr.var_derived = 134; // error. // var_derived is not base class and base class pointer can not access the member of derived class members.
    baseptr->var_base = 34400;
    baseptr->display(); // Calls Derived class display again

    Derived *derivedptr;
    derivedptr = &objder;
    derivedptr->var_base = 9448;
    derivedptr->var_derived = 98;
    derivedptr->display(); // Calls Derived class display function
    baseptr->display();
    return 0;
}

/*
    --> Polymorphism
         - one name and mutilple forms.
         - function overloading, operator overloading.

    --> Types of Polymorphism
            1. Compile Time Polymorphism (Early Binding: Compiler is ready that at which function call which particular function have to run)
                a.Function Overloading
                b.Operator Overloading
        
            2.  Run Time Polymorphism achieve by using Virtual Functions.        
*/