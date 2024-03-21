#include <stdio.h>

int main()
{
    // LOOPS
    // FOR LOOP
    //    for(intialisation;termination condition;updation)
    //         iterator;counter
    for (int i = 1; i <= 100; i = i + 1)
    {
        printf("%d\n", i); // task
    }
    // WHILE LOOP
    // conndition should be true in orderto run this loop even for the 1st time
    int i = 1;       // intitalisation
    while (i <= 100) // condition
    {
        printf("%d\n", i); // task
        i = i + 1;         // updation
    }
    // DO WHILE LOOP
    // it runs atleast one time even if the condition is false and then it checks the condition
    // int i=1;
    do
    {
        printf("%d\n", i); // task
        i = i + 1;         // updation
    } while (i <= 100);    // condition

    // for loops are used when the number of iterations (i.e repetitions)is known, while loops are used when the number of iterations is uncertain and may not execute at all, and do-while loops are used when you want to ensure the block of code executes at least once before checking the condition

    // if we want to skip a particular thing we 'continue'
    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}