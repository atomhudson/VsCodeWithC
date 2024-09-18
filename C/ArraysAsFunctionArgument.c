#include<stdio.h>
void printNumber(int arr[],int n); // Square Brackets
void PrintNumber(int *arr, int n); // Pointers
int main() {
    printf("Enter the Number You want in  the Array: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    int *ptr = &arr[0];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d index: ",i);
        scanf("%d",(ptr+i));
    }
    printNumber(arr,n);
    PrintNumber(&arr,n);
    return 0;
}
void printNumber(int arr[] ,int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \t",i ,arr[i]);
    }
    printf("\n");
}   
void PrintNumber(int *arr ,int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \t",i ,arr[i]);
    }
    printf("\n");
}   