#include <stdio.h>

int main()
{
    // int numbergrid =[2][3];
    int numbergrid[2][3] = {{1, 2, 3}, {4, 5, 6}};
    /*now
    The element at row 0, column 0 is 1.
    The element at row 0, column 1 is 2.
    The element at row 0, column 2 is 3.
    The element at row 1, column 0 is 4.
    The element at row 1, column 1 is 5.
    The element at row 1, column 2 is 6.*/
    numbergrid[0][1] = 99;
    printf("%d \n ", numbergrid[0][0]);
    printf("%d \n ", numbergrid[0][1]);
    return 0;
}