#include<iostream>
#include<string.h>
using namespace std;
void print(char str[],int i,int j=0);
int main()
{
    char str[50];
    cout<<"Enter a string of max 50 characters"<<endl;
    cin.getline(str,50);
    print(str,5);
}
void print(char str[],int i,int j)
{
    int k;
    if(j>0)
    {
        for(k=i;k<j;k++)
        cout<<str[k];
    }
    if(j==0)
    {
        for(k=i;str[k];k++)
            cout<<str[k];
    }

}
