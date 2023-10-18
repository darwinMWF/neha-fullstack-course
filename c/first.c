#include<stdio.h>    //Header File
#define MARK = 100;   //Symbolic Constant
int main()          //Main Function
{
  //This is variable 

  /*
  Multiline 
  Comment
  */

 printf("Hello World\n");
 printf("Hello World\n");
 printf("Hello World\n");

 int mark = 67; //Identifier
 int Mark = 87; //Identifier
     mark = mark + 10;
     mark+=10;  //Shorthand 
  
 const float pie = 3.14;

 int a = 10;
 float b =12.03;
 char c = '$';
 char name[] = "Kishan";

 printf(" A = %d \n Mark = %d\n",a,mark);
 printf("My Name IS: %s\n",name);
//  printf("%.3f",pie);
  a++;
printf("%d\n",a);

int aa;

printf("Enter int value:-");
scanf("%d",&aa);
printf("AA value is: %d",aa);

    return 0;  //Return Statement
}