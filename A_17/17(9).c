#include<stdio.h>
int main()
{
    int count_digit(int x)
    {
        if(x==0)
            return 0;
        return 1+count_digit(x/10);
    }
    int i=count_digit(00034);
    printf("%d ",i);
}
