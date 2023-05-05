#include<stdio.h>
#include<string.h>
int* merge(int*,int,int*,int);
int main()
{
    int arr1[10]={50,60,80,90,40,30,20,10,70,50},arr[6]={12,32,65,94,81,75};
    int i,*p;
    p=merge(arr1,10,arr,6);
    for(i=0;i<16;i++)
        printf("%d\n",*(p+i));
}
int* merge(int *p,int m,int *q,int n)
{
    int i,*y;
    y=(int*)malloc((m+n)*4);
    for(i=0;i<m+n;i++)
    {
        if(i<m)
        *(y+i)=*(p+i);
        else
          *(y+i)=*(q+i-m);
    }

        return y;
}
