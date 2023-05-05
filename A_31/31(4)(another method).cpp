#include<iostream>
#include<string.h>
using namespace std;
int lcm(int x,int y,int z);
int main()
{
   int k=lcm(24,34,18);
   cout<<k;
}
int lcm(int x,int y,int z)
{int p;
    if(x>y&&x>z)
        p=x;
    else if(y>z)
        p=y;
    else
        p=z;
    int i;
    for(i=p;i<=x*y*z;i++)
        {
                if(i%x==0&&i%y==0&&i%z==0)
                    return i;
        }
}
