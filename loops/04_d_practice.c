#include <stdio.h>

int main()
{
    // Q.print the table of the number input by the user
    // int n;
    // printf("enter number n\n");
    // scanf("%d", &n);
    // // Loop from 0 to 10 to print the multiplication table
    // for (int k = 0; k <= 10; k++)
    // {
    //     int answer = n * k;
    //     printf("%d * %d = %d\n", n, k, answer); // this line of this code is very very useful learn from your mistakes
    // }

    // Q.keep taking numbers as input from user until user enters an odd number

    // int number;

    // while (1)
    // {
    // printf("Enter a number: ");
    // scanf("%d", &number);
    // printf("%d\n", number);
    // if (number % 2 != 0)
    // { break;}
    // }
    // you can also do the same by using do while loop
    // do
    // {
    //     printf("Enter a number: ");
    //     scanf("%d", &number);
    //     printf("%d\n", number);
    //     if (number % 2 != 0)
    //     {
    //         break;
    //     }

    // } while (1);
    // printf("thank you\n");

    // Print the factorial of a number n
    // what is factorial? "!" multiplies a positive integer by all positive integers less than itself.
    int k;

    printf("Enter a number: ");
    scanf("%d", &k);
    int fact = 1;
    for (int i = 1; i <= k; i++)
    {
        fact = fact * i;
    }
    printf("final factorial is %d", fact);
    return 0;
}