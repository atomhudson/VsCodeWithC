#include<iostream>
using namespace std;

class Base1{
    protected: 
        int base1Int;
    public:
        void set_base1Int(int a){
            base1Int = a;
        }
};
class Base2{
    protected: 
        int base2Int;
    public:
        void set_base2Int(int a){
            base2Int = a;
        }
};
class Base3{
    protected: 
        int base3Int;
    public:
        void set_base3Int(int a){
            base3Int = a;
        }
};

class Dervied: public Base1, public Base2,public Base3{
    public:
        void show(){
            cout<<"The value of Base1 is: "<<base1Int<<endl;
            cout<<"The value of Base2 is: "<<base2Int<<endl;
            cout<<"The value of Base3 is: "<<base3Int<<endl;
            cout<<"The sum of these value is: "<<base1Int + base2Int + base3Int<<endl;
        }
};

int main()
{
    Dervied harry;
    harry.set_base1Int(10);
    harry.set_base2Int(30);
    harry.set_base3Int(20);
    harry.show();
    return 0;
}