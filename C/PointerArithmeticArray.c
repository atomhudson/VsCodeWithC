
#include<stdio.h>
int main() {
    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u\n",ptr);
    // ptr++; //4 bytes incremented for the pinter memory address
    // printf("ptr = %u",ptr);
    int aadhar[5];
    int  *ptr = &aadhar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index : ",i);
        scanf("%d",(ptr+i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d\n",i , *(ptr+i));
    }

    return 0;
}