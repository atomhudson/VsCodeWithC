// How many number from 1 to n are divisible by a an b.

#include<iostream>
using namespace std;

int divisible(int n ,int a,int b){
    int c1 = n / a; // finding how many number are divisble by a.
    int c2 = n / b ; // finding how many number are divisble by b.
    int c3 = n / (a*b); // finding how many number are divisble by both a and b.

    return c1 + c2 - c3; 
}

int main()
{
    int n = 40;
    int a = 5;
    int b = 7;
    cout << divisible(n,a,b)<<endl;
    return 0;
}