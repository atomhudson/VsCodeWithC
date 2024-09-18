#include <stdio.h>

int fibonacciSequence(int n);

int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",fibonacciSequence(i));
    }

    return 0;
}

int fibonacciSequence(int n)
{
    if (n < 2)
    {
        return n;
    }
    return fibonacciSequence(n-1)+fibonacciSequence(n-2);
    
}
