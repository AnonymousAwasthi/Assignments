#include<stdio.h>
int main()
{
    int duplicate_value(int arr[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("Enter a number");
            scanf("%d",&arr[i]);
            if(i>0)
               if(arr[i-1]==arr[i])
                    return arr[i];
        }
        return 0;
    }
    int a[10],k;
    k=duplicate_value(a,10);
    if(k==0)
        printf("No Adjacent Duplicate value found");
    else
        printf("%d",k);
}
