#include <stdio.h>

int main()
{
    // get size of grid(commnets are also called as pseudocode) to get size you can also make functions for both of these as well
    int n;
    do 
    {
        printf("Enter size of grid ");
        scanf("%d", &n);
    } while (n < 1);
    // print grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}