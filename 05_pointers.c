#include <stdio.h>

int main()
{
    int a = 5;
    int *x = &a;  // Pointer x stores the address of variable a
    int **y = &x; // Pointer y stores the address of pointer x

    printf("%p\n", x); // Print the address stored in pointer x (address of variable a) -----> adress of a
    // x mn jao aur jo wahan adress store hy ley kr ao x=&a
    printf("%p\n", &a); // Print the address of variable a directly----> adress of a
    // directly a ka adress lao &a
    printf("%p\n", *y); // derefrencing pointer y  to get the value stored in x --->adress of a
    // pointer y mn jao  and point towards x ,x=&a tu a ka dress  lao
    printf("%p\n", &x); // will print adress of x
    // directly x ka adress lao &x
    printf("%p\n", y); // Print the address stored in pointer y (address of pointer x)---->adress of x
    // y mn jao aur wahan ja adress store hy ley kr ao
    printf("%d\n", *x); // Dereference pointer x to get the value stored at the address it points to (value of variable a)
    // pointer x mn jao aur which points towards a tu a ki value lao
    printf("%d\n", **y); // Dereference pointer y twice to get the value stored at the address it points to, which is a pointer to another pointer, and then dereference that pointer to get the value stored at the address it points to (value of variable a)
    // pointer y mn jao which points towards x again which points towards a tu a ki value lao
    return 0;
}
