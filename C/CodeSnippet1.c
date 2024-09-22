#include<stdio.h>
int main() {
    char ch[] = "%d\n";  // Assigns a string to the char array
    // ch[] = 'c';            // Syntax error
    printf(ch, 120); // Will print the value 120 formatted by the string in ch[]
    printf("Hello World\r12345\n"); 


    char ch1[] = "ABC";  // Character array initialized with the string "ABC"
    printf("%d %d %d", sizeof(ch1[1]), sizeof(3.14), sizeof(56));  // sizeof operations
      
    return 0;
}