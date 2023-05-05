#include<iostream>
using namespace std;
class Circle {
    private:
        int radius;
    public:
        void setRadius(int r)
        {
            radius=r;
        }
        int getRadius()
        {
            return radius;
        }
        float getArea(){
            return 3.14*radius*radius;
        }
        float getCircumference(){
            return 2*3.14*radius;
        }
};
class Date{
    private:
        int d,m,y;
    public:
        void setDate(int a,int b,int c)
        {
            d=a;
            m=b;
            y=c;
        }
        void showDate()
        {
            cout<<"\n"<<d<<"/"<<m<<"/"<<y;
        }
        void showDateFormat1()
        {
            cout<<"\n"<<d<<"-"<<m<<"-"<<y;
        }
        void showDateFormat2()
        {
            char *months[]={"jan",
                            "Feb",
                            "Mar",
                            "Apr",
                            "May",
                            "Jun",
                            "Jul",
                            "Aug",
                            "Sep",
                            "Oct",
                            "Nov",
                            "Dec"};
            cout<<"\n"<<d<<"-"<<months[m-1]<<"-"<<y;
        }
};
class Time{
    private:
        int hr,min,sec;
    public:
        void setTime(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void showTime()
        {
            cout<<"\n"<<hr<<":"<<min<<":"<<sec;
        }
};
class Complex{
    private:
        int real,imag;
    public:
        void setComplex(int x,int y)
        {
            real=x;
            imag=y;
        }
        void showComplex()
        {
            cout<<"\nreal="<<real<<" imaginary="<<imag;
        }

};