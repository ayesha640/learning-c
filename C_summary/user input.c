#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name");
    fgets(name, 20, stdin);
    printf("Hellow %s!", name);

    // int age;
    // printf("Enter your age");
    // scanf("%d",&age);
    // printf("You are %d \n", age);

    char grade;
    printf("Enter your grade");
    scanf("%c", &grade);
    printf("Your grade is %c \n", grade);

    // double gpa;
    // printf("Enter your gpa");
    // scanf("%lf", &gpa);
    // printf("Your gpa is %f\n ", gpa);
    return 0;
}