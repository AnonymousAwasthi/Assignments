#include<stdio.h>
int main()
{
    int greatest(int arr[],int n)
    {
        int i,max=0;
        for(i=0;i<n;i++)
        {
            printf("Enter a number");
            scanf("%d",&arr[i]);
            if(arr[i]>max)
                max=arr[i];

        }return max;
    }
    int a[10];
    int k=greatest(a,10);
    printf("%d",k);
}
