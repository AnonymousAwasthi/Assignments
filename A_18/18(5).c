
#include<stdio.h>
int main()
{
    int arr[10],i,min;
    for(i=0;i<=9;i++)
    {
        printf("Enter a number");
        scanf("%d",&arr[i]);
    }
        min=arr[0];
     for(i=0;i<=9;i++)
   {
           if(arr[i]<min)
            min=arr[i];
    }
    printf("%d",min);
}
