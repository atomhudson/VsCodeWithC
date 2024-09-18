#include<stdio.h>
struct student 
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {1664, 9.2, "Prashant"};
    printf("Student Roll Number: %d\n",s1.roll);

    struct student *ptr = &s1;
    printf("Student Roll Number: %d\n",(*ptr).roll);
    return 0;
}