#include <stdio.h>

int main()
{
    // let a = "mukesh"

    // int a = 'a';
    // printf("%c",a);

    char letter;
    printf("please enter any letter: ");
    scanf("%c",&letter);
    
    if (letter > 64 && letter < 91)
    {
        printf("letter is capital");
    }
    else if (letter > 96 && letter < 123)
    {
        printf("letter is small");
    }
    else
    {
        printf("not valid letter");
    }
}