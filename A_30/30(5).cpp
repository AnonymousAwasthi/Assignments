#include<iostream>
using namespace std;
int fib(int n);
int main()
{
    int n,i;
    cout<<"Enter the term";
    cin>>n;
    if(n<=100)
    {n=n*2;
        for(i=1;i<=n;i++)
         if(fib(i-1)==n/2)
            {cout<<"yes";break;}

    if(i==n+1)
    cout<<"No";
    }
    else
    {i=0;
        while(1)
         {if(fib(i-1)==n)
            {cout<<"yes";break;}
            i++;}
    if(i==n+1)
    cout<<"No";
    }
}
int fib(int n)
{int k;
    int i;
    if(n==-1)
        return 1;
    if(n==-2)
        return -1;
    if(n>=0)
        return fib(n-1)+fib(n-2);
}
