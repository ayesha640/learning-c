// // write a program to check whether given numbers are fibonacci or not

// #include <stdio.h>
// int fibonacci(int number)
// {
// if (number<=1){return number;}
//     return fibonacci((number - 1) + (number - 2));
// }
//it has some problems in it but for now leave this one and lets work firstly on the next thing

// #include <stdio.h>

// i'm writing over here a program that takes input from user and checks whether a number is fibonacci or not
// int isFibonacci(int n)
// {
//     int a = 0, b = 1, c = 0;
//     while (c < n)
//     {
//         c = (a + b);

//         a = b;
//         b = c;
//     }
//     return c == n;
// }

// int main()
// {
//     for (;;)
//     {
//         int number;
//         printf("Enter a number: ");
//         scanf("%d", &number);
//         if (number == 0)
//             break;

//         if (isFibonacci(number))
//         {
//             printf("%d is a Fibonacci number\n", number);
//         }
//         else
//         {
//             printf("%d is NOT a Fibonacci number\n", number);
//         }
//     }
//     return 0;
// }

// its working well but in this case we need to enter numbers 1 by 1 and it provides result 1 by 1 but i want to work  it ,some what like we input all the values together no matter how much they are and then it  provides their results together and tells us how manny of them are fibonacci numbers and how many of them are not fibonacci numbers ,i want the results all together at the end and how it will know that im done putting values aaa it happens when i press enter and yeah it works that way
// this was actaully all about the main function but in fibonacci i also want to change it like i want it by recursion and by using fibonacci formula
// so lets try to make it that way

#include <stdio.h>
int isFibonacci(int n)
{  // its working well but if i use recursion for it , it can minimize it  for that i want to use this fibonacci formula =fibonacci((number - 1) + (number - 2) but is it possible without using perfect square function
    int a = 0, b = 1, c = 0;         
    while (c < n)
    {
        c = (a + b);

        a = b;
        b = c;
    }
    return c == n;
}

int main()
{
    for (;;)
    {
        int number;        //but how to intialize many numbers together(having no limit except for the base case of 0)
        printf("Enter a number: "); // i want it as  printf("Enter your numbers: ");
        scanf("%d", &number);   // then it will scan them 
        if (number == 0)       // base case for 0
            break;

        if (isFibonacci(number)) // and then it should check all  of this for all of the given numbers and prints result
        {
            printf("%d is a Fibonacci number\n", number);   // but not like this for every single input i want a collective result
        }
        else
        {
            printf("%d is NOT a Fibonacci number\n", number);   //collective result is needed
        }
    }
    return 0;
}

// Feel free to correct me if I'm mistaken or if there's anything that can't be done as per my understanding. 