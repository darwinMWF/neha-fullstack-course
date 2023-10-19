#include <stdio.h>
int main()
{
    int i;
      for( i=10; i>0; i--)  //for(Initialize , Condition , Increment)
      { 

        if(i == 4){
            break;
        }
        if(i == 4){
            continue;
        }
        printf("%d\n",i);
      }

    // while (i<10)
    // {
    //     printf("Hello World %d\n",i);
    //     i++;
    // }

    // do
    // {
    //     printf("Hello World %d\n", i);
    //     i++;
    // } while (i < 10);

    return 0;
}