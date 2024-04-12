#include <stdio.h>

int main()
{
    int isstudent;
    int issmart;

    printf("Are you a student? (Enter 1 for Yes or 0 for No): ");
    scanf("%d", &isstudent);

    printf("Are you smart? (Enter 1 for Yes or 0 for No): ");
    scanf("%d", &issmart);

    if (isstudent != 0 && issmart != 0)
    {
        printf("You are a student and smart\n");
    }
    else if (isstudent != 0 && issmart == 0)
    {
        printf("You are a student, but not smart\n");
    }
    else if (isstudent == 0 && issmart != 0)
    {
        printf("You are not a student, but smart\n");
    }
    else
    {
        printf("You are not a student and not smart\n");
    }

    //***************************************************************************************************************************************************
    //< > <= >= != ==
    if (1 < 3)
    {
        printf(" number comparison was true\n");
    }
    if ('a' < 'b')
    {
        printf(" character comparison was true\n");
    }

    return 0;
}
