#include<iostream>
#include<string.h>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
    void setTime(int,int,int);
    void showTime();
    void normalize();
    Time add(Time);
    bool IsGraeter(Time);
};
void Time::setTime(int x,int y,int z)
{
    h=x;
    m=y;
    s=z;
}
void Time::showTime()
{
    cout<<h<<":"<<m<<":"<<s<<endl;
}
void Time:: normalize()
{
    if(s>=60)
    {
        m=m+(s-s&60)/60;
        s=s%60;
    }
    if(m>60)
    {
        h=h+(m-m%60)/60;
        m=m%60;
    }


}
Time Time:: add(Time t)
{
    Time temp;
    int p;
    p=h*3600+m*60+s+t.h*3600+t.m*60+t.s;
    temp.h=p/3600;
    p=p%3600;
    temp.m=p/60;
    p=p%60;
    temp.s=p;
    return temp;


}
bool Time:: IsGreater(Time t)
{
    t.normalize();
    normalize();
    if(t.h>h)
        return 0;
    else if(t.h==h)
    {
        if(t.m>m)
            return 0;
        else if(t.m==m)
        {
            if(t.s>=s)
                return 0;
            else
                return 1;
        }
        else return 1;
    }
    else return 1;
}
int main()
{

}
