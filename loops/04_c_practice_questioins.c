#include <stdio.h>

int main()
{
    // Q.print the numbers from 0 to n , if n is given by user.....................................................................
    // loop
    // int n;

    // printf("Enter the number:\n");
    // scanf("%d", &n);
    // int i = 0;
    // while (i <= n)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    // or you can do the same for (for loop)......................................................................................
    // int n;

    // printf("Enter the number:\n");
    // scanf("%d", &n);

    // for (int i = 0; i <= n; i++)
    // {
    //     printf("%d\n", i);
    // }
    // Q.Print sum of first n natural numbers also print them in reverse...........................................................

    int n;
    printf("enter number n\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("TASK#1\n");
    printf("sum of n natural numbers is:%d\n", sum);
    printf("TASK#2\n");
    printf("natural numbers in reverse order\n");
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    // let's combine both of these things in 1 for loop.............................................................................
    // int n;
    // printf("enter number n\n");
    // scanf("%d", &n);
    // int sum = 0;
    // for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    // {
    //     printf("sum of n natural numbers is:%d\n", sum + i);
    //     printf("%d\n", j);
    // }
    // or you can do the same in this way............................................................................................

    // int n;
    // printf("enter number n\n");
    // scanf("%d", &n);
    // int sum = 0;
    // for (int i = n; i >= 1; i--)
    // {
    //     sum = sum + i;
    //     printf("%d\n", i);
    // }
    // printf("%d\n", sum);
    return 0;
}