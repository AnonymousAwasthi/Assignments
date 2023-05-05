#include<stdio.h>
int main()
{
    void printN(int n)
    {
        if(n>0)
        {
            printf("%d ");
            printN(n-1);
        }
    }
    printN(5);
}
