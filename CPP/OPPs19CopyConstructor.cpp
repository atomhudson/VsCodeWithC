#include<iostream>
using namespace std;

class Number {
    int a;
    public:
        Number(){a=0;}
        Number(int num){
            a = num;
        }
        Number(Number &obj){
            cout<<"Copy Constructor Called"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main()
{
    Number num,x,y;
    num = Number(3);
    num.display();
    x.display();
    y.display();
    Number z1(num);
    z1.display();

    
    return 0;
}