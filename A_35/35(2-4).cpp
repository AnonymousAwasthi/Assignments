#include<iostream>
using namespace std;
    class time
    {
    private:
        int hr,min,sec;
    public:
        time(){}
        time(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        bool operator>(time);
        time operator++();
        time operator++(int);
        time operator+(time);
        void show()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
    };
    bool time::operator>(time t)
    {
        int p=hr*3600+min*60+sec;
        int q=t.hr*3600+t.min*60+t.sec;
        if(p>q)
            return 1;
        else
            return 0;
    }
    time time::operator++()//pre increment
    {
        int p=(hr*3600+min*60+sec)+1;
        hr=p/3600;
        p=p%3600;
        min=p/60;
        p=p%60;
        sec=p;
	return *this;
    }
    time time::operator++(int)
    {
	time temp=*this;
        int p=(hr*3600+min*60+sec)+1;
        hr=p/3600;
        p=p%3600;
        min=p/60;
        p=p%60;
        sec=p;
	return temp;
    }
    time time::operator+(time t)
    {
        time temp;
        int p=hr*3600+t.hr*3600+min*60+t.min*60+sec+t.sec;
        temp.hr=p/3600;
        p=p%3600;
        temp.min=p/60;
        p=p%60;
        temp.sec=p;
        return temp;
    }
int main()
{
    time a(23,34,45),b(34,45,56),c;
    if(a>b)
        cout<<"Hello";
    b++;
    b.show();
    c=a+b;
    c.show();
}
