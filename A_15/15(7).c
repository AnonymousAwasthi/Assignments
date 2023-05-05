
#include<stdio.h>
int main()
{
    void fib(int n)
    {
        int a=0,b=1,c;
        for(int i=1;i<=n;i++)
        {
            if(i==1)
                printf("%d ",a);
            if(i==2)
                printf("%d ",b);
            if(i>2){
                    c=a+b;
                    a=b;
                    b=c;
                    printf("%d ",c);
            }
        }
    }
    fib(9);

}
