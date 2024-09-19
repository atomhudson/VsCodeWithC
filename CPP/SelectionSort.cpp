#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                swap(arr[i], arr[j]);  
            }
        }
    }
}
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter array[" << i << "]: ";
        cin >> array[i];
    }
    cout<<"UnSorted Array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    selectionSort(array,n);

    cout<<"Sorted Array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    


    return 0;
}