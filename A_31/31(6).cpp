#include<iostream>
#include<string.h>
using namespace std;
int hcf(int x,int y);
int main()
{
  int k=hcf(34,68);
  cout<<k;
}
int hcf(int x,int y)
{
    int i,p=x<y?x:y;
    for(i=p;i>=1;i--)
    {
        if(x%i==0&&y%i==0)
            return i;
    }
}
