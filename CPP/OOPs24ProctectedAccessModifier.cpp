#include<iostream>
using namespace std;

class Base{
    protected:
        int a; // It is private but it can be inherited
    private:
        int b; // It can not be inherited

};

class Derived : protected Base{

};

int main()
{
    Base b;
    Derived d;
    // Direcctly Not accessible, since a is proctected in both dervied as well as base class.
    // cout<<b.a;   
    // cout<<d.a;   
    return 0;
}
/*
    For a protected Memeber : 
    *-----------------------*-----------------------*--------------------------*-----------------------*
    |__________________________________________________________________________________________________|
    |                       | Public Derivation     |    Private Derivation    |  Protected Derivation |
    |__________________________________________________________________________________________________|
    |   1.Public member:    | Public                |    Private               |  Protected            |
    |   2.Private member:   | Not Inherited         |    Not Inherited         |  Not Inherited        | 
    |   3.Protected member: | Protected             |    Private               |  Protected            |
    *-----------------------*-----------------------*--------------------------*-----------------------*   
*/