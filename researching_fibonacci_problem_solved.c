#include <stdio.h>

int isFibonacci(int n)
{
    int a = 0, b = 1, c;
    while (a <= n)
    {
        if (a == n)
            return 1;
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

int main()
{
    int i;
    int array[10];
    int count_fib = 0, count_nonfib = 0; // count variables

    for (i = 0; i < 10; ++i)
    {
        printf("Enter the number of statements in %d chapter: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Recheck your whole array\n");

    for (i = 0; i < 10; i++)
    {
        printf(" %d  ", array[i]);
    }
    printf("\n ");

    // Filtering and counting Fibonacci and non-Fibonacci numbers
    printf(" Numbers given below are the fibonacci numbers!:\n");
    for (i = 0; i < 10; i++)
    {
        if (isFibonacci(array[i]))
        {
            printf("%d ", array[i]);
            count_fib++;
        }
    }
    printf("\n");

    printf(" Numbers given below are not fibonacci numbers!\n");
    for (i = 0; i < 10; i++)
    {
        if (!isFibonacci(array[i]))
        {
            printf("%d ", array[i]);
            count_nonfib++;
        }
    }
    printf("\n");

    printf("Total Fibonacci numbers: %d\n", count_fib);
    printf("Total Non-Fibonacci numbers: %d\n", count_nonfib);

    return 0;
}

// i think steps i need to take
// 1. create fibonacci function
// 2. take input  whole array numbers that you want to check
// 3. print them to recheck them
// 4. filter out fibonacci numbers  out of them
// 10. print all those numbers that are infact fibonaccinumbers
// 6. print all those numbers that are not fibonacci numbers

// then when all of it is done perfectly
// take another twist go back and use recursion fibonacci formula insted of itteration
// and then i think you are ready to do your researh on fibonacci numbers
// ok but
// then study dynamic memory allocation
// try to end this limit of putting certain amount numbers as we did through arrays  and in this way keep on updating this program
