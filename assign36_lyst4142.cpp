#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData(){ cout<<"\na="<<a<<" b="<<b;}
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
        friend Complex operator-(Complex);
        
        bool operator==(Complex C)
        {
            if(a==C.a && b==C.b)
                return true;
            else
                return false;
        }

};
Complex operator-(Complex C)
{
    Complex temp;
    temp.a=-C.a;
    temp.b=-C.b;
    return temp;
}
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator-(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a-Y.a;
    temp.b=X.b-Y.b;
    return temp;
}
Complex operator*(Complex X, Complex Y)
{
    Complex temp;
    temp.a=X.a*Y.a-X.b*Y.b;
    temp.b=X.a*Y.b+X.b*Y.a;
    return temp;
}
class Time
{
    private:
        int hour,min, sec;
    public:
        void setTime(int x,int y,int z)
        { hour=x; min=y; sec=x;}
        void showTime()
        {cout<<"\n"<<hour<<":"<<min<<":"<<sec;}
        friend ostream& operator<<(ostream &,Time);
        friend istream& operator>>(istream&,Time&);
        Time operator=(Time);
};
Time Time::operator=(Time t)
{
    hour=t.hour;
    min=t.min;
    sec=t.sec;
    return *this;
}
ostream& operator<<(ostream&dout,Time t)
{
    dout<<endl<<t.hour<<":"<<t.min<<":"<<t.sec;
    return dout;
}
istream& operator>>(istream &din,Time &t)
{
    din>>t.hour>>t.min>>t.sec;
    return din;
}
class Array 
{
        int *p;
        int size; 
    public:
        Array(int s)
        {
            size=s;
            p=new int[s];
        }
        Array(Array&A)
        {
            size=A.size;
            p=new int[size];
            for(int i=0;i<size;i++)
                p[i]=A.p[i];
        }
        ~Array()
        {
            delete []p;
        }
        int& operator[](int index)
        {
            if(index>=size)
            {
                cout<<"Array index out of bound";
                throw 1;
            }
            return p[index];
        }
        friend Array operator+(Array,Array);
};
Array operator+(Array A,Array B)
{
    Array temp(A.size+B.size);
    int i,j,k;
    for(i=0,j=0,k=0;i<temp.size;i++)
    {
        if(j<A.size)
        {
            temp[i]=A[j];
            j++;
        }
        else
        {
            temp[i]=B[k];
            k++;
        }
    }
    return temp;

}

class Integer
{
    private:
        int num;
    friend bool operator!(Integer);
    friend bool operator==(Integer,Integer);
};
bool operator==(Integer X,Integer Y)
{
    return X.num==Y.num;
}
bool operator!(Integer i)
{
    if(i.num!=0)
        return false;
    else
        return true;
}
class Coordinate
{
    private:
        int x,y;
    public:
        Coordinate(int x,int y):x(x),y(y){}
        Coordinate operator,(Coordinate X)
        {
            Coordinate temp(0,0);
            temp.x=X.x;
            temp.y=X.y;
            return temp;
        }
        void show()
        {cout<<endl<<"("<<x<<","<<y<<")";}
        friend istream& operator>>(istream&,Coordinate&);
        friend ostream& operator<<(ostream&,Coordinate);
};
istream& operator>>(istream &din,Coordinate &C)
{
    din>>C.x>>C.y;
    return din;
}
ostream& operator<<(ostream &dout,Coordinate C)
{
    C.show();
    return dout;
}
int main()
{
    Coordinate C1(3,4),C2(5,6),C3(10,20);
    C1=(C2,C3);
    C1.show();
    cout<<endl;
    return 0;


}
class Student
{
    private:
        int rollno;
        string name;
        int age;
    public:
        void setStudent(int r,string n,int a)
        {
            rollno=r;
            name=n;
            age=a;
        }
        void showStudent()
        {
            cout<<"\n"<<rollno<<" "<<name<<" "<<age;
        }
        bool operator==(Student s)
        {
            if(rollno==s.rollno&&name==s.name&&age==s.age)
                return true;
            else
                return false;
        }
};