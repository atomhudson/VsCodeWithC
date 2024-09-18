// Structures : It is a collection of values of different data types.
// Different data means : its means it can be a int, char, float, string

// Example Student data 
// Syntax
#include<stdio.h>
#include<string.h>

struct student
{
    char *firstName;
    char lastName[50];
    int roll;
    float cgpa;
};

int main() {
    struct student s1;
    s1.firstName = "Prashant";
    // s1.lastName = "Saini"; // error;
    strcpy(s1.lastName, "Saini");
    s1.roll = 1;
    s1.cgpa = 7.56;
    
    // Allocate memory for the concatenated name (this step is not required here but shown for clarity)
    char fullName[100];  // Allocate enough space for concatenation
    strcpy(fullName, s1.firstName);
    strcat(fullName, " ");
    strcat(fullName, s1.lastName);
    
    printf("Student Name: %s\n", fullName);
    printf("Student Roll Number: %d\n", s1.roll);
    printf("Student CGPA: %.2f\n", s1.cgpa);  // Format CGPA to two decimal places
    return 0;
}
