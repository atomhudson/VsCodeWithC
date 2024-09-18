// Array: Collection of similar data types stored at contiguous(continuous) memory locations.

#include<stdio.h>
int main() {
    // int marks = 97;
    // int marks = 98;
    // int marks = 89;

    int mark[3];

    int marks[] = {97,98,89};

    int mar[3] = {97,89,973};
    
    printf("How many Number you want in an Array: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the %d for the array: ",i);
        scanf("%d",&arr[i]);
    }
    

        

    return 0;
}