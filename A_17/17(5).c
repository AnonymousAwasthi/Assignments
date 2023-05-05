#include<stdio.h>
int main()
{
    int sum_of_digits(int x)
    {
        if(x==0)
            return 0;
        return x%10+sum_of_digits(x/10);
    }
    int k=sum_of_digits(5589);
    printf("%d",k);
}
