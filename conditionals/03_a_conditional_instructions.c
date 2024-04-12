#include <stdio.h>

int main()
{
    //*************************IF_BASIC PROGRAM**********************************
    // C PROGRAM TO CHECK WHETHER A PROGRAM IS EVEN OR ODD**********************
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
    //************IF ELSE ******************************
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("You are above 90,you cannot drive\n");
    }
    else
    {
        printf("You can drive\n");
    }
    if (age == 50)
    {
        printf("Half Century\n");
    }
    // ************IF LOGICAL OPERATOR*********
    int vippass = 0;
    vippass = 1;
    // after providing this everyone even age=1 would be also able to drive but if i erase vippass=1; then even who fulfill this condition age <= 90 && age >= 18  would'nt be able to drive

    if ((age <= 90 && age >= 18) || vippass == 1)
    {
        printf("You are above 18 and below 90,you can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }
    // *************IF ELSE IF **********
    int num;

    printf("Enter your number\n");
    if (num == 1)
    {
        printf("your number is 1\n");
    }
    else if (num == 2)
    {
        printf("your number is 2\n");
    }
    else if (num == 3)
    {
        printf("your number is 3\n");
    }
    else
    {
        printf("your number is other than 1,2 and 3\n");
    }
    //*********TERNARY OPERATORS***********

    int j;
    printf("Enterj\n");
    scanf("%d", &j);

    // one liner if statement

    (j < 5) ? printf("J is less than 5") : printf("J is not less than 5");

    return 0;
}