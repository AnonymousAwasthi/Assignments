#include<iostream>
using namespace std;
int highest_value(int x);
int main()
{
    int x;
    cout<<"Enter a number";
    cin>>x;
    int y;
    y=highest_value(x);
    cout<<y;

}
int highest_value(int x)
{int c=0;
    while(x)
    {
        int y;
        y=x%10;
        if(y>c)
            c=y;
        x=x/10;
    }
    return c;
}
