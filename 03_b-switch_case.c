#include <stdio.h>

int main()
{
    int rating;
    printf("Enter your rating\n");
    scanf("%d", &rating);
    switch (rating)
    {

    case 1:
        printf("Your rating is 1\n");
        break;
    case 2:
        printf("Your rating is 2\n");
        break;
    case 3:
        printf("Your rating is 3\n");
        break;
    case 4:
        printf("Your rating is 4\n");
        break;
    case 5:
        printf("Your rating is 5\n");
        break;
    default:
        printf("Invalid rating\n");
        break;
    }

    // if i don't add break; at the end then it will run all of them and answer would be like everything
    return 0;
}