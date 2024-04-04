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
    int array[114] = {
        7,
        286,
        200,
        176,
        120,
        165,
        206,
        75,
        129,
        109,
        123,
        111,
        43,
        52,
        99,
        128,
        111,
        110,
        98,
        135,
        112,
        78,
        118,
        64,
        77,
        227,
        93,
        88,
        69,
        60,
        34,
        30,
        73,
        54,
        45,
        83,
        182,
        88,
        75,
        85,
        54,
        53,
        89,
        59,
        37,
        35,
        38,
        29,
        18,
        45,
        60,
        49,
        62,
        55,
        78,
        96,
        29,
        22,
        24,
        13,
        14,
        11,
        11,
        18,
        12,
        12,
        30,
        52,
        52,
        44,
        28,
        28,
        20,
        56,
        40,
        31,
        50,
        40,
        46,
        42,
        29,
        19,
        36,
        25,
        22,
        17,
        19,
        26,
        30,
        20,
        15,
        21,
        11,
        8,
        8,
        19,
        5,
        8,
        8,
        11,
        11,
        8,
        3,
        9,
        5,
        4,
        7,
        3,
        6,
        3,
        5,
        4,
        5,
        6};
    int count_fib = 0, count_nonfib = 0; // count variables
                                         // // to take input from user
    // for (i = 0; i < 114; ++i)
    // {
    //     printf("Enter the number of statements in %d chapter: ", i + 1);
    //     scanf("%d", &array[i]);
    // }
    // printf("Recheck your whole array\n");

    // for (i = 0; i < 114; i++)
    // {
    //     printf(" %d  ", array[i]);
    // }
    // printf("\n ");

    // Filtering and counting Fibonacci and non-Fibonacci numbers
    printf(" Numbers given below are the fibonacci numbers!:\n");
    for (i = 0; i < 114; i++)
    {
        if (isFibonacci(array[i]))
        {
            printf("%d ", array[i]);
            count_fib++;
        }
    }
    printf("\n");
    printf(" and these are index numbers \n");
    for (i = 0; i < 114; i++)
    {
        if (isFibonacci(array[i]))
        {
            printf("%d ", i);
            count_fib++;
        }
    }
    printf("\n");
    printf(" Numbers given below are not fibonacci numbers!\n");
    for (i = 0; i < 114; i++)
    {
        if (!isFibonacci(array[i]))
        {
            printf("%d ", array[i]);
            count_nonfib++;
        }
    }
    printf("\n");
    printf(" and these are index numbers \n");
    for (i = 0; i < 114; i++)
    {
        if (!isFibonacci(array[i]))
        {
            printf("%d ", i);
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
// 114. print all those numbers that are infact fibonaccinumbers
// 6. print all those numbers that are not fibonacci numbers

// then when all of it is done perfectly
// take another twist go back and use recursion fibonacci formula insted of itteration
// and then i think you are ready to do your researh on fibonacci numbers
// ok but
// then study dynamic memory allocation
// try to end this limit of putting certain amount numbers as we did through arrays  and in this way keep on updating this program
