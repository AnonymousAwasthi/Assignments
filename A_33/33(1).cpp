#include<iostream>
#include<string.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setData(int,int);
    void showData();
    complex add(complex);
    complex subtract(complex);
    complex multiply(complex);
};
void complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void complex::showData()
{
    cout<<a<<"+i"<<b<<endl;
}
complex complex:: add(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
complex complex:: subtract(complex c)
{
    complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;
}
complex complex:: multiply(complex c)
{
    complex temp;
    temp.a=a*c.a;
    temp.b=b*c.b;
    return temp;
}
int main()
{

}
