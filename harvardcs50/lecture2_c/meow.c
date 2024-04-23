#include <stdio.h>

int main()
{
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("meow\n");
    // }
    // int counter = 3;
    // while (counter > 0)
    // {
    //     printf("meow\n");
    //     // counter = counter - 1;
    //     // or
    //     counter--;
    // }
    // ok so that was a decrementing loop, if you want the loop to increment then it wil work this way
    // and incrementation is generally considered the best practice for loop constructs due to its clarity, conventionality, and reduced potential for errors.

    int counter = 0;    // or if you intitalize it to 1 then counter should be like counter<=3
    while (counter < 3) // but if here i do<=3 it will actually print 4 times
    {
        printf("meow\n");
        counter = counter + 1;
        // or counter++;
    }

    return 0;
}