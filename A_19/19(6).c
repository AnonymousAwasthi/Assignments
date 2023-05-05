#include<stdio.h>
int main()
{
    void swap(int arr[],int n,int k,int j)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("Enter a number");
            scanf("%d",&arr[i]);
        }
        int temp;
        temp=arr[k];
        arr[k]=arr[j];
        arr[j]=temp;
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    int a[10];
    swap(a,10,5,9);
}
