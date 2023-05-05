#include<stdio.h>
int main()
{
    int sumN(int n)
    {
        if(n==1)
            return 1;
        return n*n+sumN(n-1);
    }
    int k=sumN(5);
    printf("%d",k);
}
