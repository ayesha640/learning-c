// #include <stdio.h>

// int main()
// {
//     // int a;
//     // printf("Enter a number: ");
//     // scanf("%d", &a);

//     // int b;
//     // printf("Enter a number: ");
//     // scanf("%d", &b);

//     // int temp = a;
//     // a = b;
//     // b = temp;
//     // printf(" a:%d\n ", a);

//     // printf(" b:%d\n ", b);

//     // Q.swap 2 numbers without using a 3rd variable

//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);

//     int b;
//     printf("Enter a number: ");
//     scanf("%d", &b);

//     // this is the formula that will help us in doing that
//     a = a + b;
//     b = a - b;
//     a = a - b;

//     // now let me show you how it worked
//     // a = a + b      //a=a+b                 // a=a+b         //
//     //  b = a - b     //b=(a+b)-b             //b=a+b-b        //b==>a    //swaped
//     //  a = a - b     //a=(a+b)-((a+b)-b)     //a=a+b-a-b+b    //a==>b    //swaped

//     printf(" a:%d\n ", a);

//     printf(" b:%d\n ", b);

//         return 0;
// }

//*************************************************************************this way is called  pass by reference
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    // Q.Now swap 2 numbers using pass by reference
    // remember adresses are unique

    int a = 2;
    int b = 9;
    swap(&a, &b);

    // or you can do the same by this way
    //   int *x = &a;
    //  int *y = &b;

    // swap(x, y);

    printf(" a:%d\n ", a);

    printf(" b:%d\n ", b);

    return 0;
}