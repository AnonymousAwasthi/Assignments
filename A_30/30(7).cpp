#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter two numbers";
    cin>>a>>b;
    int sum2=add(a,b);
    cout<<sum2;
    cout<<"Enter a number";
    cin>>c;
    int sum3=add(a,b,c);
    cout<<sum3;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
