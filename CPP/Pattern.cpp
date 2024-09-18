#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int i  = 0; i < n; i++){
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout<<endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i<<" ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }

    return 0;
}