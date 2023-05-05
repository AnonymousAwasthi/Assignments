#include<stdio.h>
int main()
{
    void printN(int n)
    {
        if(n>0){if(n%2==0)
        printf("%d",n);
        printN(n-1);

        }
    }
    printN(20);
}
