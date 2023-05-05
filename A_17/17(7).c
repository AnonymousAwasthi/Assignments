#include<stdio.h>
int main()
{
    int hcf(int x,int y)
    {
        if(y==0)
            return x;
        if(x==0)
            return y;
        if(x>y)
        return hcf(x%y,y);
        else
            return hcf(x,y%x);
    }
    int k=hcf(84,54);
    printf("%d",k);
}
use of Euclid theoram