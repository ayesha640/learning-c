// #include <stdio.h>
// void increasing(int x, int n){
//     if(x>n)return;
//     printf(" x:%d\n ", x);
//     increasing(x+1,n);
// }
// int main()
// {
// int n ;
// printf("Enter a number: ");
// scanf("%d", & n);
// increasing(1,n);

//     return 0;
// }

// PRINT 1 TO N USING ( code it , AFTER RECURSIVE CALL)
//  #include <stdio.h>
//  void increasing_number(int n)
//  {
//      if (n <= 0) {
//          return; //base case
//      }
//  increasing_number(n - 1); //call
//      printf("%d\n",n); //code

//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     increasing_number(n);
//     return 0;
// }

// print sum from 1 to n (parametrized )(i think its similar to as if we are takig factorial factorial=5*4*3*2*1 and  through this function we are priniting sum of 1 to n if n =5 then sum=5+4+3+2+1
// just a little difference but the fromatting process is somewhat similar so please pay attention)

// #include <stdio.h>

// void sum(int n, int s)
// {

//     if (n == 0)
//     {
//         printf(" sum:%d\n ", s);

//         return;
//     }
//     sum(n - 1, s + n);

//     return;
// }

// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     sum(n, 0);
//     return 0;
// }
// now print sum from 1 to n (return type)
// it would be same as if i  was finding factorial once
// factorial(n)=n* factorial(n-1)
// now same will work as
// sum(n)=n+sum(n-1)

#include <stdio.h>

int sum(int n)
{
    if (n == 0 || n == 1)

        return n;
    else

        return n + sum(n - 1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf(" fact:%d\n ", sum(n));
    return 0;
}
// and its done
