#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    float avg;
    for(i=0;i<=9;i++)
    {
        printf("enter a number");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/10.0;
    printf("%.3f",avg);
}
