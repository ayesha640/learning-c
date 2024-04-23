#include <stdio.h>

int main()
{
    char c;
    printf("Do you agree?");
    scanf(" %c", &c);
    // scanf("%c\n", &c); Ayesha! Ayesha! tumhein q nhi 1 baat 1 bar mn samjh a rhi why you are repeating the same mistake over and over again dekho jb bhi scanf use karo \n mat use kia karo verna wo pagal nextline bhi scan karny lag jaye ga q nhi akl a rhi tumhein
    if (c == 'y' || c == 'Y')
    {
        printf(" Agree \n ");
    }
    else if (c == 'n' || c == 'N')
    {
        printf(" Disagree \n ");
    }
    else
    {
        printf("Invalid Entry\n ");
    }

    return 0;
}