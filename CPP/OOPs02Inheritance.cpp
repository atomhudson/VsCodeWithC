#include<iostream>
using namespace std;
// Single Inheritance with Virtual Inheritance to solve the diamond problem
class A{
    public:
    void Afunc(){
        cout << "Single Inheritance" << endl;
        cout << "Inherited" << endl;
    }
};
// Class B virtually inherits from A
class B : virtual public A{
    public:
    void Bfunc(){
        cout << "Class B" << endl;
    }
};
// Class C inherits from both A and B, but A is only inherited once due to virtual inheritance
class C : virtual public A, public B {
    public:
    void Cfunc(){
        cout << "Multiple Inheritance" << endl;
    }
};
int main()
{
    // Single Inheritance
    B b;
    b.Afunc();  // Calls A's function inherited by B
    // Multiple Inheritance
    C c;
    c.Afunc();  // Calls A's function without ambiguity
    c.Bfunc();  // Calls B's function
    c.Cfunc();  // Calls C's function
    return 0;
}
