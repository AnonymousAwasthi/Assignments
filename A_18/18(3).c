
#include<stdio.h>
int main()
{
    int arr[10],i,sumeven=0,sumodd=0;
    for(i=0;i<=9;i++)
    {
        printf("enter a number");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            sumeven+=arr[i];
        else
            sumodd+=arr[i];
    }
    printf("sum of even numbers is %d and sum of odd numbers is %d",sumeven,sumodd);
}
