#include<iostream>
using namespace std;

class Increase{
    private:
        int data;
    public:
        Increase()
        {
            data = 10;
        }
        // For Prefix Increment Operator
        void operator ++(){
            data += 5;
        }
        // For PostFix Increment Operator
        void operator ++(int){
            data += 10;
        }
        void display(){
            cout<<"value inside data is: "<<data<<endl;
        }
};
int main()
{
    Increase inc;
    ++inc;
    inc++;
    inc.display();
    return 0;
}

/*
    General Syntax
    --> returnType operator symbol(arguments)


    Non - Overloadable operators
    1. (.) It is known as dot operator.
    2. (::) It is known as scope resolution operator
    3. (*) It is known as pointer to member operator
    4. (?:) It is known as ternary operator

    There are Two type of Operator Overloading:

    1. Unary Operator Overloading: An operator which contain only one operand is known as unary operator overloading.
    Syntax:
        a. return_type operator symbol() (Syntax using class function)
        b. frient return_type operator symbol(arguments); (Syntax using friend function)


    2. Binary Operator Overloading: An operator which contain two operands is known as Binary operator overloading
    Syntax:
        a. return_type operator symbol(arguments)  (Syntax using class function)
        b. friend return_type operator symbol (argument 1, argument 2); (Syntax using friend function)

*/