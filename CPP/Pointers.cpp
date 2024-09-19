#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr = 8; // updating a 
    cout<<a<<endl;
    int arr[]  = {3,4,5};
    cout<<*arr<<endl;
    int *ptr2 = arr;
    for (int  i = 0; i < 3; i++)
    {
        cout<<*ptr2<<endl;
        ptr2++;
    }
    return 0;
}