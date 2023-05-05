#include<iostream>
using namespace std;

class Array
{
    int *p;
    int size;
public:
    Array()
    {
        cout<<"Enter size"<<endl;
        cin>>size;
        p=new int[size];
        cout<<"Enter "<<size<<" int values"<<endl;
        int i;
        for(i=0;i<size;i++)
            cin>>*(p+i);
    }
    ~Array()
    {
        delete []p;
    }
    int operator[](int i)
    {
        return*(p+i);
    }
    //friend istream& operator>>(istream &c,Array &a);
    friend ostream& operator<<(ostream &c,Array a);

};
istream& operator>>(istream &c,Array &a)
    {
        int i;
        for(i=0;i<a.size;i++)
            c>>*(a.p+i);
            return c;
    }
ostream& operator<<(ostream &c,Array a)
    {
        int i;
        for(i=0;i<a.size;i++)
            c<<*(a.p+i);
            return c;
    }
int main()
{
    Array t;
    int z=t[4];
    cout<<t;

}
