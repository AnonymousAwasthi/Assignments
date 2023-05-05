#include<stdio.h>
#include<string.h>
int avg();
int main()
{
    int f;
    f=avg();
    printf("%d",f);
}
int avg()
{
    int i,k,*p,sum=0;
    printf("How many data values you have to insert");
    scanf("%d",&k);
    p=(int*)malloc(k*sizeof(int));
    for(i=0;i<k;i++)
    {printf("Enter a value");
    scanf("%d",p+i);
        sum+=*(p+i);}
        free(p);
        return sum;
}
