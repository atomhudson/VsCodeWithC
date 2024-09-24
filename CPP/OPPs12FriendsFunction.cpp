#include<iostream>
using namespace std;
class complex{
    int a, b;

    // friend complex sumComplex(complex o1,complex o2);
    
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        /*
        --> If this line is not written, than sumComplex() function is unable to use private data or member.

        --> This just give permission to sumComplex() to only use private data or member of the class.

        --> But sumComplex() function is not a part of this complex class.
        
        --> Properties of friend functions
                1. Not in the scope of class
                2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid.
                3. Can be invoked without the help of any object.
                4. Usually contains the object as arguments.
                5. Can be declared inside public or private section of the class.
                6. It cannot access the member directly by thier names and need object_name.member_name to any member.
                7. Both public declaration of friend function as private or public is allowed.
        */
       
        friend complex sumComplex(complex o1,complex o2);
        
        void printNumber(){
            cout << "Your Number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}