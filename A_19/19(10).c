#include<stdio.h>
int main()
{
    void merge(int a[],int n)
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            printf("Enter a number");
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            int count=0;
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j])
                    count++;
            }
            printf("frequency of %d is %d\n",a[i],count);
        }

    }
    int a[10];
    merge(a,10);
}
