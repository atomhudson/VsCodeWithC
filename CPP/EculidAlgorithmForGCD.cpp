#include<iostream>
using namespace std;
// 24 = 2 x 2 x 2 x 3
// 42 = 2 x 3 x 7 
// gcd(24,42) = 6

// Eculid Algorithm:
// 42 - 24 = 18
// 24 - 18 = 6
// 18 - 6 = 12
// 12 - 6 = 6
// 6 - 6 = 0
//  So,
// 42 % 24 = 18
// 24 % 18 = 6
// 18 % 6 = 0
int GCD(int a , int b){
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;

}
int main()
{
    cout<<GCD(24,42);
    return 0;
}