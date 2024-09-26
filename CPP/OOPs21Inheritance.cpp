#include<iostream>
using namespace std;

// Base Class
class Employee{
    public: 
        int id;
        float salary;
        Employee(int empid){
            id = empid;
            salary = 34.0;
            cout<<"Employee Constructor"<<endl;
        }
        Employee(){cout<<"Employee Default Constructor"<<endl;}
};
// Derived Class
/* syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods.etc..
}
Note: 
    1. Default visibility mode is private.
    2. Private visiblility Mode: Public members of the base class becomes private members of the derived class.
    3. Public visiblility Mode: Public members of the base class becomes public members of the derived class.
    4. Private members are never inherited.
*/
// Creating a Programmer class derived from Employee Base Class
class Programmer : public Employee{
    public:
        int languageCode = 9;
        Programmer(int empid){
            id = empid;
            cout<<"Programmer Constructor"<<endl;
        }
        void getData(){
            cout<<id<<endl;
        }
};

int main()
{
//     Employee harry(1),rohan(1);
//     cout<<harry.salary<<endl;
//     cout<<rohan.salary<<endl;
    Programmer skillf(2);
    cout<<skillf.languageCode<<endl;
    skillf.getData();
    cout<<skillf.id<<endl;
    return 0;
}
