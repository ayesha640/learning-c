// #include <stdio.h>
// //..................................................
// void abcdefg()
// {
// //you can use unlimited functions
//     return;
// }
// //................................................
// int main()
// {
// //main() only comes once,starts with main
//     return 0;
// }
// //...............................................
// IN CODING ALWAYS REMEMEBER 1 PRINCIPLE YOUR CODE SHOULD BE DRY
// DO NOT REPEAT YOURSELF
// KEEP YOUR CODE AS MINIMUM AS POSSIBLE
// example

#include <stdio.h>
#include <math.h>
int add(int x, int y)
{
    return x + y;
}
int main()
{
    int number_1;
    printf("Enter a number: ");
    scanf("%d", &number_1);

    int number_2;
    printf("Enter a number: ");
    scanf("%d", &number_2);
    // or simply int sum=a+b;
    int sum = add(number_1, number_2);
    printf("%d\n", sum);

    //***********************************************************************************
    // Q.checking square root and then power of a number using  math library

    // #include<math.h>
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int root = sqrt(number);
    int q = pow(2, 3);

    printf("the square root is :%d\n ", root);
    printf("2^3 is :%d\n ", q);

    return 0;
}
