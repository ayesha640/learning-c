#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int y;
    printf("Enter a number: ");
    scanf("%d", &y);
    printf("%d\n", x + y);
    float z = (float)x / (float)y; // thats called type casting
    printf("%f\n", z);
    return 0;
}