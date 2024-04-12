#include <stdio.h>

int main()
{ //**********************************************************************************
    //// Q.write a program to find whether  a year entered by the user is a leap year or not take year as input from user
    int year;

    printf("Enter the year\n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("This year is a Leap Year\n");
    }
    else
    {
        printf("this year is not a leap year\n");
    }

    // RULES FOR CHECKING OUT LEAP YEAR:
    //  If a year is divisible by 4, it is a leap year, except:
    //  If it is divisible by 100, it is not a leap year, except:
    //  If it is also divisible by 400, it is a leap year.
    //*************************************************************************************
    // write a program to determine whether a character entered by the user is lowercase or not

    char letter;
    printf("Enter letter\n");
    scanf("%c", &letter);
    // ASCI-> 97-122=a-z
    // if (letter <= 122 && letter >= 97) this one is according to ASCII table  or yyou can use it directly as mentioned below
    if (letter <= 'z' && letter >= 'a')
    {
        printf("your letter is lowercase\n");
    }
    else
    {
        printf("Your letter is not a lower case letter\n");
    }
    //**********************************************************************************
    // write a program to find gratest of 4 numbers entered by the user
    // int num1, num2, num3, num4, greatest;

    // printf("Enter four numbers: ");
    // scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // // Assume the first number is the greatest
    // greatest = num1;

    // // Compare with the second number
    // if (num2 > greatest)
    // {
    //     greatest = num2;
    // }

    // // Compare with the third number
    // if (num3 > greatest)
    // {
    //     greatest = num3;
    // }

    // // Compare with the fourth number
    // if (num4 > greatest)
    // {
    //     greatest = num4;
    // }

    // Print the greatest number
    // printf("The greatest number is: %d\n", greatest);

    // or
    //*************************************************************************************
    int num1, num2, num3, num4;
    int greatest;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Assume the first number is the greatest
    greatest = num1;

    // Compare with the second number
    if (num2 > greatest)
    {
        printf("Greatest number is=%d\n", num2);
    }

    // Compare with the third number
    if (num3 > greatest)
    {
        printf("Greatest number is=%d\n", num3);
    }

    // Compare with the fourth number
    if (num4 > greatest)
    {
        printf("Greatest number is=%d\n", num4);
    }

    return 0;
}