// #include <stdio.h>
// void greeting (int n)
// {
//     //     for (int i = 1; i <= n; i++)
//     //     {
//     //         printf(" GOOD MORNING\n ");
//     //}

//     // Base case: If n is less than or equal to 0, stop recursion
//     if (n <= 0) {
//         return;
//     }
    
//     printf("good morning\n");
    
//     // Recursive call with decremented value of n
//     greeting(n - 1);

//     return;
// }

// int main()
// {
//     // print good morning n times and take n from user

//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     greeting(n);

//     // for (int i = 1; i <= n; i++)
//     // {
//     //     printf(" GOOD MORNING\n ");
//     // }

//     return 0;
// }




#include <stdio.h>
void decreasing_number(int n)
{
    //     for (int i = 1; i <= n; i++)
    //     {
    //         printf(" GOOD MORNING\n ");
    //}

    // Base case: If n is less than or equal to 0, stop recursion
    if (n <= 0) {
        return;
    }
    
    printf("%d\n",n);
    
    // Recursive call with decremented value of n
    decreasing_number(n - 1);

    return;
}

int main()
{
    // print numbers from n to 0

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decreasing_number(n);

    // for (int i = 1; i <= n; i++)

    return 0;
}

