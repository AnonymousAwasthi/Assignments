#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
    public:
        Circle() { radius=1;}
        Circle(int r) { radius=r;}
};
class Room
{
    int roomno;
    string roomtype;
    bool is_AC;
    float price;
    public:
        Room(int r,string rt,bool ac, float p)
        {
            roomno=r;
            roomtype=rt;
            is_AC=ac;
            price=p;
        }
};
class Date
{
    private:
        int d,m,y;
    public:
        Date(int d,int m,int y):d(d),m(m),y(y){ }

};
class Student
{
    private:
        int rollno;
        string name;
    public:
        Student(){
            cout<<"Enter roll number: ";
            cin>>rollno;
            cout<<"Enter name";
            cin>>name;
        }
        void showStudent()
        {
            cout<<endl<<rollno<<"  "<<name;
        }

};
class Numbers
{
    private:
        int size;
        int *arr;
    public:
        Numbers(int size)
        {   
            this->size=size;
            arr=new int[size];
        }
        Numbers(Numbers &N)
        {
            size=N.size;
            arr=new int[size];
            for(int i=0;i<size;i++)
                arr[i]=N.arr[i];
        }
        ~Numbers()
        {
            delete []arr;
        }
};
class Complex
{
    private:
        int a,b;
    public:
        Complex(int x,int y):a(x),b(y) {}
        void showData()
        {
            cout<<"\na="<<a<<" b="<<b;
        }
};
void example()
{
    Complex c[5]={Complex(4,6),Complex(10,20),Complex(5,2),Complex (2,3),Complex(6,8)};
    for(int i=0;i<=4;i++)
        c[i].showData();
    
}
class Book
{
    private:
        int bookid;
        string title;
        float price;
    public:
        Book()
        {

        }
        Book(int id,string n, float p):bookid(id),title(n),price(p)
        {}
};
class Time
{
    private:
        int hr,min,sec;
    public:
        Time(int h,int m, int s):hr(h),min(m),sec(s)
        {}
};
class Customer
{
    private:
        int cust_id;
        string name,email,mobile;
    public:
        Customer()
        {
            cust_id=0;
            name="Anonymous";
            email="xyz@example.com";
            mobile="9988776655";
        }
        Customer(int id,string n, string e, string m)
        {
            cust_id=id;
            name=n;
            email=e;
            mobile=m;
        }

};
class Cuboid
{
    private:
        int length, breadth, height;
    public:
        Cuboid(int l,int b,int h)
        {
            length=l;
            breadth=b;
            height=h;
        }
};