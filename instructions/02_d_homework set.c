#include <stdio.h>

int main()
{
    // Q.write a program to print average of 3 numbers

    int x, y, z;
    printf("enter your number x\n");

    scanf("%d", &x);

    printf("enter your number y\n");
    scanf("%d", &y);

    printf("enter your number z\n");
    scanf("%d", &z);

    printf("average of 3 numbers is:%d\n", (x + y + z) / 3);

    // Q.write a program to check if a given character is didgit or not
    char character;
    printf("Enter your character:\n");
    scanf("%c", &character);
    // using ASCII
    if (character >= 48 && character <= 57)
    {
        printf("your character is a digit\n");
    }
    else
    {
        printf("it's not a digit\n");
    }
    // Q.write a program to print the smallest number

#include <limits.h>

    int num, min;

    printf("Enter numbers (enter a negative number to stop):\n");

    // Initialize min with the largest possible integer value
    min = INT_MAX;

    // Loop until the user indicates they are done by entering a negative number
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        // Check if the entered number is negative
        if (num < 0)
            break; // Exit the loop if a negative number is entered

        // Update min if the entered number is smaller
        if (num < min)
        {
            min = num;
        }
    }

    printf("The smallest number is: %d\n", min);






    return 0;
}