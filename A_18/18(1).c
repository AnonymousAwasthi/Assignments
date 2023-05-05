#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    for(i=0;i<=9;i++)
    {
        printf("enter a number");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
}

