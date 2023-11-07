// #include <stdio.h>
// void self();  //Declaration
// int main()
// {

// self(); //Call

//     return 0;
// }
// void self(){  //Defination

//   printf("My name is Kishan\n");
//   printf("My Laptop is Dell");

// }

#include <stdio.h>
int sum(int a, int b);
char self(char name[]);
char self1();
int main()
{
    int x = 10;
    int y = 12;

    // sum(y, x);   // pass by reference
    // sum(10, 23); // pass by value

    // self("kishan");
    self1();

    return 0;
}
char self(char name[])
{
    printf("My Name is %s", name);
}
int sum(int a, int b)
{
    a = a + b;
    printf(" %d ", a);
}
char self1(){
  char name[50];
  int age;
   printf("Enter Your Name");
   scanf("%s",&name);
   printf("Enter Your Age");
   scanf("%d",&age);

   printf("My name is %s and my age is %d",name,age);

}