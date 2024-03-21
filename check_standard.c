#include <stdio.h>

int main()
{
    printf("This program is compiled with: ");
    #if __STDC_VERSION__ == 201112L
        printf("C11\n");
    #elif __STDC_VERSION__ >= 199901L
        printf("C99\n");
    #else
        printf("C89 or earlier\n");
    #endif
    return 0;
}
