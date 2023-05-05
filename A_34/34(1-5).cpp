#include<iostream>
#include<string.h>
using namespace std;
class cuboid
{
private:
    int l,b,h;
public:
    cuboid(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
};
class customer
{
private:
    int cust_id;
    char name[20];
    char Email[30];
    long long int mob;
public:
    customer()
    {
        cout<<"Enter customer id"<<endl;
        cin>>cust_id;
        cout<<"Enter customer name"<<endl;
        cin.ignore();
        cin.getline(name,20);
        cout<<"Enter customer mail id"<<endl;
        cin.ignore();
        cin.getline(Email,30);
        cout<<"Enter customer mobile number"<<endl;
        cin>>mob;
    }
    customer(int x,char a[],char b[],long long int y)
    {
        cust_id=x;
        strcpy(name,a);
        strcpy(Email,b);
        mob=y;
    }
    void get()
    {
        cout<<cust_id<<name<<Email<<mob;
    }
};
int main()
{
    cuboid c(3,4,5);
    customer c1,c2(123456,"Shikhar","shikharawasthi762@gmail.com",7355148142);
    c2.get();
    c1.get();
}
//q3==1,4==2,5 did earlier but not created constructor;
