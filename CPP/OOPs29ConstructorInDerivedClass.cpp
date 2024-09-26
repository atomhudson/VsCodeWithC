#include<iostream>
using namespace std;

class Base1{
    int data;
    public:
        Base1(int i){
            data = i;
            cout<<"Base1 class constructor called!"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data is "<< data <<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called!"<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data is "<< data2 <<endl;
        }

};
// Order of Base1() or Base2() can make serious changes
class Derived: public Base1 , public Base2{
    int derived1, derived2;
    public:
        Derived(int a,int b,int c,int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout << "Derived class constructor called!"<< endl;
        }
        void printData(void)
        {
            cout<<"The value of derived1 is "<< derived1 <<endl;
            cout<<"The value of derived2 is "<< derived2 <<endl;
        }
};
int main()
{
    Derived harry(1,2,3,4);
    
    harry.printDataBase1();
    harry.printDataBase2();   
    harry.printData();
    return 0;
}