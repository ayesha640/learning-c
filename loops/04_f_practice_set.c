#include <stdio.h>

int main()
{
    // Q.Write a program to print multiplication table of a given number n

    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    // for (int i = 0; i <= 10; i++)
    // {
    //     int answer = n * i;
    //     printf("%d*%d=%d\n", n, i, answer);
    // }

    // // Q.Write a program to print multiplication table of 10 in reversed order
    // int k;
    // printf("Enter a number: ");
    // scanf("%d", &k);
    // for (int l = 10; l >= 1; l--)
    // {
    //     int answer = k * l;
    //     printf("%d*%d=%d\n", k, l, answer);
    // }

    //  Q.a do while loop is executed
    // 1. atleast once
    // 2. atleast twice

    // int number;
    // printf("Enter a number: ");
    // scanf("%d", &number);
    // do
    // {
    //     printf("%d\n", number);
    //     number++;
    // } while (number <= 10);

    // // 3.atmost once

    // int s;
    // printf("Enter a number: ");
    // scanf("%d", &s);
    // do
    // {
    //     printf("%d\n", s);
    //     s++;
    // } while (0);

    // Q.What can be done using one type of loop can also be done using the other   two types of loops- true or false?
    // true(but not always)

    // Q.Write a prograam to sum first  ten natural numbers  using  while loop

    // int t = 1, sum = 0;

    // while (t <= 10)
    // {
    //     sum = sum + t;

    //     t++;
    // }
    // printf("sum:%d\n", sum);

    // write a program to implement program  5 using for and do while loop

    // int x = 1, SUM = 0;

    // do
    // {
    //     SUM = SUM + x;
    //     x++;
    // } while (x <= 10);
    // printf("SUM:%d\n", SUM);

    // write a program to calculate the sum of the numbers occuring in the  multiplication table of 8

    // int n = 8, Sum = 0;
    // for (int i = 0; i <= 10; i++)
    // {
    //     Sum = Sum + n * i;
    // }

    // printf("Sum:%d\n", Sum);

    // Q.Write a program to calculate the factorial of a given number using a for loop

    // int f = 3;
    // int factorial = 1;

    // for (int i = 1; i <= 5; i++)
    // {
    //     factorial *= i;
    // }

    // printf("value of factorial %d is %d\n", f, factorial);

    // Q.repeat Q8 using whileloop

    int f;
    int factorial = 1;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d", &f);
    while (i <= 5)
    {
        factorial *= i;
        i++;
    }

    printf("value of factorial %d is %d\n", f, factorial);

    // Q.write a program to check whether a given number is prime or not using loops

#include <stdio.h>

    int main()
    {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number < 2)
        {
            printf("The number is not prime.\n");
            return 0;
        }

        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                printf("The number is not prime.\n");
                return 0;
            }
        }

        printf("The number is prime.\n");
    }
    //. The conditions are:

    //    - If the number is less than 2, it's not a prime number.

    // 2. Check if the number is divisible by any number from 2 to the square root of the number.
    //    - If yes it's not a prime number.

    // Q.Implement Q10using other types of loops
    // later
    return 0;
}