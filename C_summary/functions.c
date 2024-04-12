#include <stdio.h>
#include <stdlib.h>

int addnumbers(int num1, int num2) { return num1 + num2; }
int main()
{
    int sum = addnumbers(4, 23);
    printf(" sum:%d\n ", sum);

    return 0;
}

// or you can also do it this way
// #include <stdio.h>
// #include <stdlib.h>

// int addnumbers(int num1, int num2);
// int main()
// {
//     int sum = addnumbers(4, 23);
//     printf(" sum:%d\n ", sum);

//     return 0;
// }int addnumbers(int num1, int num2) { return num1 + num2; }