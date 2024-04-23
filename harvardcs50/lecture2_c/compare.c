#include <stdio.h>

int main()
{
    // when he waas using cs50.h library he was doing things a little differenlty i mean regarding all the input stuff but yeah i will produce the same results but the way i normally do not in his way and in hello.c i commented out the way he was using but from now onwards i am even not going mention anything that how i am doing differently i will just do that

    int x;
    printf("what's x ?");
    scanf("%d", &x);
    int y;
    printf("what's y?: ");
    scanf("%d", &y);
    if (x < y)
    {
        printf("x is less than y ");
    }
    else if (x > y)
    {
        printf("xis not less than y");
    }
    else
    {
        printf("x equals y");
    }

    return 0;
}