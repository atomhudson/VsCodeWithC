#include<iostream>
using namespace std;
template<class T1 = int, class T2 = float>
class Harry{
    public:
        T1 a;
        T2 b;
        Harry(T1 x , T2 y){
            a = x;
            b = y;
        }
        void display(){
            cout<< "The value of a is: "<<a<<endl;
            cout<< "The value of b is: "<<b<<endl;
        }
};

int main()
{
    Harry<> ha(4,6.4);
    Harry<float,int> h(6.4,4);
    ha.display();
    h.display();
    return 0;
}