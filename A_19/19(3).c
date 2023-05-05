#include<stdio.h>
int main()
{
    void sort(int arr[],int n)
    {
        int i,j,min;
        for(i=0;i<n;i++)
        {
            printf("Enter a number");
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i]<arr[j])
                  {
                      int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                  }
            }
        }
        for(i=0;i<n;i++)
          printf("%d ",arr[i]);
    }
    int a[10];
    sort(a,10);
}
