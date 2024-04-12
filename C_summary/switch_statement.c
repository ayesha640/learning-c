#include <stdio.h>

int main()
{
    char mygrade;

    printf("Enter a your grade: ");
    scanf("%c", &mygrade);

    switch (mygrade)
    {
    case 'A':
        printf(" congratulations you gotta A grade\nYOU ARE PASS:) ");
        break;
    case 'B':
        printf(" congratulations you gotta B grade\n YOU ARE PASS:)");
        break;
    case 'C':
        printf(" congratulations you gotta C grade\nYOU ARE PASS:) ");
        break;
    case 'D':
        printf(" congratulations you gotta D grade\n YOU ARE PASS:)");
        break;
    case 'E':
        printf(" congratulations you gotta E grade\nYOU ARE PASS:) ");
        break;
    case 'F':
        printf(" BETTER LUCK NEXT TIME! you gotta F grade\nYOU ARE FAIL:( ");
        break;

    default:
        PRINTF("INVALID GRADE\n");
        break;
    }
    return 0;
}