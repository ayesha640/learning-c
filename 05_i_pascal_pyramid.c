#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

// Function to calculate combination (n choose r)
int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n;
    printf("Enter the number of levels for Pascal's pyramid: ");
    scanf("%d", &n);

    // Iterate over each level of the pyramid
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces for formatting
        for (int space = 0; space < (n - i - 1) * 4; space++)
        {
            printf(" ");
        }

        // Print numbers for the current level
        for (int j = 0; j <= i; j++)
        {
            int icj = nCr(i, j);
            printf("%4d", icj);
            printf("    ");
        }

        printf("\n"); // Move to the next level
    }

    return 0;
}
