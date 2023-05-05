#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello MySirg"<<endl;
    cout<<"Hello"<<endl<<"MySirg"<<endl;
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
    cout<<"Area of circle with radii "<<a<<"="<<3.14*a*a<<endl;
    cout<<"Enter a number"<<endl;
    int c;
    cin>>c;
    cout<<"Volume of cuboid with dimensions "<<a<<","<<b<<","<<c<<" is "<<a*b*c<<endl;
    cout<<"average of "<<a<<","<<b<<","<<c<<" is "<<(float)(a+b+c)/3<<endl;
    cout<<"square of "<<a<<" is "<<a*a<<endl;
    a=a+b-(b=a);
    cout<<"a="<<a<<" b="<<b<<endl;
    if(a>b)
        cout<<"max="<<a<<endl;
    else
        cout<<"max="<<b<<endl;
    int p[10],i,sum=0;
    cout<<"Enter 10 numbers"<<endl;
    for(i=0;i<10;i++)
       {
           cin>>p[i];
           sum+=p[i];
       }
       cout<<"sum is"<<sum<<endl;

    return 0;
}
