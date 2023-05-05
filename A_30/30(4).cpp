#include<iostream>
using namespace std;
void pascal(int);
int fact(int x);
int nCr(int n,int r);
int main()
{
    int n;
    cout<<"Enter number of rows";
    cin>>n;
    pascal(n);
}
void pascal(int n)
{
    int i,j,k,r;
    for(i=0;i<n;i++)
    {
        for(j=0,k=0,r=0;j<2*n-1;j++)
        {
            if(j>=n-i-1&&j<=n-1+i)
               {
                    if(k==0)
                        {int p;p=nCr(i,r);r++;cout<<p<<"  ";}
                    else
                        cout<<"   ";
                k=1-k;
               }
            else
                cout<<"   ";
        }
        cout<<endl;
    }
}
int fact(int x)
{
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}
int nCr(int n,int r)
{
    return fact(n)/fact(r)/fact(n-r);
}
