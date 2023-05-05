#include<iostream>
using namespace std;
#define ARRAY_INDEX_OUT_OF_BOUND 1
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
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex operator-(Complex C)
        {
            Complex temp;
            temp.a=a-C.a;
            temp.b=b-C.b;
            return temp;
        }
        Complex operator*(Complex C)
        {
            Complex temp;
            temp.a=a*C.a-b*C.b;
            temp.b=a*C.b+b*C.a;
            return temp;
        }
        bool operator==(Complex C)
        {
            if(a==C.a && b==C.b)
                return true;
            else
                return false;
        }

};
class Time
{
    private:
        int hour,min, sec;
    public:
        void setTime(int x,int y,int z)
        { hour=x; min=y; sec=x;}
        void showTime()
        {cout<<"\n"<<hour<<":"<<min<<":"<<sec;}
        bool operator>(Time t)
        {
            if(hour>t.hour)
                return true;
            else if(hour<t.hour)
                return false;
            else if(min>t.min)
                return true;
            else if(min<t.min)
                return false;
            else if(sec>t.sec)
                return true;
            else
                return false;
        }
        Time operator++() //pre-increment
        {
            sec++;
            min=min+sec/60;
            sec=sec%60;
            hour=hour+min/60;
            min=min%60;
            return *this;
        }
        Time operator++(int) //post-increment
        {
            Time temp=*this;
            sec++;
            min=min+sec/60;
            sec=sec%60;
            hour=hour+min/60;
            min=min%60;
            return temp;
        }
        Time operator+(Time t)
        {
            Time temp;
            temp.sec=sec+t.sec;
            temp.min=min+t.min+temp.sec/60;
            temp.sec%=60;
            temp.hour=hour+t.hour+temp.min/60;
            temp.min%=60;
            return temp;
        }
};
class Matrix
{
    private:
        int M[3][3];
    public:
        void inputMatrix()
        {
            cout<<"Enter 9 numbers (row wise) for the matrix: ";
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    cin>>M[i][j];
        }
        void printMatrix()
        {
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                    cout<<M[i][j]<<"  ";
                cout<<endl;
            }
        }
        Matrix operator+(Matrix X)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    temp.M[i][j]=M[i][j]+X.M[i][j];
            return temp;
        }
        Matrix operator-(Matrix X)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    temp.M[i][j]=M[i][j]-X.M[i][j];
            return temp;
        }
        Matrix operator*(Matrix X)
        {
            Matrix temp;
            int s;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                {
                    for(int k=0,s=0;k<=2;k++){
                        s+=M[i][k]*X.M[k][j];
                    }
                    temp.M[i][j]=s;
                }
            return temp;
        }
};
class Numbers 
{
        int x,y,z; 
    public:
        Numbers operator-()
        {
            Numbers temp;
            temp.x=-x;
            temp.y=-y;
            temp.z=-z;
            return temp;
        }
};
class fraction 
{
    private:
        long numerator;
        long denominator; 
    protected:
        long lcm(int x,int y)
        {
            int L;
            for(L=x>y?x:y;L<=x*y;L++)
                if(L%x==0&&L%y==0)
                    return L;
        }
    public:
        fraction (long n=0, long d=0)
        {
            numerator=n;
            denominator=d;
        } 
        fraction operator+(fraction f)
        {
            fraction temp;
            long L=lcm(denominator,f.denominator);
            temp.numerator=numerator*(L/denominator)+f.numerator*(L/f.denominator);
            temp.denominator=L;
            return temp;
        }
        bool operator<(fraction f)
        {
            return numerator*f.denominator < f.numerator*denominator;
        }
};
class Distance
{
    private:
        int km,m,cm;
    public:
        void setDistance(int x,int y,int z)
        {km=x; m=y; cm=z;}
        void showDistance()
        {
            cout<<"\n"<<km<<"km "<<m<<"m "<<cm<<"cm";
        }
        Distance operator+(Distance d)
        {
            Distance temp;
            temp.cm=cm+d.cm;
            temp.m=m+d.m+temp.cm/100;
            temp.cm%=100;
            temp.km=km+d.km+temp.m/1000;
            temp.m%=1000;
            return temp;
        }
        Distance operator--() //pre-decrement
        {
            if(cm>0)
                cm--;
            else
            {
                cm=99;
                if(m>0)
                    m--;
                else
                {
                    m=999;
                    km--;
                }
            }
            
            return *this;
        }
        Distance operator--(int) //post-decrement
        {
            Distance temp=*this;
            if(cm>0)
                cm--;
            else
            {
                cm=99;
                if(m>0)
                    m--;
                else
                {
                    m=999;
                    km--;
                }
            }
            
            return temp;
        }
};

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
        ~Array()
        {
            delete []p;
        }
        int& operator[](int index)
        {
            if(index>=size)
            {
                cout<<"Array index out of bound";
                throw ARRAY_INDEX_OUT_OF_BOUND;
            }
            return p[index];
        }

};