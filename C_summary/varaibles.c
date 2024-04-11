#include <stdio.h>

int main()
{

    char testGrade = 'A'; // single 8 but character
    char name[] = "MIKE"; // array of characters (string)

    // you can make them unsigned by adding "unsigned " prefix
    short age = 10; // atleast 16 bits signed interger

    int age1 = 34;        // atleast 16 bits signed integer
    long age4 = 5;        // atleast 32 bits signed integer
    long long age3 = 342; // atleast 64 signed integer

    float gpa = 2.5;        // single precision floating point
    double gpa1 = 3.3;      // double precision floating point
    long double gpa3 = 3.5; // extended precision floating point

    int install;
    install = 1;
    char testgrade = 'F';
    printf("%s ,your grade is %c\n", name, testgrade);
    /*

    \%
Integer Format Specifiers:***************************************************************************************************************************

%d: Signed decimal integer (e.g., 123, -45)
%i: Signed decimal integer (equivalent to %d) (base 10)
%u: Unsigned decimal integer (e.g., 0, 123)
%o: Unsigned octal integer (e.g., 0, 123 in base 8)
%x: Unsigned hexadecimal integer (lowercase, e.g., 0, 123F in base 16)
%X: Unsigned hexadecimal integer (uppercase, e.g., 0, 123F in base 16)
Floating-Point Format Specifiers:********************************************************************************************************************

%f: Floating-point number (default precision 6 decimal places)
%e: exponential Floating-point number in scientific notation (e.g., 1.234567e+02)
%g: Floating-point number in either %f or %e format, whichever is shorter
Character Format Specifier:**************************************************************************************************************************

%c: Single character
String Format Specifier:*****************************************************************************************************************************

%s: String of characters (null-terminated)
Other Format Specifiers:*****************************************************************************************************************************

%%: Prints a literal percent sign (%)
%p: Pointer address (in hexadecimal format)
Modifiers for Format Specifiers:********************************************************************************************************************

In addition to the basic format specifiers, you can use modifiers to control the output or input further. Here are some common modifiers:

-: Left-justify the output within the field width.
+: Print a sign for positive numbers (default for %d and %i).
: Print a space for positive numbers (default for %o, %u, %x, and %X).
0: Pad with zeros instead of spaces.
*: Use an asterisk (*) to specify the field width or precision dynamically using a separate argument.
Field width (number): Minimum number of characters to allocate for the output.
Precision (number): For floating-point numbers, specifies the number of decimal places to display. For strings, specifies the maximum number of characters to print.
    */















   
    return 0;
}