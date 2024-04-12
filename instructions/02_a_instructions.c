#include <stdio.h>
#include <math.h>

int main()
{
    //****************TYPE DECLARATION INSTRUCTIONS*******************************
    int a = 4, b, c;
    b = c = a;
    printf("type declaration instruction program for INT\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);
    // for this type of case where a = 4
    //  when b = c = "a"  then  answwer a = 4, b = 4, c = 4
    //  when "a" = b = c then answer a = 8, b = 8, c = 8
    printf("type declaration instruction program for FLOAT\n");
    float x = 1.1;     // if you write it like float y = "x" + 8.9;
    float y = x + 8.9; //                     float x = 1.1;
                       // it will give error because things should be in order, it will execute 1st thing 1st so it will say where is "x"?

    printf("y=%f\n", y);

    //***************************ARITHMETIC INSTRUCTIONS******************************

    int l = 23;
    int m = 234;

    printf("arithmetic instruction program\n");

    printf("l+m= %d\n", l + m); // here +-*/ all were operators and l ,m are operands
    printf("l-m= %d\n", l - m);
    printf("l*m= %d\n", l * m);
    printf("l/m= %d\n", l / m);

    int n = l + m; // or int n;   n=l+m;  (both are correct) {so  n=l+m; is legal}
                   // but int n; l+m=n; (WRONG)              {and l+m=n; is illegal}
    printf("n= %d\n", n);
    //********************MODULAR OPERATOR***********************************************************
    printf("modular operator\n");
    // % =returns remainder,can not be applied on float , sign is same as of numerator
    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);   // 1
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2); // this will only give -1
    printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2); // 1

    // No operator is assumed to be present
    // printf("4*5 %d\n",(4)(5)); --> this will not return 20(it's invalid)

    printf("4*5= %d\n", (4) * (5));

    // There is no operator to perform exponentiation in C
    printf("The value of 4 to the power 5 is= %d\n", 4 ^ 5); // --> will  not produce 4 to the power of 5
    // if you really want to perform exponenetiation in c then
    printf("The value of 4 to the power 5 is %f\n", pow(2, 5));
    // also make sure to include this library as well   #include <math.h>

    // rememeber that you changed %d to %f and put pow(2, 5) and add #include <math.h>

    //*********************TYPE CONVERSION************************
    //  int  and int =int
    // int and float=float
    // float and float=float
    printf("Type conversion program\n");
    printf("4+3=%d\n", 4 + 3);
    printf("4+3.3=%f\n", 4 + 3.3);
    printf("5.0/2.0=%f\n", 5.0 / 2.0);

    //**************OPERATOR PRECEDENCE*********
    // Operator priority in c :
    // in the absence of parenthesis
    // 1st[* / %]
    // 2nd[+ -]
    // 3rd[=]
    // in the presence of

    int s = 2;
    int t = 32;
    printf("Operator precedence program\n");
    printf("3*s-32*t=%d\n", 3 * s - 32 * t);
    printf("23*12/234*t=%d\n", 23 * 12 / 234 * t); // will not give answer as expected by BODMAS RULE, it will give answer due to associativity
    //(*,/ ) follows left to right priority
    printf("23*12/234*t=%d\n", 23 * 12 / 234 * t);

    //*********CONTROL INSTRUCTIONS*********
    // 1. SEQUENCE CONTROL INSTRUCTIONS
    // 2. DECISION CONTROL INSTRUCTIONS
    // 3.LOOP CONTROL INSTRUCTIONS
    // 4.CASE CONTROL INSTRUCTIONS

        return 0;
}