#include<stdio.h>
int main()
{
    int sumN(int n)
    {
        if(n==1)
            return 1;
        return 2*n-1+sumN(n-1);
    }
    int k=sumN(10);
    printf("%d",k);
}
