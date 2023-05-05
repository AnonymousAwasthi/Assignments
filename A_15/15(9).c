
#include<stdio.h>
int main()
{
    int x,y,p,q,i,j,temp,z;
    printf("Enter two number");
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        p=x;
        q=y;
    }
    else{
        p=y;
        q=x;
    }
    for(i=p+1;i<q;i++)
    {
        int sum=0,count=0;
        temp=i;
        while(temp)
        {
            temp/=10;
            count++;
        }
        temp=i;
        while(temp)
        {
            int y=temp%10;
            for(j=1,z=1;j<=count;j++)
                z=z*y;
                sum+=z;
                temp/=10;
        }
        if(sum==i)
            printf("%d ",i);
    }
}
