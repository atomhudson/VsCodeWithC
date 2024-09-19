#include<iostream>
using namespace std;
int main()
{
    // array declaration
    // datatype arryName[size];
    int arr[] = {1,2,3,44};
    cout<<arr[0]<<endl;
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array[%d]: ",i);
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
    return 0;
}