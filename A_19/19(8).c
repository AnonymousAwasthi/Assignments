#include<stdio.h>
int main()
{
    void count(int arr[],int n)
    {
        int i,j,count;
        for(i=0;i<n;i++)
        {
            printf("Enter a number");
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {count=0;
            for(j=0;j<n;j++)
            {if(arr[i]==arr[j])
                count++;}
            if(count==1)
                printf("%d",arr[i]);}
    }
    int a[10];
    count(a,10);
}
