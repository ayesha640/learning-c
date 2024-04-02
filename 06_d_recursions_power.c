// #include <stdio.h>
// int power(int a, int b)
// {
//     int x = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         x = x * a;
//     }
//     return x;
// }
// int main()
// {
//     int a;
//     printf("Enter base: ");
//     scanf("%d", &a);

//     int b;
//     printf("Enter power: ");
//     scanf("%d", &b);
//     printf(" power:%d\n ", power(a, b));
//     return 0;
// }

#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a = a * power(a, b - 1);
}
int main()
{
    int a;
    printf("Enter base: ");
    scanf("%d", &a);

    int b;
    printf("Enter power: ");
    scanf("%d", &b);
    printf(" power:%d\n ", power(a, b));
    return 0;
}