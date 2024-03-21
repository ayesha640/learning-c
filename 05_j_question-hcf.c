#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int gcd(int a, int b)
{
    int hcf =1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }

//or
    //     for (int i =  min(a, b); i >=1; i--)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         hcf = i;
    //         break;
    //     }


        
    }
    return hcf;
}
int main()
{
    // Q. write a program to compute the greatest common divisor (highest common factor)of two given numbers
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int b;
    printf("Enter a number: ");
    scanf("%d", &b);

    int hcf = gcd(a, b);
    printf(" gcd of a,b:%d \n ", hcf);

    return 0;
}