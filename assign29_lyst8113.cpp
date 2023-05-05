#include<iostream>
using namespace std;
void f1()
{
    cout<<"Hello MySirG";
}
void f2()
{
    cout<<"Hello"<<endl<<"MySirG";
}
void f3()
{
    int a,b,c;
    cout<<"enter two numbers";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum is "<<c;
}
void f4()
{
    int r;
    float a;
    cout<<"Enter radius of a circle";
    cin>>r;
    a=3.14*r*r;
    cout<<"Area of a circle is "<<a;
}
void f5()
{
    int l,b,h,V;
    cout<<"Enter length, breadth and height of a cuboid";
    cin>>l>>b>>h;
    V=l*b*h;
    cout<<"Volume is "<<V;
}
void f6()
{
    int a,b,c;
    float avg;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    avg=(a+b+c)/3.0;
    cout<<"Average is "<<avg;
}
void f7()
{
    int x;
    cout<<"Enter a number";
    cin>>x;
    cout<<"Square of "<<x<<" is "<<x*x;
}
void f8()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    b=a+b -(a=b);
    cout<<"a="<<a<<" b="<<b;
}
void f9()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    if(a>b)
        cout<<a;
    else
        cout<<b;
}
void f10()
{
    int a[]={3,5,1,8,10,9,7,4,2,6};
    int s=0;
    for(int i=0;i<=9;i++)
        s=s+a[i];
    cout<<"Sum is "<<s;
}
int main()
{
    f8();
    cout<<endl;
    return 0;
}
