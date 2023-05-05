#include<stdio.h>
int hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        else
            return hcf(a%b,b);
    }
    else
    {
        if(b%a==0)
            return a;
        else
            return hcf(a,b%a);
    }

}
int sumN(int n)
{
    if(n==1)
        return 1;
    return n+sumN(n-1);
}
int sumOddN(int n)
{
    if(n==1)
        return 1;
    return 2*n-1 +sumOddN(n-1);
}
int sumEvenN(int n)
{
    if(n==1)
        return 2;
    return 2*n+sumEvenN(n-1);
}
int sumSquareN(int n)
{
    if(n==1)
        return 1;
    return n*n+sumSquareN(n-1);
}
int sumdigits(int x)
{
    if(x==0)
        return 0;
    return sumdigits(x/10)+x%10;
}
int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int fib(int n)
{
    if(n==0||n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
void printFib(int n)
{
    if(n==0)
        printf("%d ", n);
    else
    {
        printFib(n-1);
        printf("%d ",fib(n));
    }
}
int countDigits(int x)
{
    if(x==0)
        return 0;
    return countDigits(x/10)+1;
}
float power(float x,float y)
{
    if(y==0)
        return 1;
    if(y>0)
        return x*power(x,y-1);
    if(y<0)
        return power(x,y+1)/x;
}
int seriesSum(int n)
{
    int s=0;
    while(n)
    {
        s=s+fact(n)/n;
        n--;
    }
    return s;
}
int main()
{
    printf("%f",power(2,-3));
    printf("\n");
    return 0;
}