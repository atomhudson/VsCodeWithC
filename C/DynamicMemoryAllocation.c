// It is a way to allocate memory to a data structure during the runtime.
// We need some functions to allocate & free memory dynamically.
// stlib.h
// Function for DMA
// a. malloc() --> memory allocation
// b. calloc() --> continous allocation
// c. free() --> 
// d. realloc() --> re-allocation

// malloc() : Takes number of bytes to be allocated & return a pointer of type void 
//  ptr = (int*) malloc(5 * sizeof(int));

// calloc() : initializes with zero
//  ptr = (int *) calloc(5,sizeof(int));

// free() : We use it to free memory that is allocated using malloc or calloc
//  free(ptr);

// realloc() : reallocate (increase or decrease) memory using ther same pointer & size.
// ptr = realloc(ptr,newSize);

#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    // ptr =(int *)malloc(5 * sizeof(int));
    
    // printf("ptr[0] = %d\n",ptr[0]);
    // ptr[0] = 1;
    // ptr[1]= 3;
    // ptr[2] = 1;
    // ptr[3]= 3;
    // ptr[4] = 1;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("ptr[%d] = %d\n",i,ptr[i]);
    // }


    // Calloc initied with 0 or NULL
    // ptr = (int *) calloc(5,sizeof(int));
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("ptr[%d] = %d\n",i,ptr[i]);
    // }

    // free(ptr);

    // ptr = (int *) calloc(2,sizeof(int));
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("ptr[%d] = %d\n",i,ptr[i]);
    // }

    ptr = (int *) calloc(5,sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number for ptr[%d]: ",i);
        scanf("%d",&ptr[i]);
    }

    realloc(ptr,8);

    for (int i = 0; i < 8; i++)
    {
        printf("Enter number for ptr[%d]: ",i);
        scanf("%d",&ptr[i]);
    }

    
    for (int i = 0; i < 8; i++)
    {
        printf("ptr[%d] = %d\n",i,ptr[i]);
    }



    return 0;
}