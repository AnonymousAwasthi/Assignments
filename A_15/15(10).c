
#include<stdio.h>
int main()
{
   int fact(int n)
   {
       if(n==0)
        return 1;
       int i,fact=1;
       for(i=1;i<=n;i++)
            fact*=i;
            return fact;
   }
   int sum=0,j,n;
printf("enter value of n");
scanf("%d",&n);
for(j=0;j<n;j++)
    sum=sum+fact(j);
    printf("%d",sum);

}
