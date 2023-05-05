#include<iostream>
#include<string.h>
using namespace std;
class complex
{
    private:
        int re,im;
    public:
        void setValue(int a,int b)
        {
            re=a;im=b;
        }
        void display()
        {
            cout<<re<<"+i"<<im<<endl;
        }
};
class time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int a,int b,int c)
        {
            hr=a;min=b;sec=c;
        }
        void display()
        {
            cout<<hr<<"hr "<<min<<"min "<<sec<<"sec"<<endl;
        }
};
class date
{
private:
    int day,mon,yr;
public:
    void setdate(int a,int b,int c)
    {
        day=a;mon=b;yr=c;
    }
   /* void getdate()
    {
        cout<<"d="<<day<<", m="<<mon<<", y="<<yr<<endl;
    }*/
    /*void getdate()
    {
        cout<<day<<"-"<<mon<<"-"<<yr<<endl;
    }*/
    void getdate()
    {
	char *month[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
        cout<<day<<"-"<<month[mon-1]<<"-"<<yr<<endl;
    }
};
class circle
{
    private:
        float rad;
    public:
        void setradius(float x)
        {
            rad=x;
        }
        void getradius()
        {
            cout<<rad<<endl;
        }
       float area()
        {
            return 3.14*rad*rad;
        }
        float circumference()
        {
            return 2*3.14*rad;
        }
};
int main()
{
   complex o1;
   o1.setValue(3,4);
   o1.display();
   time t;
   t.setTime(11,34,56);
   t.display();
   date d;
   d.setdate(24,8,2089);
   d.getdate();
}
