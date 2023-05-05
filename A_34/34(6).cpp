#include<iostream>
#include<string.h>
using namespace std;
class Number
{
private:
    int size,*arr;
public:
    Number()
    {
        cout<<"ENter size"<<endl;
        cin>>size;
        arr=(int*)calloc(size,4);
        cout<<"Enter "<<size<<" values to be stored in address whose base address is contained in arr"<<endl;
        int i;
        for(i=0;i<size;i++)
            cin>>*(arr+i);
    }
    Number(Number &n)
    {
        size=n.size;
        arr=(int*)calloc(size,4);
        int i;
        for(i=0;i<size;i++)
            *(arr+i)=*(n.arr+i);
    }
    ~Number()
    {
        free(arr);
    }
};
int main()
{
    Number n1,n2(n1);

}

