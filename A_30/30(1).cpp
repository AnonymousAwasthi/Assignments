#include<iostream>
using namespace std;
int main()
{
    int x,count=0;
    cout<<"Enter a number";
    cin>>x;
    int i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            count++;

    }
     if(count==2)
        cout<<endl<<x<<" is prime";
    else
        cout<<endl<<x<<" is not prime";

}
