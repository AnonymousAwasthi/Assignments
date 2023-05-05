#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int x)
{
    for(int i=2;i<=x-1;i++)
        if(x%i==0)
            return false;
    return true;
}
int highestValueDigit(int x)
{
    int maxDigit=-1,r;

    while(x)
    {
        r=x%10;
        if(maxDigit<r)
            maxDigit=r;
        x/=10;
    }
    return maxDigit;
}
double power(double x,double y)
{
    
    if(y>0)
        return x*power(x,y-1);
    else if(y<0)
        return 1/x*power(x,y+1);
    else
        return 1;
}
int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
void printPascal(int lines)
{
    int i,j,flag,c,n,r;
    for(i=1;i<=lines;i++)
    {
        flag=1;
        n=i-1;
        r=0;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
            {
                if(flag)
                    cout<<combi(n,r++);
                else
                    cout<<" ";
                flag=1-flag;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
bool isInFib(int num)
{
    int a=-1,b=1,c=0;

    while(c<num)
    {
        c=a+b;
        if(num==c)
            return true;
        a=b;
        b=c;
    }
    return false;
}
void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
int add(int a,int b,int c=0)
{
    return a+b+c;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
double area(int a,int b,int c)
{
    double s;
    s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int big(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
double big(double a,double b)
{
    if(a>b)
        return a;
    else
        return b;
}
int add(int a,int b)
{
    return (a+b);
}
double add(double a,double b)
{
    return (a+b);
}
int main()
{
    printPascal(6);
    cout<<endl;
    return 0;
}