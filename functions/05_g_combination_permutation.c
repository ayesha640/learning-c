// #include <stdio.h>

// int main()
// {
//     // combination  = n!  / (r!  *  (n-r)!)

// int n;
// printf("Enter a number: ");
// scanf("%d", &n);

// int r;
// printf("Enter a number: ");
// scanf("%d", &r);
// int nfact = 1;  // n!
// int rfact = 1;  // r!
// int nrfact = 1; // n-r!

// for (int i = 2; i <= n; i++)
// {
//     nfact = nfact * i;
// }

// for (int i = 2; i <= r; i++)
// {
//     rfact = rfact * i;
// }

// for (int i = 2; i <= n - r; i++)
// {
//     nrfact = nrfact * i;
// }
// int ncr = nfact / (rfact * nrfact);
// printf("%d\n", ncr);

//     // now i am going to write the same the program but this time using functions to make my code dry
//     return 0;
// }

//****************************************************
// #include <stdio.h>
// int factorial(int x)
// {
//     int fact = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int main()
// {

//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int r;
//     printf("Enter a number: ");
//     scanf("%d", &r);

//     // int nfact = factorial(n);
//     // int rfact = factorial(r);
//     // int nrfact = factorial(n - r);
//     // int ncr = nfact / (rfact * nrfact);
//     // you can also reduce these lines into 1 by

//     int ncr = factorial(n) / (factorial(r) * factorial(n - r));
//     printf("Combination (nCr)=%d\n", ncr);

//     return 0;
// }

#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int r;
    printf("Enter a number: ");
    scanf("%d", &r);

    int ncr = nCr(n, r);
    printf("%d\n", ncr);
    return 0;
}