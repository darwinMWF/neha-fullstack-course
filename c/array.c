#include <stdio.h>
int main()
{

    //   int mark[] = {54,76,43,98,65};

    //   for (int i = 0; i <= 4; i++)
    //   {
    //     printf("%d",mark[i]);
    //     printf("\t");
    //   }

    //    int mark[2][3];

    //    for (int i = 0; i < 2; i++)
    //    {
    //     for (int j = 0; j < 3; j++)
    //     {
    //        printf("Enter Your Value:-");
    //        scanf("%d",&mark[i][j]);
    //     }

    //    }
    //    for (int i = 0; i < 2; i++)
    //    {
    //     for (int j = 0; j < 3; j++)
    //     {

    //        printf(" [%d] x [%d] = %d \n",i,j,mark[i][j]);

    //     }

    //    }
    //   0 = 1 2 3
    //   1 = 4 5 6

    int mark[2][2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Enter Your Value:-");
                scanf("%d", &mark[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {

                printf("[%d] = [%d] x [%d] == %d\n", i, j, k, mark[i][j][k]);
            }
        }
    }

    return 0;
}