#include <stdio.h>
// sum is a function whihc takes a and b as input and rreturns an integer as an output
int sum(int a, int b); // function prototype declaration
int main()
{
    int c;
    c = sum(2, 5); // Function call
    printf("The value of c is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
// parameters are the values or variables placeholders in the function definiton i.e a,b
// and here 2,5 are arguments
// mnemonic to rememeber it is that arguments are actual values