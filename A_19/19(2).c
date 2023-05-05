#include<stdio.h>
int main()
{
    int greatest(int arr[],int n)
    {
        int i,min;
        for(i=0;i<n;i++)
        {
            printf("Enter a number");
            scanf("%d",&arr[i]);
        }
            min=arr[0];
            for(i=0;i<n;i++)
           {
               if(arr[i]<min)
                min=arr[i];
           }

        return min;
    }
    int a[10];
    int k=greatest(a,10);
    printf("%d",k);
}
