// Dynamic Binding: Code which will execute is not known until the program runs.
// Message Passing: Object.message(Information) call format.
#include<iostream>
using namespace std;
class Employee{
    private:
        int a,b,c; 
    public: 
        int d,e;
        void setData(int a,int b, int c);
        void getData(){
            cout << "The value of a is: "<<a<< endl;
            cout << "The value of b is: "<<b<< endl;
            cout << "The value of c is: "<<c<< endl;
            cout << "The value of d is: "<<d<< endl;
            cout << "The value of e is: "<<e<< endl;
        }
};
// :: --> Scope Resolution Operator
void Employee :: setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee harry;
    // Private member of class not be accessed directly creating object of that class.
    // only functions can use the private member of the class
    // harry.a = 134;
    harry.d = 5;
    harry.e = 6;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}