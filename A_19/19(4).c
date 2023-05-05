#include<stdio.h>
#include<string.h>
int main()
{
    void rotate(int arr[],int size,int n,int d)
    {
        int i,j;
        for(i=0;i<size;i++)
        {
            printf("Enter a number");
            scanf("%d",&arr[i]);
        }
        for(i=1;i<=n;i++)
        {
                if(d==1){
                int temp=arr[size-1];
                for(j=size-1;j>0;j--)
                    arr[j]=arr[j-1];
                arr[0]=temp;
                  }
                if(d==-1)
                {
                    int temp=arr[0];
                    for(j=0;j<size-1;j++)
                        arr[j]=arr[j+1];
                    arr[size-1]=temp;
                }
        }
        for(i=0;i<size;i++)
          printf("%d ",arr[i]);
    }
    int a[10];
    rotate(a,10,2,1);//-1->left and 1->right
}
