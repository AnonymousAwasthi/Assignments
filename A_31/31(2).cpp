#include<iostream>
#include<string.h>
using namespace std;
void sort(bool b,char a[][20],int n);
int main()
{
   bool b;
   cout<<"Enter 1 for true or 0 for False";
  cout<<endl; cin>>b;
    char str[10][20];
    int i;
    cout<<"Enter 10 strings of max 20 characters"<<endl;
    for(i=0;i<10;i++)
        cin.getline(str[i],20);
        sort(b,str,10);
        for(i=0;i<10;i++)
        cout<<str[i]<<" ";
}
void sort(bool b,char a[][20],int n)
{
    if(b==true)
    {
        int i,j;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(strcmp(a[i],a[j])==1)
                   {
                           char p[20];
                        strcpy(p,a[i]);
                        strcpy(a[i],a[j]);
                        strcpy(a[j],p);
                   }
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
                if(strcmp(a[i],a[j])==-1)
                    {
                        char p[20];
                    strcpy(p,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j],p);
                    }
            }
        }
    }
}
