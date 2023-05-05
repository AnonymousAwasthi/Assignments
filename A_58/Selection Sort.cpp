#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//Selection Sort
template <class X>
void SelectionSort(X *a,int n)
{
    X temp;
    int index=-1;
    for(int r=1;r<n;r++)
    {
        temp=a[r];
        for(int j=r-1;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
                index=j;
            }
        }
        if(index!=-1)
            a[index]=temp;
        index=-1;
    }
}
//template <>
/*void  SelectionSort(char a[][20],int n)
{int k,r;
    int count=-1;
    for(int r=1;r<n;r++)
    {char temp[20];
                for(int k=0;a[r][k];k++)
                        temp[k]=a[r][k];
                temp[k]='\0';
        for(int j=r-1;j>=0;j--)
        {
            if(strcmp(temp,*(a+j))==-1)
            {
                count=j;
                for(k=0;a[j][k];k++)
                        a[j+1][k]=a[j][k];
                a[j+1][k]='\0';
            }
        }
        if(count!=-1)
            {
                for(int k=0;temp[k];k++)
                        a[count][k]=temp[k];
                a[count][k]='\0';
            }
    }
}*/
int main()
{
    char a[10][20]={'\0'};
    for(int i=0;i<10;i++)
    {
        cin.getline(a[i],20);
        a[i][strlen(a[i])]='\0';
    }
    SelectionSort(a,10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
}
