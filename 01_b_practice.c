#include <stdio.h>

int main()
{
    //***********************HELLO WORLD PROGRAM***************************************
    printf("1st program:HELLO WORLD\n");
    printf("hello world\n");
    //**************** CALCULATE  AREA OF RECTANGLE************************************
    // using hard coded inputs
    int length = 3, breadth = 23;
    int area = length * breadth;
    printf("2nd rpogram :RECTANGLE AREA(using hard coded inputs)\n");
    printf("area= %d \n", area);
    // using inputs supplied by the user
    int height, width;
    printf("2nd program:RECTANGLE AREA(using inputs supplied by user)\n");
    printf("What is the height of the rectangle\n");
    scanf("%d", &height);

    printf("What is the width of the rectangle\n");
    scanf("%d", &width);

    printf("The area of the rectangle is %d\n", height * width);
    //******************CALCULATING AREA OF A CIRCLE************************************
    int radius = 3;
    float pi = 3.14;

    printf("3rd program:To calculate AREA OF CIRCLE\n");
    printf("area= %f\n", pi * radius * radius);
    // modifying same program to calculate the volume of a cylinder given its radius and  height
    int heightt = 23;

    printf("3rd program:To calculate VOLUME OF CYLINDER\n");
    printf("volume= %f\n", pi * radius * radius * heightt);
    //*******************CONVERSION OF CELSIIUS TO FAHRENHEIT***************************
    float celsius = 3, fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("4th Program:To convert Temprature C to F\n ");
    printf("Temp in F =%f \n", fahrenheit);
    //***********************CALCULATING SIMPLE INTEREST********************************
    int principal = 100, rate = 5, years = 1;
    int simpleInterest = (principal * rate * years) / 100;
    printf("5th program:To calculate simple Interest\n");
    printf("simple Interest %d \n", simpleInterest);
    return 0;
}