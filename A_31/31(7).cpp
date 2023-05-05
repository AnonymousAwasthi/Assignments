#include<iostream>
#include<string.h>
using namespace std;
float volume(float l,float b,float h);
float volume(float radius);
float volume(float r,float h);
int main()
{

}
float volume(float l,float b,float h)
{
    return l*b*h;
}
float volume(float radius)
{
    return 4*3.14*r*r*r/3;
}
float volume(float r,float h)
{
    return 3.14*r*r*h/3;
}
