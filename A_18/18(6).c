
#include<stdio.h>
int main()
{
    int arr[10],i,temp;
    for(i=0;i<=9;i++)
    {
        printf("Enter a number");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=2;j++)
    {
        for(int k=0;k<=9;k++)
        {
            if(arr[j]<arr[k])//use > sign for descending order sorting
            {
                int temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<=9;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
