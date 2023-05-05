#include<stdio.h>
int main()
{
    int fib(int n)
    {
        if(n==1)
            return 0;
        if(n==2)
            return 1;
        return fib(n-1)+fib(n-2);

    }
    int i;
    for(i=1;i<=10;i++)
    printf("%d ",fib(i));
}
