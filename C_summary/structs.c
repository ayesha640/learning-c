#include <stdio.h>
#include <stdlib.h>

struct student
{
    int age;
    double gpa;
    char grade;
};

int main()
{
    struct student student1;
    student1.age = 19;
    student1.gpa = 4.0;
    student1.grade = 'A';
    printf(" student1.age:%d\n ", student1.age);
    return 0;
}