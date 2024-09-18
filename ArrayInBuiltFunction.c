//  It is because the sizeof operator returns the size of a type in bytes.
// You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

#include<stdio.h>
int main() {
    int arr[] = {1,3,4,5,6};
    int size = sizeof(arr);
    printf("Size of arr: %d\n",size);  // 20
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of arr: %d\n", length); // 5
    return 0;
}