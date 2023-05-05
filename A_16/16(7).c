#include<stdio.h>
int main()
{
    void printN(int n)
    {
        if(n>0){
        printN(n-1);
        printf("%d ",n*n);
        }
    }
    printN(20);
}
