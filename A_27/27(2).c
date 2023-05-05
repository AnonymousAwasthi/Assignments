#include<stdio.h>
#include<string.h>
float avg();
int main()
{
    float f;
    f=avg();
    printf("%f",f);
}
float avg()
{
    int i,k,*p,sum=0;
    printf("How many data values you have to insert");
    scanf("%d",&k);
    p=(int*)malloc(k*sizeof(int));
    for(i=0;i<k;i++)
    {printf("Enter a value");
    scanf("%d",p+i);
        sum+=*(p+i);}
        float f;
        f=(float)sum/k;
        free(p);
        return f;
}
