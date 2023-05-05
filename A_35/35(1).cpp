#include<iostream>
#include<string.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex()
    {
    }
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    complex(complex &c)
    {
        a=c.a;
        b=c.b;
    }
    complex operator+(complex);
    complex operator-(complex);
    complex operator*(complex);
    bool operator==(complex);
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
complex complex::operator-(complex c)
{
    complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;
}
complex complex::operator*(complex c)
{
    complex temp;
    temp.a=a*c.a;
    temp.b=b*c.b;
    return temp;
}
bool complex::operator==(complex c)
{
    if(a==c.a&&b==c.b)
    return 1;
    else return 0;
}
int main()
{
    complex c1(3,4),c2(3,4),c3;
    c3=c1+c2;
    c3=c1-c2;
    c3=c1*c2;
    if(c1==c2)
        cout<<"Hello";

}

