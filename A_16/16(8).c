#include<stdio.h>
int main()
{
    void binary(int n)
    {
        int i=0,j;
        int arr[16]={0};
        while(n>=1)
        {
        arr[i]=n%2;
        n=n-arr[i];
        i++;
        j=i;
        n=n/2;}
        for(i=j-1;i>=0;i--)
            printf("%d",arr[i]);
    }
    binary(13);
}
