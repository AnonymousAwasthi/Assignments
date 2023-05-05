#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//Bubble Sort
/*template <class X>
void bubbleSort(X *a,int n)
{
    for(int r=1;r<n;r++)
    {
        for(int j=r;j<n;j++)
        {
            if(a[r-1]>a[j])
            {
                a[r-1]=a[r-1]+a[j]-(a[j]=a[r-1]);
            }
        }
    }
}*/
//template <>
void bubbleSort (char a[][20],int n)
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
    char a[10][20];
    for(int i=0;i<10;i++)
    {
        cin.getline(a[i],20);
    }
    bubbleSort(a,10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
}
