#include <stdio.h>

int main()
{
    printf("%d \n", 2 + 3);     // basic arithmetic :   +-/*
    printf("%d \n", 10 % 3);    // modulus :returns remainder
    printf("%d \n", 1 + 2 * 3); // oder of operations
    printf("%f \n", 10 / 3.0);  // int's and doubles

    int num = 10;
    num += 100;
    num++;
    printf("%d\n", num);

    return 0;
}