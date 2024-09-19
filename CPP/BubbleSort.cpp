#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    for (int  i = 0; i < n - 1; i++){
        bool swapped = false;
        for (int j = 1; j < n-i; j++){
            if (arr[j-1] > arr[j])
            {
                swap(arr[j-1],arr[j]);
                swapped = true;
            }
        }
        if (!swapped){
            break;
        }        
    }
}
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main()
{   
    int arr[] = {4,52,2,45,1,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"UnSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    BubbleSort(arr,n);

    cout<<"Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}