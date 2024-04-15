// humans write source  code ,computer understands only machine code(0,1
// source code->compiler->machine code
// sir david  was doing things his way by including cs50 header file but i am trying to do things the normal as if i was doing them earlier

#include <stdio.h> //header file
// Manual pages (manual.cs50.io)

int main(void)

{
    // printf("Hellow, world!\n"); //(\n=escape sequence)
    char answer[50];
    printf("What is your name? ");
    scanf("%s", &answer);

    // string answer = ("what's your name? ");
    printf("hello,  %s\n", answer);

    // return 0; // he didn't wrote this and worked well
}

// terminal
//  code 1_c.c ->to make a new file
//  make 1_c -> it compiles my source code into machine code(0s and 1s)
//  ./1_c -> it will run your program
// clear-> to clear my terminal screen
