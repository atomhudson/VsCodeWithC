#include<iostream>
using namespace std;
class P
{
public:
    virtual void show() = 0;
};

class Q : public P { 
   int x;
//    public:
//         void show() override {
//             // Implementation of show
//         }
};

int main(void)
{
    Q q;
    return 0;
}

// error: cannot declare variable 'q' to be of abstract type 'Q'

