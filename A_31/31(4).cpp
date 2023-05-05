#include<iostream>
#include<string.h>
using namespace std;
int lcm(int x,int y,int z);
int main()
{
   int k=lcm(24,24,24);
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
    int i,lcm=1;
    for(i=2;i<p;)
        {
                if(x%i==0||y%i==0||z%i==0)
                    {
                        lcm*=i;
                        if(x%i==0)
                            x=x/i;
                        if(y%i==0)
                            y=y/i;
                        if(z%i==0)
                            z=z/i;
                    }
                    else
                        i++;
        }
        return lcm;
}
