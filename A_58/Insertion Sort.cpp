#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//Insertion Sort
template <class X>
void InsertionSort(X *a,int n)
{
    X temp;
    int index=0;
    for(int r=1;r<n;r++)
    {
        temp=a[r-1];
        for(int j=r;j<n;j++)
        {
            if(temp>a[j])
            {
                temp=a[j];
                index=j;
            }
        }
        if(index!=0)
            a[r-1]=a[r-1]+a[index]-(a[index]=a[r-1]);
        index=0;
    }
}
//template <>
void InsertionSort (char a[][20],int n)
{
    int count=0;
    for(int r=1;r<n;r++)
    {
        for(int j=r;j<n;j++)
        {
            if(strcmp(*(a+r-1),*(a+j))==1)
            {
                count++;

                int k;
                char temp[20];
                for(k=0;a[r-1][k];k++)
                        temp[k]=a[r-1][k];
                    for(k=0;a[j][k];k++)
                        a[r-1][k]=a[j][k];

                    for(k=0;temp[k];k++)
                        a[j][k]=temp[k];
            }
        }
        if(count==0)
            break;
    }
}
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    InsertionSort(a,10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
}
