#include<iostream>
using namespace std;
class number
{
    int x,y,z;
public:
    number(){}
    number(int x,int y,int z):x(x),y(y),z(z)
    {

    }
    void showdata()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
int main()
{
    number n(4,5,6);
    -n;
    n.showdata();
}
