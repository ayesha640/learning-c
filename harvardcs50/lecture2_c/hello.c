// humans write source  code ,computer understands only machine code(0,1
// source code->compiler->machine code
// sir david  was doing things his way by including cs50 header file but i am trying to do things the normal as if i was doing them earlier

#include <stdio.h> //header file //he was constantly including this because it was giving him userfriendly outpput
// he was also using cs50.h library because it was giving him user friendly input but fortunately or unfortunately as i was unable use that then i did that this way the way we normallly use
//  Manual pages (manual.cs50.io)

int main(void)

{
    // printf("Hellow, world!\n"); //(\n=escape sequence)
    char answer[50];
    printf("What is your name? ");
    scanf("%s", &answer);

    // string answer = ("what's your name? ");
    printf("hello,  %s\n", answer);

    // return 0; // he didn't wrote this and worked well

    // terminal
    //  code 1_c.c ->to make a new file
    //  make 1_c -> it compiles my source code into machine code(0s and 1s)
    //  ./1_c -> it will run your program
    // clear-> to clear my terminal screen

    return 0;
}
