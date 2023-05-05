#include<iostream>
using namespace std;
//int power(int x,int);
double power(double x,double y);
int main()
{
    int x,y;
    cout<<"Enter a number and power to be raised";
    cin>>x>>y;
    int z;
    z=power(x,y);
    cout<<z;

}
/*int power(int x,int y)
{int c,i,z=1;
    for(i=0;i<y;i++)
    {
        z=z*x;
    }
    return z;
}*/
double power(double x,double y)
{
      if(y==0)
	  return 1;
      if(y>0)
          return x*power(x,y-1);
      if(y<0)
	  return 1/x*power(x,y+1);
}
