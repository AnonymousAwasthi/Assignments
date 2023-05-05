#include<iostream>
#include<cmath>
using namespace std;
float area(int r);
int area(int l,int b);
float area(int,int,int);
int main()
{
    int r;
   cout<<"Enter radius of circle";
   cin>>r;
  cout<<area(r)<<endl;
  int l,b;
  cout<<"Enter length and breadth"<<endl;
  cin>>l>>b;
  cout<<area(l,b)<<endl;
  int x,y,z;
  cout<<"Enter sides of triangle"<<endl;
  cin>>x>>y>>z;
  cout<<area(x,y,z)<<endl;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
float area(int x,int y,int z)
{
    int s=(x+y+z)/2;
    int p=s*(s-x)*(s-y)*(s-z);
    return sqrt(p);
}
