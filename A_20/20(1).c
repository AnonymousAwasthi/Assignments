#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    int b[3][3];
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
        {
            printf("Enter a number");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
        {
            printf("Enter a number");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }


}
