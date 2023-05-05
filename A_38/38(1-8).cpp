#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Person
{
private:
    int age;
    char name[20];
protected:
    void setData()
    {
        cout<<"Enter age"<<endl;
        cin>>age;
        cout<<"Enter name"<<endl;
        cin>>name;
    }
    void getData()
    {
        cout<<"age is "<<age<<endl<<"name is "<<name<<endl;
    }
};
class Employee:public Person
{
private:
    int salary;
public:
    void setEmployee(int x)
    {
        setData();
        salary=x;
    }
    void getEmployee()
    {
        getData();
        cout<<"salary is "<<salary<<endl;
    }
};
class circle
{
private:
    int radius;
public:
    void setRadius(int x)
    {
        radius=x;
    }
    int getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return 3.14*radius*radius;
    }
};
class ThickCircle:public circle
{
private:
    float thickness;
public:
    void setThickness(float f)
    {
        thickness=f;
    }
    void getThickness()
    {
        cout<<thickness<<endl;
    }
    void getArea()
    {
        cout<<3.14*(getRadius()+thickness)*(getRadius()+thickness)-3.14*getRadius()*getRadius()<<endl;
    }
};
class coordinate
{
private:
    int x,y;
public:
    void setData(int a,int b)
    {
        x=a;
        y=b;
    }
    double distance()
    {
        return sqrt(x*x+y*y);
    }
    double distance(coordinate c)
    {
        return sqrt((x-c.x)*(x-c.x)+(y-c.y)*(y-c.y));
    }
    int geta(coordinate c)
    {
        return c.x-x;
    }
    int getb(coordinate c)
    {
        return c.y-y;
    }
    int getc(coordinate p)
    {
        return x*(y-p.y)-y;
    }
};
class Shape
{
private:
    char ShapeName[20];
public:
    void setShapeName(char *p)
    {
        strcpy(ShapeName,p);
    }
    void getShapeName()
    {
        cout<<ShapeName<<endl;
    }
};
class StLine:public Shape
{
private:
    coordinate c1,c2;
public:
    void setLine(int a,int b,int c,int d)
    {
        c1.setData(a,b);
        c2.setData(c,d);
        setShapeName("Straight Line");
    }
    double getDistance()
    {
        return c1.distance(c2);
    }
    void showLine()
    {
        cout<<c1.geta(c2)<<"y+"<<c1.getb(c2)<<"x+"<<c1.getc(c2)<<"=0"<<endl;
    }
};
class game
{
private:
    int a[5];
protected:
    void setScore(int,int);
    int getScore(int);
};
void game::setScore(int data,int index)
{
    if(index>4||index<0)
        cout<<"invalid index"<<endl;
    else
        a[index]=data;
}
int game::getScore(int index)
{
    return a[index];
}
class GameResult:public game
{
public:
    void setResult(int index,int data)
    {
        setScore(data,index);
    }
    int getResult(int index)
    {
        return getScore(index);
    }
    int finalResult()
    {
        int sum=0;
        for(int i=0;i<5;i++)
            sum=sum+getScore(i);
        return sum;
    }
};
class Actor
{
private:
    char name[10];
    int age;
protected:
    void setData(char *p,int a)
    {
        strcpy(name,p);
        age=a;
    }
    void getData()
    {
        cout<<name<<endl<<"age is "<<age<<endl;
    }


};
class TVActor:public Actor
{
private:
    int showTV;
protected:
    void setshowTV(int x)
    {
        showTV=x;
    }
    int getshowTV()
    {
        return showTV;
    }
public:
    void setTVValue(char *p,int a,int x)
    {
        setData(p,a);
        showTV=x;
    }
    void getTVValue()
    {
        getData();
        cout<<"Number of TV Shows ="<<showTV<<endl;
    }
};
class MovieActor:public Actor
{
private:
    int showM;
protected:
    void setshowM(int x)
    {
        showM=x;
    }
    int getshowM()
    {
        return showM;
    }
public:
    void setMValue(char *p,int a,int x)
    {
        setData(p,a);
        showM=x;
    }
    void getMValue()
    {
        getData();
        cout<<"Number of Movie Shows ="<<showM<<endl;
    }
};
class AllScreenActor: public TVActor,MovieActor
{
public:
    void setValue(char *p,int a,int x,int y)
    {
        setTVValue(p,a,x);
        setMValue(p,a,y);
    }
    void getValue()
    {
        getMValue();
        cout<<"Number of TV Shows ="<<getshowTV();
        cout<<endl<<"Total Number of Shows ="<<getshowM()+getshowTV();

    }
};
int main()
{

}
