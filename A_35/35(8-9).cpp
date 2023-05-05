#include<iostream>
using namespace std;

class distanc
{
    int km,m,cm;
public:
    distanc(int x,int y,int z):km(x),m(y),cm(z)
    {

    }
    distanc(){}
    distanc operator+(distanc);
    void operator--(int);
    void operator--();
    void showdata()
    {
        cout<<km<<","<<m<<","<<cm<<endl;
    }
};
distanc distanc::operator+(distanc d)
{
    distanc temp;
    int p=(d.km+km)*100000+(d.m+m)*100+d.cm+cm;
    temp.km=p/100000;
    p=p%100000;
    temp.m=p/100;
    p=p%100;
    temp.cm=p;
    return temp;
}
void distanc::operator--()
{
    int p=km*100000+m*100+cm-1;
    km=p/100000;
    p=p%100000;
    m=p/100;
    p=p%100;
    cm=p;
}
void distanc::operator--(int)
{
    int p=km*100000+m*100+cm-1;
    km=p/100000;                            //why distance cannot b used as class name
    p=p%100000;
    m=p/100;
    p=p%100;
    cm=p;
}
int main()
{
    distanc j(85,56,32),k(45,62,84),l;
    l=j+k;
    l--;
    --l;
    l.showdata();
}
