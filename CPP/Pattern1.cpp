#include<iostream>
using namespace std;
int main()
{   
    int row = 4;
    int column = 4;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << j <<" ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << "*" <<" ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << (char)('A'+j) <<" ";
        }
        cout << endl;
    }

    return 0;
}