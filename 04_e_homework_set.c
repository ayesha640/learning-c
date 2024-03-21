#include <stdio.h>

int main()
{
    // Q.search on what a nested loop is and print pattern using it
    //           *****
    //           *****
    //           *****
    //           *****
    int rows = 4;
    int columns = 5;

    // Outer loop for rows
    for (int i = 0; i < rows; i++)
    {
        // Inner loop for columns
        for (int j = 0; j < columns; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Q.Write a program to check if a number is prime or not

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is less than 2
    if (number < 2)
    {
        printf("The number is not prime.\n");
        return 0; // Exit the program
    }

    // Check if the number is divisible by any number from 2 to number-1
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            printf("The number is not prime.\n");
        }
        else
        {
            // If the loop completes without finding any divisor, the number is prime
            printf("The number is prime.\n");
        }

    // Q.write a program to print numbers in a range
    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}