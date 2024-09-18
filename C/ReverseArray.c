#include<stdio.h>
void reverse(int *arr,int n);

int main() {
    int arr[4]  = {1,2,3,4};
    reverse(&arr,4);
    for (int i = 0; i < 4; i++)
    {
        printf("arr[%d] = %d\t",i,arr[i]);
    }

    int n;
    printf("Enter the nth Fibonacci Series You want: ");
    scanf("%d",&n);
    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    for (int i = 0; i < n; i++)
    {
        printf("fibo[%d] = %d\t",i,fibo[i]);
    }
    
    


    return 0;
}

void reverse(int *arr,int n){
    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}