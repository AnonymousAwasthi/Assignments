#include<iostream>
#include<string.h>
using namespace std;
void rotate(int a[],int m,int d,int n=1);
int main()
{
   int d;
   cout<<"Enter 1 for right or -1 for left";
  cout<<endl; cin>>d;
    int arr[10];
    int i,n;
    cout<<"Enter 10 numbers"<<endl;
    for(i=0;i<10;i++)
        cin>>arr[i];
        rotate(arr,10,d);
        for(i=0;i<10;i++)
        cout<<arr[i]<<" ";
}
void rotate(int a[],int m,int d,int n)
{
    if(d==1)
    {
        int i,j;
        for(i=0;i<n;i++)
        {int c=a[m-1];
            for(j=m-1;j>=0;j--)
            {

                a[j]=a[j-1];
            }
            a[0]=c;
        }
    }
    else
    {
        int i,j;
        for(i=0;i<n;i++)
        {int c=a[0];
            for(j=0;j<m;j++)
            {
               a[j]=a[j+1];
            }
            a[m-1]=c;
        }
    }
}
