#include<stdio.h>
int main()
{
    void printN(int n)
    {
        if(n>0){
        printN(n-1);
        if(n%2)
        printf("%d",n);
        }
    }
    printN(20);
}
