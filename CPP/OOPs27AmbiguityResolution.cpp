#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are You!"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"Kaise Ho APP!"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;  
    public: 
        void greet(){
            Base1::greet();
        }
};
class B{
    public:
        void say(){
            cout << "Hello world!"<<endl;
        }
};
class D : public B{
    int a;
    public: 
        void say(){
            cout << "Hello my beautiful people!"<<endl; 
        }
};
int main()
{
    // Ambiguity 1.
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    Derived derObj;
    // Ambuiguity Arries Here
    // To Solve this we make function in derived class and specify which greet() should be used.
    derObj.greet();

    // Ambiguity 2.
    B b;
    b.say();
    // If derived class have override the Base class function then it run derived class override function.
    // If not override than it use Base class function.
    D d;
    d.say();
   return 0;
}