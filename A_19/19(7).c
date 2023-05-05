#include<stdio.h>
int main()
{
    void count(int arr[],int n)
    {
        int i,j,count=0;
        for(i=0;i<n;i++)
        {
            printf("Enter a number");
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(arr[i]==arr[j])
                   {
                        printf("%d",arr[i]);
                        count++;
                   }
                   if(count==0)
        printf("No duplicate value found");
    }
    int a[10];
    count(a,10);
}
