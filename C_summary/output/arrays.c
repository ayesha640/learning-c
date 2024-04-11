#include <stdio.h>

int main()
{
    int lucky_numbers[] = {3, 345, 46, 6733, 24, 45};
    // indexes           0  1   2   3   4   5
    // you can also replace numbers accoding to their index numbers as following
    lucky_numbers[0] = 90;
    printf("%d \n", lucky_numbers[0]);
    printf("%d \n", lucky_numbers[1]);
    return 0;
}