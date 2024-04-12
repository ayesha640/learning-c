#include <stdio.h>

int main()
{
    // Q.Write a program to find grade of a student given his marks based on below:

    // 90 - 100->A
    // 80 - 90->B
    // 70 - 80->C
    // 60 - 70->D
    //<70->F
    int percentage;
    printf("Enter your percentage\n");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf("Your Grade is A\n");
    }
    else if (percentage >= 80 && percentage <= 90)
    {
        printf("Your Grade is B\n");
    }
    else if (percentage >= 70 && percentage <= 80)
    {
        printf("Your Grade is C\n");
    }
    else if (percentage >= 60 && percentage <= 70)
    {
        printf("Your Grade is D\n");
    }
    else
    {
        printf("Your Grade is F\n");
    }
    // we can also solve this problem using switch case

    return 0;
}