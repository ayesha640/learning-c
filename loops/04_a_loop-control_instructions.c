#include <stdio.h>

int main()
{
    /* // loops are used to repeat similar part of a code snippet efficiently
     // There are 3 types of loops
     // while loop,do-while loop,for loop
     // 1.while loop
     int a;
     scanf("%d", &a);
     while (a < 20)
     {
         // a=11;
         // while(a>10){--->these 2 lines will lead to an infinite loop
         printf("%d\n", a);
         a += 2; // increments by 2
     }

     // quick quiz*********write a program to print numbers from 10 to 20 when initial number is intitalized to 0

     // int i = 0;
     // while (i <= 20)
     // {
     //     if (i >= 10)
     //     {
     //         printf("The value of i is %d\n", i);
     //     }
     //     i++;
     // }

     // increment rule************
     int k = 5;
     printf("the value after k++ is%d\n", ++k);
     // k++;     -->firstly increment then print
     //++k;    -->firstly print then increment

     // increment operator ++i or i++
     int m = 1;
     printf("%d\n", m++); // use,then increase so this time it will print 1
     printf("%d\n", m);   // now for this time it will increase and print 2
     ////////////////////////////////////////////
     printf("%d\n", ++m); // increase,then use so this time it will print 2
     printf("%d\n", m);   // now for this time it will again print 2 because itsalready incremented
     // the same way it works in pre decrement and post decrement operators case as well

     printf("the value of i is %d\n", k);

     // 2.do-while loop
     int h = 0;
     do
     {
         printf("The value of h is %d", h);

     } while (h < 10);

     // 3.for loop
     // for( initialize;test;incrementor decrement){code;code;code;} */

    //////////////////////////////////////////////////
    int skip = 5, i = 0;
    while (i < 10)
    {
        i++;
        if (i != skip)
        {
            continue;              //output=5
        }
        else
        {
            printf("%d\n", i);
        }
    } // output of this program will be 5 and not from0......9

    // and in the 2nd case if i use this code then it will print  1 2 3 4   6 7 8 9 10 and it will skip 5

    /* int skip = 5, i = 0;
     while (i < 10) {
         i++;
         if (i == skip) {
             continue;                                //ouput=1 2 3 4 6 7 8 9 10
         }
         printf("%d\n", i);
     }*/





    return 0;
}