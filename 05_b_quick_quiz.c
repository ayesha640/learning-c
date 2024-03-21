
// // Q. Write  a program with three functions
// // 1.good morning whihc prints "Good Morning"
// // 2.good afternoon whihc prints "Good afternoon"
// // 3.good evening whihc prints "Good evening"
// // 4.good night whihc prints "Good night"

// #include <stdio.h>
// /////////funtion protoytpe//////////////
// void GoodMorning();
// void Goodafternoon();
// void Goodevening();
// void Goodnight();

// // 2nd birthday function
// void birthday()
// {
//     printf("Happy Birthday to you\n");
//     printf("Happy Birthday to you\n");
//     printf("Happy Birthday to  ........\n");
//     printf("Happy Birthday to you\n");
// }
// int main()
// {
//     GoodMorning();
//     Goodafternoon(); //////function call/////////
//     Goodevening();
//     Goodnight();

//     // now just call for your 2nd birthday function as well by saying its prototype
//     birthday();
//     return 0;
// }

// //////////////function definition//////////////
// void GoodMorning()
// {
//     printf("Good morning\n");
// }
// void Goodafternoon()
// {
//     printf("Good afternoon\n");
// }
// void Goodevening()
// {
//     printf("Good evening\n");
// }
// void Goodnight()
// {
//     printf("Good night\n");
// }

// ////2nd example for birthday song/////
// // just make a birthday function first so that you can then call it later on
// // and now its definition again at the end is not needed because in the prototype i already provide its definiiotn as well so whatever way you like do it that way

// //ok now lets change this good morning function a little bit only that one ok indirect calll

// Q. Write  a program with three functions
// 1.good morning whihc prints "Good Morning"
// 2.good afternoon whihc prints "Good afternoon"
// 3.good evening whihc prints "Good evening"
// 4.good night whihc prints "Good night"

#include <stdio.h>
/////////funtion protoytpe//////////////
void GoodMorning();
void Goodafternoon();
void Goodevening();
void Goodnight();

int main()
{
    GoodMorning();
    //////function call/////////

    return 0;
}

//////////////function definition//////////////
void GoodMorning()
{
    printf("Good morning\n");
    Goodafternoon();
}
void Goodafternoon()
{
    printf("Good afternoon\n");
    Goodevening();
}
void Goodevening()
{
    printf("Good evening\n");
    Goodnight();
}
void Goodnight()
{
    printf("Good night\n");
}
