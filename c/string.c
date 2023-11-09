#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = {'k','i','s','h','a','n','\0'};

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c",name[i]);
    }

    // '\0' null charecter
    char name[50];
    printf("Enter Your Name:-");
    scanf("%s",&name);
    gets(name);
    fgets(name,50,stdin);
    puts(name);

       printf("The Charecter Value is:%d",strlen(name) - 1);

    char str1[] = "String 1";
    char str2[] = "String 2";
    strcpy(str1,str2);  //copies a string 2 to 1
    puts(str1); //Output  : String 2

    strcat(str1, str2); // concatenates(joins) two strings
    puts(str1);

    
    // printf("%d",strcmp(str1,str2));

    strlwr(str1); //converts string to lowercase
    strupr(str1); //converts string to uppercase

    puts(str1); 
    return 0;
}