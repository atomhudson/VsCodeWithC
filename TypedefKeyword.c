// typedef: It is used to create alias (or nickname for that struct) for data types

#include<stdio.h>
typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
} coe;
int main() {
    coe s1 = {122,3.4554,"Anything"};
    printf("Student Roll Number: %d\n",s1.roll);
    printf("Student CGPA: %.2f\n",s1.cgpa);
    printf("Student Name: %s\n",s1.name);
    return 0;
}