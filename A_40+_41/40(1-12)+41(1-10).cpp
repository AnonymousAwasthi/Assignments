#include<iostream>
#include<string.h>
using namespace std;
class Array
{
private:
        int capacity;
        int lastIndex;
        int *ptr;
public:
        Array()
        {
            ptr=NULL;
        }
        Array(Array&);
        void createArray(int);
        void insert(int,int);
        void append(int);
        int getItem(int);
        bool IsEmpty();
        bool IsFull();
        void del(int);
        void edit(int,int);
        int count();
        int getcapacity();
        int find(int);
        Array& operator=(Array);
        void sort();
        int greatest();
        int smallest();
        int sum();
        double avg();
        void rotate(int);
        void swap(int,int);
        ~Array()
        {
            delete []ptr;
        }
};
Array::Array(Array &a)
{
    capacity=a.capacity;
    lastIndex=a.lastIndex;
    ptr=new int[capacity];
    int i;
    for(i=0;i<=lastIndex;i++)
        ptr[i]=a.ptr[i];
}
Array& Array::operator=(Array a)
{
    capacity=a.capacity;
    lastIndex=a.lastIndex;
    if(ptr!=NULL)
	delete []ptr;
    ptr=new int[capacity];
    int i;
    for(i=0;i<=lastIndex;i++)
        ptr[i]=a.ptr[i];
     return *this;
}
void Array::createArray(int x)
{
    capacity=x;
    if(ptr!=NULL)
	delete []ptr;
    ptr=new int[capacity];
    lastIndex=-1;
}
void Array::insert(int i,int y)
{
    if(i<0||i>capacity-1)
        cout<<"Invalid Index"<<endl;
    else
    {
        if(!IsFull())
        {
            int j;
            for(j=lastIndex;j>=i;j--)
            {
                ptr[j+1]=ptr[j];
            }
            ptr[i]=y;
            lastIndex++;
        }
        else
            cout<<"Overflow"<<endl;
    }

}
void Array::append(int x)
{
    if(!IsFull())
	{
	   ptr[lastIndex+1]=x;
           lastIndex++;
	}
    else
	cout<<"Overflow"<<endl;

}
int Array::getItem(int i)
{
    if(i<0||i>capacity-1)
        {cout<<"Invalid Index"<<endl;return -1;}
    else
        return ptr[i];
}
bool Array::IsEmpty()
{
    return lastIndex==-1;
}
bool Array::IsFull()
{
    return lastIndex==capacity-1;
}
void Array::del(int i)
{
    if(i<0||i>capacity-1)
        cout<<"Invalid Index"<<endl;
    else
    {
        int j;
        for(j=i+1;j<lastIndex;j++)
            ptr[j-1]=ptr[j];
        lastIndex--;
    }
}
void Array::edit(int i,int x)
{
    if(i<0||i>capacity-1)
        cout<<"Invalid Index"<<endl;
    ptr[i]=x;
}
int Array::count()
{
    return lastIndex+1;
}
int Array::getcapacity()
{
    return capacity;
}
int Array::find(int x)
{
    int i;
    for(i=0;i<=lastIndex;i++)
    {
        if(ptr[i]==x)
            return i;
    }
    return -1;
}
void Array::sort()
{
    for(int i=0;i<=lastIndex;i++)
    {
        for(int j=i+1;j<=lastIndex;j++)
        {
            if(ptr[i]>ptr[j])
            {
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
int Array::greatest()
{
    int temp=ptr[0];
    for(int i=0;i<=lastIndex;i++)
    {
        if(ptr[i]>temp)
        temp=ptr[i];
    }
    return temp;
}
int Array::smallest()
{
    int temp=ptr[0];
    for(int i=0;i<=lastIndex;i++)
    {
        if(ptr[i]<temp)
        temp=ptr[i];
    }
    return temp;
}
int Array::sum()
{
    int sum=0;
    for(int i=0;i<=lastIndex;i++)
    {
        sum+=ptr[i];
    }
    return sum;
}
double Array::avg()
{
    return (double)sum()/(lastIndex+1);
}
void Array::rotate(int d)
{
    while(d)
    {
        int temp=ptr[lastIndex];
        for(int i=lastIndex;i>0;i--)
        {
            ptr[i]=ptr[i-1]
        }
        ptr[0]=temp;
        d--;
    }
}
void Array::swap(int i,int j)
{
    ptr[j]=ptr[i]+ptr[j]-(ptr[i]=ptr[j]);
}
void Array::removeDuplicate()
{
    for(int i=0;i<=lastIndex;i++)
    {
        for(int j=i+1;j<=lastIndex;j++)
        {
            if(ptr[i]==ptr[j])
            {
                for(int k=j;k<lastIndex;k++)
                {
                    ptr[k]=ptr[k+1]
                }
                lastIndex--;
            }
        }
    }
}
int secondLargest()
{
    sort();
    return ptr[lastIndex-1];
}