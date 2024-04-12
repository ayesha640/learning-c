
// Question. a positive integer is  entered through the keyboard AND  obtain the prime factors of this number

// #include <stdio.h>

// int main()
// {
//     int x;

//     printf("Enter a number: ");
//     scanf("%d", &x);

//     for (int i = 2; x > 1; i++)
//     {
//         while (x % i == 0)
//         {
//             printf("%d\n", i);
//             x = x / i;
//         }
//     }

//     return 0;
// }

// Question. a positive integer is  entered through the keyboard write a function to obtain the prime factors of this number

#include <stdio.h>

void pf(int n)
{
    for (int i = 2; n > 1; i++)
    {
        while (n % i == 0)
        {
            printf("%d\n", i);
            n = n / i;
        }
    }
    return;
}
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    pf(n);

    return 0;
}