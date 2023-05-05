#include<iostream>
#include<math.h>
using namespace std;
class array
{
private:
    int *p;
    int size;
public:
    void operator=(array);
    friend array operator+(array,array);
    void setdata()
    {
        cout<<"Enter size"<<endl;
        cin>>size;
    }
};
void array::operator=(array a)
{
    int i;
    for(i=0;i<size;i++)
        *(p+i)=*(a.p+i);
}
array operator+(array a,array b)
{
    array temp;
    temp.size=a.size+b.size;
    temp.p=new int[temp.size];
    int i;
    for(i=0;i<temp.size;i++)
    {
        if(temp.size<a.size)
        *(temp.p+i)=*(a.p+i);
        else
            *(temp.p+i)=*(b.p+i-a.size);
    }
    return temp;
}
class time
{
private:
    int hr,min,sec;
public:
    friend istream& operator>>(istream&,time&);
    friend ostream& operator<<(ostream&,time);
    void operator=(time);
};
void time::operator=(time t)
{
    hr=t.hr;
    min=t.min;
    sec=t.sec;
}
istream& operator>>(istream &cin,time &t)
{
    cin>>t.hr>>t.min>>t.sec;
}
ostream& operator<<(ostream &cin,time t)
{
    cin<<t.hr<<t.min<<t.sec;
}
class complex
{
private:
    int a,b;
public:
    friend complex operator+(complex,complex);
    friend complex operator-(complex,complex);
    friend complex operator*(complex,complex);
    friend complex operator-(complex);
};
complex operator+(complex c,complex d)
{
    complex temp;
    temp.a=c.a+d.a;
    temp.b=c.b+d.b;
    return temp;
}
complex operator-(complex c,complex d)
{
    complex temp;
    temp.a=c.a-d.a;
    temp.b=c.b-d.b;
    return temp;
}
complex operator*(complex c,complex d)
{
    complex temp;
    temp.a=c.a*d.a;
    temp.b=c.b*d.b;
    return temp;
}
complex operator-(complex c)
{
    complex temp;
    temp.a=-c.a;
    temp.b=-c.b;
    return temp;
}
class integer
{
private:
    int a;
public:
    friend integer operator!(integer);
    friend bool operator==(integer,integer);
};
integer operator!(integer j)
{
    int arr[8]={0};
    int i,x=j.a;
    for(i=0;i<8;i++)
    {
        arr[i]=x%2;
        x=x/2;
        if(x==1)
            break;
    }
    for(i=0;i<8;i++)
    {
        if(arr[i]==0)
            arr[i]=1;
        else
            arr[i]=0;
    }
    int sum=0;
    for(i=0;i<8;i++)
    {
        sum=sum+arr[i]*pow(2,i);
    }
    integer temp;
    temp.a=sum;
    return temp;
}
bool operator==(integer x,integer y)
{
    if(x.a==y.a)
        return 1;
    else
        return 0;
}
class coordinate
{
private:
    int x,y;
public:
    coordinate operator,(coordinate);
    void showdata()
    {
        cout<<x<<" "<<y;
    }
    friend istream& operator>>(istream&,coordinate&);
};
coordinate coordinate::operator,(coordinate c)
{
   return c;
}
istream& operator>>(istream &cin,coordinate &c)
{
    cin>>c.x>>c.y;
    return cin;
}
int main()
{
coordinate c1,c2,c3;
c3=(c1,c2);
c3.showdata();
cin>>c1;
}
