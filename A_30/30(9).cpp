#include<iostream>
#include<cmath>
using namespace std;
double add(double x,double y);
int main()
{
    double l2,b2;
  cout<<"Enter length and breadth"<<endl;
  cin>>l2>>b2;
  cout<<add(l2,b2)<<endl;
  float l,b;
  cout<<"Enter length and breadth"<<endl;
  cin>>l>>b;
  cout<<add(l,b)<<endl;
  int l1,b1;
  cout<<"Enter length and breadth"<<endl;
  cin>>l1>>b1;
  cout<<add(l1,b1)<<endl;


}
double add(double x,double y)
{
    return x+y;
}
