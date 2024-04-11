#include <stdio.h>

int main()
{
    int num = 10;
    printf("%p\n", &num);

    int *pnum = &num;
    printf("%p \n", pnum);
    printf("%d \n", *pnum);

    return 0;
}