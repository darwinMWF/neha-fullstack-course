#include <stdio.h>
int main()
{
    int age;
    char nt;

    // printf("Are You Indian Y/N");
    // scanf("%c", &nt);

    printf("Enter Your Age:-");
    scanf("%d", &age);

    // if (nt == 'Y' || 'y')
    // {
    //     printf("You Are Indian\n");
    //     if (age >= 18)
    //     {
    //         printf("You Are Eligable For Voting");
    //     }
    //     else
    //     {
    //         printf("You Are Not 18");
    //     }
    // }
    // else
    // {
    //     printf("Not Eligable For Voting");
    // }

    if (age > 18)
    {
        printf("Age is Bigger Than 18");
    }
    else if (age == 18)
    {
        printf("Age Equals to 18");
    }
    else{
       printf("Age is Smaller Than 18");

    }
    
    

    return 0;
}