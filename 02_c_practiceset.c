#include <stdio.h>

int main()
{
    // Q.Write a program to check if a number is odd or even
    // even-->1
    // odd-->0

    int x;
    printf("enter the number:\n");
    scanf("%d", x % 2 == 0);

    // Q.Print 1(true) or 0(false) for following statements;
    // a.if it's sunday and it's snowing->true
    int issunday = 1;
    int issnowing = 1;
    printf("%d\n", issunday && issnowing);

    // b.if it's monday orit's raining->true

    int ismonday = 1;
    int israining = 1;
    printf("%d\n", ismonday || israining);

    //  if a number is greater than 9 & less than 100->true(2 digit number)

    int y;
    printf("enter your number:\n");
    scanf("%d", &y);
    printf("%d\n", y > 9 && y < 100);

    return 0;
}