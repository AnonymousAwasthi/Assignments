#include<stdio.h>
int main()
{
    long int fact(int n)
    {
        if(n==0)
            return 1;
        return n*fact(n-1);
    }
    long int k=fact(5);
    printf("%ld",k);
}
