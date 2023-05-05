#include<iostream>
#include<string.h>
using namespace std;
class person
{
private:
    char name[20];
    int age;
public:
    person(char c[],int a)
    {
        strcpy(name,c);
        age=a;
    }
};
class complex
{
private:
    int a,b;
public:
    void setdata(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void showdata()
    {
        cout<<"a="<<a<<" "<<"b="<<b;
    }

};
void instantiate()
{
    complex *p;
    p=new complex;
    p->setdata(5,2);
    p->showdata();

}
int main()
{
    person p("rahul",27);
    complex c;
    c.setdata(5,4);
    c.showdata();
    instantiate();
}
