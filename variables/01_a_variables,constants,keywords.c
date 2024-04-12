#include <stdio.h>

int main()
{
    //*******************************FIRST C PROGRAM************************************
    printf("Hello I am learning C with Harry");

    //*******************************VARIABLES********************************************
    int a = 4;
    // int b =8.5;// not recommended because 8.5 is not an integer

    float b = 8.5;
    char c = 'u';
    int d = 45;
    int e = 45 + 5;
    // for print f %d for integers
    //            %f for real values
    //            %c for characters

    printf(" a = %d \n", a);
    printf(" b =  %f \n", b);
    printf(" c = %c \n", c);
    printf(" d = %d  \n", d);
    printf(" e = %d  \n", e);
    printf(" a+d = %d \n", a + d);
    printf(" axd = %d  \n", a * d);
    printf(" a-d = %d  \n", a - d);
    printf(" a/d= %d  \n", a / d);
    printf(" axa= %d  \n", a * a);
    printf("a+b+c+d= %d ,%f ,%c \n", a + d + e, b, c);
    // but my question is can we  add integers ,real numbers and characters together and if yes then what we have to use in the beggingng like % what

    int height;
    float length;
    char width;
    height = 45;
    length = 34.4;
    width = 'x';
    printf("heigth= %d \n", height);
    printf("length= %f \n", length);
    printf("width= %c \n", width);

    // case#1
    // printf("area=height*width \n" ,height,width);
    // printf("volume=height*width*length \n",height,width,length);

    // case#2
    printf("area= %d x %c \n", height, width);
    printf("area= %d x %c x %f \n", height, width, length);

    // through these 2 cases i learnt how to put value in it but still i don't know how to add integers ,float together or all of them integers, float,characters e.g
    // in this case if in genral we add up {height+length+width= 45+34.5+x=79.5x}

    //*****************************INPUT PROGRAM****************************************

    int y, z;

    printf("Enter the value of y\n");
    scanf("%d", &y);

    printf("Enter the value of z\n");
    scanf("%d", &z);

    printf("The sum of y and z is %d", y + z);
    return 0;
}