#include<iostream>
using namespace std;
class fraction
{
    long numerator;
    long denominator;
public:
    fraction(long n=0,long d=0);
    fraction operator+(fraction);
    fraction operator<(fraction);

};
fraction::fraction(long n,long d)
{
    numerator=n;
    denominator=d;
}
fraction fraction:: operator+(fraction c)
{
    fraction temp;
    temp.numerator=numerator*c.denominator+denominator*c.numerator;
    temp.denominator=denominator*c.denominator;
    return temp;
}
fraction fraction::operator<(fraction f)
{
    if(numerator*f.denominator<f.numerator*denominator)
        return *this;
    else
        return f;
}
int main()
{
    fraction f(4,5),g(7,8),h;
    h=f+g;

}
