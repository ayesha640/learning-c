#define _CRT_SECURE_NO_WARNINGS // For Visual Studio to suppress warnings

#include <stdio.h>

int main()
{
    //***********VALIDITY IN C *******************************************************
    // int a; b=a; ........INVALId****************************************************
    // how it would be valid?

    // int a;
    // int b = a;

    // int v=3^3;.........VALID*******************************************************
    // int v = 3 ^ 3;
    // printf("%d\n,v");

    // char dt='10 March 2024'.......INVALID******************************************
    // how it would be valid?

    // char dt = '2';

    // WHAT DATA TYPE WILL 3.0/8-2 RETURN?.....BY DEFAULT GCC SAYS EVERY DECIMAL NUMBER(i.e REAL NUMBER/float) AS ' DOUBLE'*****************************************************************************

    //****************** DIVISIBILITY TEST OF 97****************************************
    // let me be very clear here that 1.if you enter scanf("%d\n", &num);     when result comes in terminal you have input your number twice also
    // if you add #define _CRT_SECURE_NO_WARNINGS // For Visual Studio to suppress warnings in the start then it  works well

    int num;
    printf("Enter the number\n");
    scanf("%d", &num); // Use scanf
    printf("test returns: %d\n", num % 97);

    //,2.use scanf_s instead it provides the size of the input buffer, ensuring that the input doesn't exceed the specified size.
    // This provides enhanced security against buffer overflow attack (so as my compiler doesnot support scanf_s

    // use scanf and if you want precautions to be safe then use this one
    //      if (scanf("%10d", &num) == 1) { // Limit input to 10 digits
    //          getchar(); // Clear the newline character from the input buffer
    //          printf("test returns: %d\n", num % 97);}
    //     else {printf("Invalid input\n"); // Handle invalid input}
    // all of these things are important because
    // %10d limits the input to 10 digits.
    // getchar() clears the newline character from the input buffer.
    // Without the else printf("Invalid input\n");, your program won't notify users if their input is invalid.even if you input letters instead of numbers it will act normal
    // int num;
    // printf("Enter the number\n");
    // if (scanf("%10d", &num) == 1)
    // {              // Limit input to 10 digits
    //     getchar(); // Clear the newline character from the input buffer
    //     printf("test returns: %d\n", num % 97);
    // }
    // else
    // {
    //     printf("Invalid input\n");

    //     }// Handle invalid input

    //     // EXPLAIN STEP BY STEP EVALUATION OF 3*x/y-z+k where x=2  y=3  z=3  k=1*****************************************
    //     // because you already added up a scanf above and that's the reason why its depprecated due to its potential vulnerability to buffer overflow attacksmand it did it and because of it now my next code is not executing at all so that's why now i have to 1st
    //  Clear input buffer
    // int c;
    // while ((c = getchar()) != '\n' && c != EOF)
    //     ;

    // so now after this you can run any kind of code what so ever or you can even end your file but scanf will not cause any problem next

    // now you can safely  use this as a Second block of code
    // yeah but its still not accepting scanf so just // it out

    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    printf("Result=%d\n", result);
    return 0;
}
