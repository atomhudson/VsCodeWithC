#include<iostream>
using namespace std;

// Forward Decleration for line 13.
class Y;

class X {
    int data;
    public: 
        void setData(int value){
            data = value;
        }
    friend void add(X, Y);
};
class Y{
    int num; 
    public: 
        void setData(int value){
            num = value;
        }
    friend void add(X, Y);        
};
void add (X o1, Y o2){
    cout << "Summing data's of X and Y objects gives me "<< o1.data + o2.num;
}

int main()
{
    X a;
    a.setData(3);

    Y b;
    b.setData(5);

    add(a,b);
    return 0;
}