#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}
void swap(int &x,int &y)
{
    x=x+y-(y=x);
}
