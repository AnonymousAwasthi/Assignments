#include<iostream>
#include<string.h>
using namespace std;
class Time
{
private:
        int hr;
        int min;
        int sec;
public:
        void setTime(int hr,int min,int sec)
        {
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }
        void showTime()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
        Time* createArray(int size)
        {
            Time *t;
            t=new Time[size];
            return t;
        }
        void sort(Time *t,int size)
        {
            int i,j;
            for(i=0;i<size-1;i++)
            {
                for(j=i+1;j<size;j++)
                {int p,q;
                    p=3600*t[i].hr+60*t[i].min +t[i].sec;
                    q=3600*t[j].hr+60*t[j].min+t[j].sec;
                    if(p>q)
                    {
                        Time k;
                        k=t[i];
                        t[i]=t[j];
                        t[j]=k;
                    }
                }
            }
        }
        void displayArray(Time *t,int size)
        {
            int i;
            for(i=0;i<size;i++)
                t[i].showTime();
        }
};
class String
{
private:
    char *P;
    int L;
public:
    void create()
    {
        char ch,*p=NULL,*q=NULL;
        int l=1;
        q=new char[l];
        q[0]='\0';
        cout<<"Enter string"<<endl;
        while(1)
        {
            ch=getchar();
            if(ch=='\n')
                break;
            delete []p;
            p=new char[l+1];
            int i;
            for(i=0;i<l;i++)
              p[i]=q[i];
            p[l]='\0';
            p[l-1]=ch;
            delete []q;
            l++;
            q=new char[l];
            strcpy(q,p);
        }
        L=l;
        P=p;
        delete []q;
    }
    void show()
    {
        cout<<P;
    }
    void UpperCase()
    {
        int i;
        for(i=0;i<L-1;i++)
            if(P[i]<=122&&P[i]>=97)
            P[i]-=32;
    }
    void LowerCase()
    {
        int i;
        for(i=0;i<L-1;i++)
            if(P[i]<=90&&P[i]>=65)
            P[i]+=32;
    }
    int length()
    {
        return L;
    }
};
int main()
{
    Time d;
    d.setTime(2,3,4);
    d.showTime();
    String s;
    s.create();
    s.UpperCase();
    s.show();
}
