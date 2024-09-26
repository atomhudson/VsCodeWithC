#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            // a value is not set
            this->a = a;
        }
        A & setData1(int a){
            this->a = a;
            return *this;

        }
        void getData(){
            cout << "This value of a is "<<a<<endl;
        }
};

int main()
{   
    // This is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(6);
    a.getData();
    a.setData1(5).getData();
    // a.getData();
    return 0;
}