#include<stdio.h>
int main()
{
    int arr[10],i,max=0;
    for(i=0;i<=9;i++)
    {
        printf("Enter a number");
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%d",max);
}
