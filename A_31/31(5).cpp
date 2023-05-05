#include<iostream>
#include<string.h>
using namespace std;
void prime_factor(int x);
int main()
{
   prime_factor(34);
}
void prime_factor(int x)
{
    int i,count=1;
    for(i=2;i<=x;)
        {
                if(x%i==0)
                    {       if(count==1)
                                cout<<i<<",";
                            x=x/i;
                            count++;
                    }
                    else
                        {i++;
                        count=1;}
        }

}
