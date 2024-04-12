#include <stdio.h>

int main()
{
    // while loop**************************************************************************************************************

    // int i;
    // printf("Enter your initial value of i: ");
    // if (scanf("%d", &i) != 1 || i < 10 || i > 20)
    // {
    //     printf("Invalid input. Please enter an integer between 10 and 20.\n");
    //     // Handle the error, maybe exit or ask for input again
    // }
    // else
    // {
    //     printf("The value of i is ");
    //     while (i <= 20)
    //     {
    //         if (i >= 10)
    //         {
    //             printf(" %d ", i);
    //         }
    //         i++;
    //     }
    // }
    // do while loop**********************************************************************************************************
    // int i;
    // printf("Enter your initial value of i: ");
    // if (scanf("%d", &i) != 1 || i < 10 || i > 20)
    // {
    //     printf("Invalid input. Please enter an integer between 10 and 20.\n");
    //     // Handle the error, maybe exit or ask for input again
    // }
    // else
    // {
    //     printf("The value of i is ");
    // }
    // do
    // {
    //     if (i >= 10)
    //     {
    //         printf(" %d ", i);
    //     }
    //     i++;

    // } while (i <= 20);

    // for loop**************************************************************************************************************

    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}