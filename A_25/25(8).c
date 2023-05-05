#include<stdio.h>
#include<string.h>
int merge(int*,int,int*,int,int*);
int main()
{
    int arrA[5],i;
    printf("Enter 5 numbers\n");
    for(i=0;i<5;i++)
    scanf("%d",&arrA[i]);
    int arrB[5];
    printf("Enter 5 numbers\n");
    for(i=0;i<5;i++)
    scanf("%d",&arrB[i]);
    int *k,p[10];
    k=p;
    k=merge(arrA,5,arrB,5,p);
    for(i=0;i<10;i++)
        printf("%d ",k[i]);

}
int merge(int *a,int x,int *b,int y,int *c)
    {
        int i;
        for(i=0;i<x+y;i++)
        {
            if(i<x)
            c[i]=a[i];
            else
                c[i]=b[i-x];
        }
        return c;
    }
