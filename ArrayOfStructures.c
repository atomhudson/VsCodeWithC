#include<stdio.h>

struct student{
    char *name;
    int rollno;
    float cgpa;
    char *branch;
};

int main() {
    struct student ECE[100];
    struct student COE[100] = {
        {"Prashant", 173, 7.56, "COE"},
        {"Laxmi", 899, 9.55, "COE"}
    };
    struct student IT[100];

    ECE[0].name = "Prashant";
    ECE[0].rollno = 173;
    ECE[0].cgpa = 7.56;
    ECE[0].branch = "ECE";

    struct student s1 = {"Laxmi", 899, 9.55, "ECE"};
    ECE[1] = s1;

    IT[0].name = "Saini";
    IT[0].rollno = 173;
    IT[0].cgpa = 7.56;
    IT[0].branch = "IT";

    struct student s2 = {"Harshit", 999, 9.99, "IT"};
    IT[1] = s2;

    

    printf("ECE[0] Student Name: %s\n", ECE[0].name);
    printf("Roll Number: %d\n", ECE[0].rollno);
    printf("CGPA: %.2f\n", ECE[0].cgpa);
    printf("Branch: %s\n", ECE[0].branch);

    printf("ECE[1] Student Name: %s\n", ECE[1].name);
    printf("Roll Number: %d\n", ECE[1].rollno);
    printf("CGPA: %.2f\n", ECE[1].cgpa);
    printf("Branch: %s\n", ECE[1].branch);

    printf("COE[0] Student Name: %s\n", COE[0].name);
    printf("Roll Number: %d\n", COE[0].rollno);
    printf("CGPA: %.2f\n", COE[0].cgpa);
    printf("Branch: %s\n", COE[0].branch);
    
    printf("COE[1] Student Name: %s\n", COE[1].name);
    printf("Roll Number: %d\n", COE[1].rollno);
    printf("CGPA: %.2f\n", COE[1].cgpa);
    printf("Branch: %s\n", COE[1].branch);

    printf("IT[0] Student Name: %s\n", IT[0].name);
    printf("Roll Number: %d\n", IT[0].rollno);
    printf("CGPA: %.2f\n", IT[0].cgpa);
    printf("Branch: %s\n", IT[0].branch);
    
    printf("IT[1] Student Name: %s\n", IT[1].name);
    printf("Roll Number: %d\n", IT[1].rollno);
    printf("CGPA: %.2f\n", IT[1].cgpa);
    printf("Branch: %s\n", IT[1].branch);

    return 0;
}