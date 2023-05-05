#include<stdio.h>
int main()
{
    void merge(int a[],int n,int b[],int m)
    {
        int i,j,c[m+n];
        for(i=0;i<n;i++)
        {
            printf("Enter a number");
            scanf("%d",&a[i]);
            c[i]=a[i];
        }
        for(i=0;i<m;i++)
        {
            printf("Enter a number");
            scanf("%d",&b[i]);
        }
        for(i=n;i<n+m;i++)
        {
            c[i]=b[i-n];
        }
        for(i=0;i<m+n;i++)
        {
            for(j=0;j<m+n;j++)
            {
                if(c[j]<c[i])
                {
                    int temp=c[j];
                    c[j]=c[i];
                    c[i]=temp;
                }

            }
        }
        for(i=0;i<m+n;i++)
            printf("%d",c[i]);

    }
    int a[10],b[10];
    merge(a,10,b,10);
}
