#include<stdio.h>
int main()
{
    int power(int x,int y)
    {
        if(y==0)
            return 1;
        return x*power(x,y-1);
    }
    int i=power(2,5);
    printf("%d ",i);
}
