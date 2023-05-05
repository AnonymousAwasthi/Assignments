#include<iostream>
#include<cmath>
using namespace std;
void sort(bool b,int a[],int n);
int main()
{
   bool b;
   cout<<"Enter 1 for true or 0 for False";
  cout<<endl; cin>>b;
    int arr[10];
    int i;
    cout<<"Enter 10 numbers"<<endl;
    for(i=0;i<10;i++)
        cin>>arr[i];
        sort(b,arr,10);
        for(i=0;i<10;i++)
        cout<<arr[i]<<" ";
}
void sort(bool b,int a[],int n)
{
    if(b==true)
    {
        int i,j;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                    a[j]=a[i]+a[j]-(a[i]=a[j]);
            }
        }
    }
    else
    {
        int i,j;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                    a[j]=a[i]+a[j]-(a[i]=a[j]);
            }
        }
    }
}
