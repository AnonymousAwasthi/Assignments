#include<stdio.h>
int factorial(int n);
int nCr(int n,int r);
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        int p=0;
        int k=1;
        for(j=0;j<m;j++)
        {
            if(j>=m/2-i&&j<=m/2+i)
            {
                if(k==1)
                {
                    int x=nCr(i,p);
                    printf("%d ",x);
                    p++;
                    k--;
                }
                else
                {
                    printf("  ");
                    k++;
                }

            }
            else
                printf("  ");

        }
        printf("\n");
    }
}
int factorial(int n)
	{
	    int fact=1;
	    if(n==0)
	    return 1;
	    else
    return n*factorial(n-1);
	}
int nCr(int n,int r)
	{
	    return factorial(n)/factorial(r)/factorial(n-r);
	}
