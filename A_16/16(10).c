#include<stdio.h>
int main()
{
    void reverse(int n)
    {
        int sum=0;
        while(n)
        {
            int y=n%10;
            sum=sum*10+y;
            n=n/10;
        }
        printf("%d",sum);
    }
    reverse(13985);
}
