#include <stdio.h>

int main()
{
    // Q.what will be the output of this program

    int a = 10;
    if (a = 11)
    {
        printf("I am 11\n");
    }
    else
    {
        printf("I am not 11\n");
    }

    // this program will print I am 11 beacuse {= assigment operator    == equal operator}

    // Q.write a program to find out whether a studentis pass or fail;if it requires total 40% and atleast 33% in each subject to pass assume 3 subjects and take marks as an inputfrom the user
    int marks;
    printf("Enter your marks in subjet 1\n");
    scanf("%d", &marks);
    if (marks >= 33)
    {
        printf("pass\n");
    }
    else
    {
        printf("FAIL\n");
    }

    printf("Enter your marks in subject 2\n");
    scanf("%d", &marks);
    if (marks >= 33)
    {
        printf("pass\n");
    }
    else
    {
        printf("FAIL\n");
    }

    printf("Enter your marks in subject 3\n");
    scanf("%d", &marks);
    if (marks >= 33)
    {
        printf("pass\n");
    }
    else
    {
        printf("FAIL\n");
    }
    // this was what i did and this is what shuld be done
    // correct solution is as following

    int physics, chemistry, maths;
    float total;
    printf("Enter your physics marks\n");
    scanf("%d", &physics);

    printf("Enter your chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Enter your maths marks\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;
    if ((total < 40) || physics <= 33 || chemistry <= 33 || maths <= 33)
    {
        printf("BETTER LUCK NEXT TIME\n");
        printf("your totoal percentage is %f and  you are FAIL\n", total);
    }
    else
    {
        printf("CONGRATULATIONS\n");
        printf("your totoal percentage is %f and you are PASS\n", total);
    }
    // Q.calculate income tax payed by an employee to the government as per the slab mentioned below
    //  income slab    tax
    //  2.5l-50l       5%
    //  5.0-10.0l      20%
    //  above 10.0l    30%
    // note that there is no tax below 2.5l take income  amount as input from user

    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        printf("INCOME TAX APPLIES");
        tax = income * 5 / 100;
        printf("Your net income tax to be paid by the 26th of this month is =%f\n", tax);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        printf("INCOME TAX APPLIES");
        tax = income * 20 / 100;
        printf("Your net income tax to be paid by the 26th of this month is =%f\n", tax);
    }
    else if (income >= 1000000)
    {
        printf("INCOME TAX APPLIES");
        tax = income * 30 / 100;
        printf("Your net income tax to be paid by the 26th of this month is =%f\n", tax);
    }
    else
    {
        printf("NO TAX APPLIED");
    }
    // // that was how i didi that now below version is how teacher did it

    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    else if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("Your net income tax to be paid by the 26th of this month is %f \n", tax);

    /*provided by chat gpt is this one

    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (income - 500000);
    }
    else if (income > 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (1000000 - 500000) + 0.30 * (income - 1000000);
    }

    printf("Your net income tax to be paid by the 26th of this month is %f \n", tax);

    */

    return 0;
}